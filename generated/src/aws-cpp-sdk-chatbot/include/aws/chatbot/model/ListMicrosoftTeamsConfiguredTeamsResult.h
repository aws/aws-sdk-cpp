/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/ConfiguredTeam.h>
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
  class ListMicrosoftTeamsConfiguredTeamsResult
  {
  public:
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult() = default;
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of teams in Microsoft Teams that are configured with AWS Chatbot.</p>
     */
    inline const Aws::Vector<ConfiguredTeam>& GetConfiguredTeams() const { return m_configuredTeams; }
    template<typename ConfiguredTeamsT = Aws::Vector<ConfiguredTeam>>
    void SetConfiguredTeams(ConfiguredTeamsT&& value) { m_configuredTeamsHasBeenSet = true; m_configuredTeams = std::forward<ConfiguredTeamsT>(value); }
    template<typename ConfiguredTeamsT = Aws::Vector<ConfiguredTeam>>
    ListMicrosoftTeamsConfiguredTeamsResult& WithConfiguredTeams(ConfiguredTeamsT&& value) { SetConfiguredTeams(std::forward<ConfiguredTeamsT>(value)); return *this;}
    template<typename ConfiguredTeamsT = ConfiguredTeam>
    ListMicrosoftTeamsConfiguredTeamsResult& AddConfiguredTeams(ConfiguredTeamsT&& value) { m_configuredTeamsHasBeenSet = true; m_configuredTeams.emplace_back(std::forward<ConfiguredTeamsT>(value)); return *this; }
    ///@}

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
    ListMicrosoftTeamsConfiguredTeamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMicrosoftTeamsConfiguredTeamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredTeam> m_configuredTeams;
    bool m_configuredTeamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
