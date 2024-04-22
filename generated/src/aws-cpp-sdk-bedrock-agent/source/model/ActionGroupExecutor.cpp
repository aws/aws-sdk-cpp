/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ActionGroupExecutor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ActionGroupExecutor::ActionGroupExecutor() : 
    m_customControl(CustomControlMethod::NOT_SET),
    m_customControlHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
}

ActionGroupExecutor::ActionGroupExecutor(JsonView jsonValue) : 
    m_customControl(CustomControlMethod::NOT_SET),
    m_customControlHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

ActionGroupExecutor& ActionGroupExecutor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customControl"))
  {
    m_customControl = CustomControlMethodMapper::GetCustomControlMethodForName(jsonValue.GetString("customControl"));

    m_customControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetString("lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionGroupExecutor::Jsonize() const
{
  JsonValue payload;

  if(m_customControlHasBeenSet)
  {
   payload.WithString("customControl", CustomControlMethodMapper::GetNameForCustomControlMethod(m_customControl));
  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithString("lambda", m_lambda);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
