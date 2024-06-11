﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SessionSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListSessionAnalyticsDataResult
  {
  public:
    AWS_LEXMODELSV2_API ListSessionAnalyticsDataResult();
    AWS_LEXMODELSV2_API ListSessionAnalyticsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListSessionAnalyticsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot that the sessions belong to.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline ListSessionAnalyticsDataResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListSessionAnalyticsDataResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListSessionAnalyticsDataResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListSessionAnalyticsData operation contains more
     * results than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListSessionAnalyticsData request to return the next page of results. For a
     * complete set of results, call the ListSessionAnalyticsData operation until the
     * nextToken returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSessionAnalyticsDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSessionAnalyticsDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSessionAnalyticsDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information about a session with
     * the bot.</p>
     */
    inline const Aws::Vector<SessionSpecification>& GetSessions() const{ return m_sessions; }
    inline void SetSessions(const Aws::Vector<SessionSpecification>& value) { m_sessions = value; }
    inline void SetSessions(Aws::Vector<SessionSpecification>&& value) { m_sessions = std::move(value); }
    inline ListSessionAnalyticsDataResult& WithSessions(const Aws::Vector<SessionSpecification>& value) { SetSessions(value); return *this;}
    inline ListSessionAnalyticsDataResult& WithSessions(Aws::Vector<SessionSpecification>&& value) { SetSessions(std::move(value)); return *this;}
    inline ListSessionAnalyticsDataResult& AddSessions(const SessionSpecification& value) { m_sessions.push_back(value); return *this; }
    inline ListSessionAnalyticsDataResult& AddSessions(SessionSpecification&& value) { m_sessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSessionAnalyticsDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSessionAnalyticsDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSessionAnalyticsDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_nextToken;

    Aws::Vector<SessionSpecification> m_sessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
