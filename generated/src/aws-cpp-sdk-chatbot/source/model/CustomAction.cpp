/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CustomAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

CustomAction::CustomAction(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomAction& CustomAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomActionArn"))
  {
    m_customActionArn = jsonValue.GetString("CustomActionArn");
    m_customActionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetObject("Definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");
    m_aliasNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("Attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");
    m_actionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomAction::Jsonize() const
{
  JsonValue payload;

  if(m_customActionArnHasBeenSet)
  {
   payload.WithString("CustomActionArn", m_customActionArn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("Attachments", std::move(attachmentsJsonList));

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
