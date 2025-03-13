/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/StreamingConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{
  class GetMessagingStreamingConfigurationsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult() = default;
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetMessagingStreamingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The streaming settings.</p>
     */
    inline const Aws::Vector<StreamingConfiguration>& GetStreamingConfigurations() const { return m_streamingConfigurations; }
    template<typename StreamingConfigurationsT = Aws::Vector<StreamingConfiguration>>
    void SetStreamingConfigurations(StreamingConfigurationsT&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = std::forward<StreamingConfigurationsT>(value); }
    template<typename StreamingConfigurationsT = Aws::Vector<StreamingConfiguration>>
    GetMessagingStreamingConfigurationsResult& WithStreamingConfigurations(StreamingConfigurationsT&& value) { SetStreamingConfigurations(std::forward<StreamingConfigurationsT>(value)); return *this;}
    template<typename StreamingConfigurationsT = StreamingConfiguration>
    GetMessagingStreamingConfigurationsResult& AddStreamingConfigurations(StreamingConfigurationsT&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations.emplace_back(std::forward<StreamingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMessagingStreamingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StreamingConfiguration> m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
