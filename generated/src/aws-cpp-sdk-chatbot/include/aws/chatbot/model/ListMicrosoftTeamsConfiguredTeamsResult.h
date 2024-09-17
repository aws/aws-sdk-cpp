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
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult();
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsConfiguredTeamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of teams in Microsoft Teams that are configured with AWS Chatbot.</p>
     */
    inline const Aws::Vector<ConfiguredTeam>& GetConfiguredTeams() const{ return m_configuredTeams; }
    inline void SetConfiguredTeams(const Aws::Vector<ConfiguredTeam>& value) { m_configuredTeams = value; }
    inline void SetConfiguredTeams(Aws::Vector<ConfiguredTeam>&& value) { m_configuredTeams = std::move(value); }
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithConfiguredTeams(const Aws::Vector<ConfiguredTeam>& value) { SetConfiguredTeams(value); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithConfiguredTeams(Aws::Vector<ConfiguredTeam>&& value) { SetConfiguredTeams(std::move(value)); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& AddConfiguredTeams(const ConfiguredTeam& value) { m_configuredTeams.push_back(value); return *this; }
    inline ListMicrosoftTeamsConfiguredTeamsResult& AddConfiguredTeams(ConfiguredTeam&& value) { m_configuredTeams.push_back(std::move(value)); return *this; }
    ///@}

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
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMicrosoftTeamsConfiguredTeamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfiguredTeam> m_configuredTeams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
