/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

InvokeModelWithResponseStreamInitialResponse::InvokeModelWithResponseStreamInitialResponse() : 
    m_contentTypeHasBeenSet(false)
{
}

InvokeModelWithResponseStreamInitialResponse::InvokeModelWithResponseStreamInitialResponse(JsonView jsonValue) : 
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InvokeModelWithResponseStreamInitialResponse& InvokeModelWithResponseStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue InvokeModelWithResponseStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
