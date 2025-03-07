﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/AuthEventType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class AdminListUserAuthEventsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline const Aws::Vector<AuthEventType>& GetAuthEvents() const{ return m_authEvents; }
    inline void SetAuthEvents(const Aws::Vector<AuthEventType>& value) { m_authEvents = value; }
    inline void SetAuthEvents(Aws::Vector<AuthEventType>&& value) { m_authEvents = std::move(value); }
    inline AdminListUserAuthEventsResult& WithAuthEvents(const Aws::Vector<AuthEventType>& value) { SetAuthEvents(value); return *this;}
    inline AdminListUserAuthEventsResult& WithAuthEvents(Aws::Vector<AuthEventType>&& value) { SetAuthEvents(std::move(value)); return *this;}
    inline AdminListUserAuthEventsResult& AddAuthEvents(const AuthEventType& value) { m_authEvents.push_back(value); return *this; }
    inline AdminListUserAuthEventsResult& AddAuthEvents(AuthEventType&& value) { m_authEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline AdminListUserAuthEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline AdminListUserAuthEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline AdminListUserAuthEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AdminListUserAuthEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AdminListUserAuthEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AdminListUserAuthEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AuthEventType> m_authEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
