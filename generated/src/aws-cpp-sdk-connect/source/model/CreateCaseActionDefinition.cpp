/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateCaseActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CreateCaseActionDefinition::CreateCaseActionDefinition() : 
    m_fieldsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

CreateCaseActionDefinition::CreateCaseActionDefinition(JsonView jsonValue) : 
    m_fieldsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

CreateCaseActionDefinition& CreateCaseActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateCaseActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
