﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/SlackUserIdentity.h>
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
  class DescribeSlackUserIdentitiesResult
  {
  public:
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult();
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of Slack User Identities.
     */
    inline const Aws::Vector<SlackUserIdentity>& GetSlackUserIdentities() const{ return m_slackUserIdentities; }
    inline void SetSlackUserIdentities(const Aws::Vector<SlackUserIdentity>& value) { m_slackUserIdentities = value; }
    inline void SetSlackUserIdentities(Aws::Vector<SlackUserIdentity>&& value) { m_slackUserIdentities = std::move(value); }
    inline DescribeSlackUserIdentitiesResult& WithSlackUserIdentities(const Aws::Vector<SlackUserIdentity>& value) { SetSlackUserIdentities(value); return *this;}
    inline DescribeSlackUserIdentitiesResult& WithSlackUserIdentities(Aws::Vector<SlackUserIdentity>&& value) { SetSlackUserIdentities(std::move(value)); return *this;}
    inline DescribeSlackUserIdentitiesResult& AddSlackUserIdentities(const SlackUserIdentity& value) { m_slackUserIdentities.push_back(value); return *this; }
    inline DescribeSlackUserIdentitiesResult& AddSlackUserIdentities(SlackUserIdentity&& value) { m_slackUserIdentities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeSlackUserIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSlackUserIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSlackUserIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSlackUserIdentitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSlackUserIdentitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSlackUserIdentitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SlackUserIdentity> m_slackUserIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
