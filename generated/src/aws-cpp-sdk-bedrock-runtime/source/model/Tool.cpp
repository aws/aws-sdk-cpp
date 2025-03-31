/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/Tool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

Tool::Tool(JsonView jsonValue)
{
  *this = jsonValue;
}

Tool& Tool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("toolSpec"))
  {
    m_toolSpec = jsonValue.GetObject("toolSpec");
    m_toolSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cachePoint"))
  {
    m_cachePoint = jsonValue.GetObject("cachePoint");
    m_cachePointHasBeenSet = true;
  }
  return *this;
}

JsonValue Tool::Jsonize() const
{
  JsonValue payload;

  if(m_toolSpecHasBeenSet)
  {
   payload.WithObject("toolSpec", m_toolSpec.Jsonize());

  }

  if(m_cachePointHasBeenSet)
  {
   payload.WithObject("cachePoint", m_cachePoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
