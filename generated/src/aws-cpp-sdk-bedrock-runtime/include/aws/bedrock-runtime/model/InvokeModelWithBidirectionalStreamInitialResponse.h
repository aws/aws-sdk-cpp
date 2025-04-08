/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  class InvokeModelWithBidirectionalStreamInitialResponse
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamInitialResponse() = default;
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
