/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/TeamsChannelConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace chatbot
{
namespace Model
{
  class CreateMicrosoftTeamsChannelConfigurationResult
  {
  public:
    AWS_CHATBOT_API CreateMicrosoftTeamsChannelConfigurationResult() = default;
    AWS_CHATBOT_API CreateMicrosoftTeamsChannelConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API CreateMicrosoftTeamsChannelConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration for a Microsoft Teams channel configured with AWS
     * Chatbot.</p>
     */
    inline const TeamsChannelConfiguration& GetChannelConfiguration() const { return m_channelConfiguration; }
    template<typename ChannelConfigurationT = TeamsChannelConfiguration>
    void SetChannelConfiguration(ChannelConfigurationT&& value) { m_channelConfigurationHasBeenSet = true; m_channelConfiguration = std::forward<ChannelConfigurationT>(value); }
    template<typename ChannelConfigurationT = TeamsChannelConfiguration>
    CreateMicrosoftTeamsChannelConfigurationResult& WithChannelConfiguration(ChannelConfigurationT&& value) { SetChannelConfiguration(std::forward<ChannelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMicrosoftTeamsChannelConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TeamsChannelConfiguration m_channelConfiguration;
    bool m_channelConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
