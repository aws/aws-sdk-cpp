/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CustomOrchestration.h>
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

CustomOrchestration::CustomOrchestration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomOrchestration& CustomOrchestration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executor"))
  {
    m_executor = jsonValue.GetObject("executor");
    m_executorHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomOrchestration::Jsonize() const
{
  JsonValue payload;

  if(m_executorHasBeenSet)
  {
   payload.WithObject("executor", m_executor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
