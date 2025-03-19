/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/PromptRouterTrace.h>
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

PromptRouterTrace::PromptRouterTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptRouterTrace& PromptRouterTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invokedModelId"))
  {
    m_invokedModelId = jsonValue.GetString("invokedModelId");
    m_invokedModelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptRouterTrace::Jsonize() const
{
  JsonValue payload;

  if(m_invokedModelIdHasBeenSet)
  {
   payload.WithString("invokedModelId", m_invokedModelId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
