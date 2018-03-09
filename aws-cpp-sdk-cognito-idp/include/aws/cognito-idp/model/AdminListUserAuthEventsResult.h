/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult
  {
  public:
    AdminListUserAuthEventsResult();
    AdminListUserAuthEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminListUserAuthEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline const Aws::Vector<AuthEventType>& GetAuthEvents() const{ return m_authEvents; }

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline void SetAuthEvents(const Aws::Vector<AuthEventType>& value) { m_authEvents = value; }

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline void SetAuthEvents(Aws::Vector<AuthEventType>&& value) { m_authEvents = std::move(value); }

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline AdminListUserAuthEventsResult& WithAuthEvents(const Aws::Vector<AuthEventType>& value) { SetAuthEvents(value); return *this;}

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline AdminListUserAuthEventsResult& WithAuthEvents(Aws::Vector<AuthEventType>&& value) { SetAuthEvents(std::move(value)); return *this;}

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline AdminListUserAuthEventsResult& AddAuthEvents(const AuthEventType& value) { m_authEvents.push_back(value); return *this; }

    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline AdminListUserAuthEventsResult& AddAuthEvents(AuthEventType&& value) { m_authEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline AdminListUserAuthEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline AdminListUserAuthEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline AdminListUserAuthEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuthEventType> m_authEvents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
