/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CustomActionDefinition.h>
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

CustomActionDefinition::CustomActionDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomActionDefinition& CustomActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommandText"))
  {
    m_commandText = jsonValue.GetString("CommandText");
    m_commandTextHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_commandTextHasBeenSet)
  {
   payload.WithString("CommandText", m_commandText);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
