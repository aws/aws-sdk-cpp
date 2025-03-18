/**
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
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminListUserAuthEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response object. It includes the <code>EventID</code>,
     * <code>EventType</code>, <code>CreationDate</code>, <code>EventRisk</code>, and
     * <code>EventResponse</code>.</p>
     */
    inline const Aws::Vector<AuthEventType>& GetAuthEvents() const { return m_authEvents; }
    template<typename AuthEventsT = Aws::Vector<AuthEventType>>
    void SetAuthEvents(AuthEventsT&& value) { m_authEventsHasBeenSet = true; m_authEvents = std::forward<AuthEventsT>(value); }
    template<typename AuthEventsT = Aws::Vector<AuthEventType>>
    AdminListUserAuthEventsResult& WithAuthEvents(AuthEventsT&& value) { SetAuthEvents(std::forward<AuthEventsT>(value)); return *this;}
    template<typename AuthEventsT = AuthEventType>
    AdminListUserAuthEventsResult& AddAuthEvents(AuthEventsT&& value) { m_authEventsHasBeenSet = true; m_authEvents.emplace_back(std::forward<AuthEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    AdminListUserAuthEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AdminListUserAuthEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthEventType> m_authEvents;
    bool m_authEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
