/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/TeamsUserIdentity.h>
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
  class ListMicrosoftTeamsUserIdentitiesResult
  {
  public:
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult() = default;
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>User level permissions associated to a channel configuration.</p>
     */
    inline const Aws::Vector<TeamsUserIdentity>& GetTeamsUserIdentities() const { return m_teamsUserIdentities; }
    template<typename TeamsUserIdentitiesT = Aws::Vector<TeamsUserIdentity>>
    void SetTeamsUserIdentities(TeamsUserIdentitiesT&& value) { m_teamsUserIdentitiesHasBeenSet = true; m_teamsUserIdentities = std::forward<TeamsUserIdentitiesT>(value); }
    template<typename TeamsUserIdentitiesT = Aws::Vector<TeamsUserIdentity>>
    ListMicrosoftTeamsUserIdentitiesResult& WithTeamsUserIdentities(TeamsUserIdentitiesT&& value) { SetTeamsUserIdentities(std::forward<TeamsUserIdentitiesT>(value)); return *this;}
    template<typename TeamsUserIdentitiesT = TeamsUserIdentity>
    ListMicrosoftTeamsUserIdentitiesResult& AddTeamsUserIdentities(TeamsUserIdentitiesT&& value) { m_teamsUserIdentitiesHasBeenSet = true; m_teamsUserIdentities.emplace_back(std::forward<TeamsUserIdentitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMicrosoftTeamsUserIdentitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMicrosoftTeamsUserIdentitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TeamsUserIdentity> m_teamsUserIdentities;
    bool m_teamsUserIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
