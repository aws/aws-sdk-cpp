/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

InvokeModelWithBidirectionalStreamInitialResponse::InvokeModelWithBidirectionalStreamInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeModelWithBidirectionalStreamInitialResponse& InvokeModelWithBidirectionalStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeModelWithBidirectionalStreamInitialResponse::InvokeModelWithBidirectionalStreamInitialResponse(const Http::HeaderValueCollection& headers) : InvokeModelWithBidirectionalStreamInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue InvokeModelWithBidirectionalStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
