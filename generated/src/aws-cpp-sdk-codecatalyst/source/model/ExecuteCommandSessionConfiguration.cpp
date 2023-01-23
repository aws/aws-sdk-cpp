/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ExecuteCommandSessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

ExecuteCommandSessionConfiguration::ExecuteCommandSessionConfiguration() : 
    m_commandHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

ExecuteCommandSessionConfiguration::ExecuteCommandSessionConfiguration(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecuteCommandSessionConfiguration& ExecuteCommandSessionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arguments"))
  {
    Aws::Utils::Array<JsonView> argumentsJsonList = jsonValue.GetArray("arguments");
    for(unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex)
    {
      m_arguments.push_back(argumentsJsonList[argumentsIndex].AsString());
    }
    m_argumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecuteCommandSessionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_argumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argumentsJsonList(m_arguments.size());
   for(unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex)
   {
     argumentsJsonList[argumentsIndex].AsString(m_arguments[argumentsIndex]);
   }
   payload.WithArray("arguments", std::move(argumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
