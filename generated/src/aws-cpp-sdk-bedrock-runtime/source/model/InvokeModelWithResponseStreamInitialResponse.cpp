/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
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

InvokeModelWithResponseStreamInitialResponse::InvokeModelWithResponseStreamInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeModelWithResponseStreamInitialResponse& InvokeModelWithResponseStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeModelWithResponseStreamInitialResponse::InvokeModelWithResponseStreamInitialResponse(const Http::HeaderValueCollection& headers) : InvokeModelWithResponseStreamInitialResponse()
{
  const auto& contentTypeIter = headers.find("x-amzn-bedrock-content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& performanceConfigLatencyIter = headers.find("x-amzn-bedrock-performanceconfig-latency");
  if(performanceConfigLatencyIter != headers.end())
  {
    m_performanceConfigLatency = PerformanceConfigLatencyMapper::GetPerformanceConfigLatencyForName(performanceConfigLatencyIter->second);
    m_performanceConfigLatencyHasBeenSet = true;
  }

}

JsonValue InvokeModelWithResponseStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
