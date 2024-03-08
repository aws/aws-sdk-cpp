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
  class GetMicrosoftTeamsChannelConfigurationResult
  {
  public:
    AWS_CHATBOT_API GetMicrosoftTeamsChannelConfigurationResult();
    AWS_CHATBOT_API GetMicrosoftTeamsChannelConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API GetMicrosoftTeamsChannelConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The configuration for a Microsoft Teams channel configured with AWS Chatbot.
     */
    inline const TeamsChannelConfiguration& GetChannelConfiguration() const{ return m_channelConfiguration; }

    /**
     * The configuration for a Microsoft Teams channel configured with AWS Chatbot.
     */
    inline void SetChannelConfiguration(const TeamsChannelConfiguration& value) { m_channelConfiguration = value; }

    /**
     * The configuration for a Microsoft Teams channel configured with AWS Chatbot.
     */
    inline void SetChannelConfiguration(TeamsChannelConfiguration&& value) { m_channelConfiguration = std::move(value); }

    /**
     * The configuration for a Microsoft Teams channel configured with AWS Chatbot.
     */
    inline GetMicrosoftTeamsChannelConfigurationResult& WithChannelConfiguration(const TeamsChannelConfiguration& value) { SetChannelConfiguration(value); return *this;}

    /**
     * The configuration for a Microsoft Teams channel configured with AWS Chatbot.
     */
    inline GetMicrosoftTeamsChannelConfigurationResult& WithChannelConfiguration(TeamsChannelConfiguration&& value) { SetChannelConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMicrosoftTeamsChannelConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMicrosoftTeamsChannelConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMicrosoftTeamsChannelConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TeamsChannelConfiguration m_channelConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
