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
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult() = default;
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMicrosoftTeamsChannelConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AWS Chatbot channel configurations for Microsoft Teams.</p>
     */
    inline const Aws::Vector<TeamsChannelConfiguration>& GetTeamChannelConfigurations() const { return m_teamChannelConfigurations; }
    template<typename TeamChannelConfigurationsT = Aws::Vector<TeamsChannelConfiguration>>
    void SetTeamChannelConfigurations(TeamChannelConfigurationsT&& value) { m_teamChannelConfigurationsHasBeenSet = true; m_teamChannelConfigurations = std::forward<TeamChannelConfigurationsT>(value); }
    template<typename TeamChannelConfigurationsT = Aws::Vector<TeamsChannelConfiguration>>
    ListMicrosoftTeamsChannelConfigurationsResult& WithTeamChannelConfigurations(TeamChannelConfigurationsT&& value) { SetTeamChannelConfigurations(std::forward<TeamChannelConfigurationsT>(value)); return *this;}
    template<typename TeamChannelConfigurationsT = TeamsChannelConfiguration>
    ListMicrosoftTeamsChannelConfigurationsResult& AddTeamChannelConfigurations(TeamChannelConfigurationsT&& value) { m_teamChannelConfigurationsHasBeenSet = true; m_teamChannelConfigurations.emplace_back(std::forward<TeamChannelConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMicrosoftTeamsChannelConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TeamsChannelConfiguration> m_teamChannelConfigurations;
    bool m_teamChannelConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
