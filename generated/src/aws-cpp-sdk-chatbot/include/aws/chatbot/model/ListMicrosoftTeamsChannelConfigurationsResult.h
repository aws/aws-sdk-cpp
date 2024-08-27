/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/TeamsChannelConfiguration.h>
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
  class ListMicrosoftTeamsChannelConfigurationsResult
  {
  public:
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult();
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AWS Chatbot channel configurations for Microsoft Teams.</p>
     */
    inline const Aws::Vector<TeamsChannelConfiguration>& GetTeamChannelConfigurations() const{ return m_teamChannelConfigurations; }
    inline void SetTeamChannelConfigurations(const Aws::Vector<TeamsChannelConfiguration>& value) { m_teamChannelConfigurations = value; }
    inline void SetTeamChannelConfigurations(Aws::Vector<TeamsChannelConfiguration>&& value) { m_teamChannelConfigurations = std::move(value); }
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithTeamChannelConfigurations(const Aws::Vector<TeamsChannelConfiguration>& value) { SetTeamChannelConfigurations(value); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithTeamChannelConfigurations(Aws::Vector<TeamsChannelConfiguration>&& value) { SetTeamChannelConfigurations(std::move(value)); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& AddTeamChannelConfigurations(const TeamsChannelConfiguration& value) { m_teamChannelConfigurations.push_back(value); return *this; }
    inline ListMicrosoftTeamsChannelConfigurationsResult& AddTeamChannelConfigurations(TeamsChannelConfiguration&& value) { m_teamChannelConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMicrosoftTeamsChannelConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TeamsChannelConfiguration> m_teamChannelConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
