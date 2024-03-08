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
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult();
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * User level permissions associated to a channel configuration.
     */
    inline const Aws::Vector<TeamsUserIdentity>& GetTeamsUserIdentities() const{ return m_teamsUserIdentities; }

    /**
     * User level permissions associated to a channel configuration.
     */
    inline void SetTeamsUserIdentities(const Aws::Vector<TeamsUserIdentity>& value) { m_teamsUserIdentities = value; }

    /**
     * User level permissions associated to a channel configuration.
     */
    inline void SetTeamsUserIdentities(Aws::Vector<TeamsUserIdentity>&& value) { m_teamsUserIdentities = std::move(value); }

    /**
     * User level permissions associated to a channel configuration.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& WithTeamsUserIdentities(const Aws::Vector<TeamsUserIdentity>& value) { SetTeamsUserIdentities(value); return *this;}

    /**
     * User level permissions associated to a channel configuration.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& WithTeamsUserIdentities(Aws::Vector<TeamsUserIdentity>&& value) { SetTeamsUserIdentities(std::move(value)); return *this;}

    /**
     * User level permissions associated to a channel configuration.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& AddTeamsUserIdentities(const TeamsUserIdentity& value) { m_teamsUserIdentities.push_back(value); return *this; }

    /**
     * User level permissions associated to a channel configuration.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& AddTeamsUserIdentities(TeamsUserIdentity&& value) { m_teamsUserIdentities.push_back(std::move(value)); return *this; }


    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline ListMicrosoftTeamsUserIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMicrosoftTeamsUserIdentitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMicrosoftTeamsUserIdentitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMicrosoftTeamsUserIdentitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TeamsUserIdentity> m_teamsUserIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
