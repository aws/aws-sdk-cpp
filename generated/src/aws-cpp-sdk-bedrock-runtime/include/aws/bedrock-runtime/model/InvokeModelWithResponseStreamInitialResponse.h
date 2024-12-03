/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/PerformanceConfigLatency.h>
#include <aws/core/http/HttpTypes.h>
#include <utility>

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

  class InvokeModelWithResponseStreamInitialResponse
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamInitialResponse();
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type of the inference result.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline InvokeModelWithResponseStreamInitialResponse& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeModelWithResponseStreamInitialResponse& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeModelWithResponseStreamInitialResponse& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const PerformanceConfigLatency& GetPerformanceConfigLatency() const{ return m_performanceConfigLatency; }
    inline bool PerformanceConfigLatencyHasBeenSet() const { return m_performanceConfigLatencyHasBeenSet; }
    inline void SetPerformanceConfigLatency(const PerformanceConfigLatency& value) { m_performanceConfigLatencyHasBeenSet = true; m_performanceConfigLatency = value; }
    inline void SetPerformanceConfigLatency(PerformanceConfigLatency&& value) { m_performanceConfigLatencyHasBeenSet = true; m_performanceConfigLatency = std::move(value); }
    inline InvokeModelWithResponseStreamInitialResponse& WithPerformanceConfigLatency(const PerformanceConfigLatency& value) { SetPerformanceConfigLatency(value); return *this;}
    inline InvokeModelWithResponseStreamInitialResponse& WithPerformanceConfigLatency(PerformanceConfigLatency&& value) { SetPerformanceConfigLatency(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    PerformanceConfigLatency m_performanceConfigLatency;
    bool m_performanceConfigLatencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
