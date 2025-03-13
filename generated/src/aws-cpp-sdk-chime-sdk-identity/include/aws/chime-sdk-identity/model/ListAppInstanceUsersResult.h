/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstanceUsersResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult() = default;
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    ListAppInstanceUsersResult& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::Vector<AppInstanceUserSummary>& GetAppInstanceUsers() const { return m_appInstanceUsers; }
    template<typename AppInstanceUsersT = Aws::Vector<AppInstanceUserSummary>>
    void SetAppInstanceUsers(AppInstanceUsersT&& value) { m_appInstanceUsersHasBeenSet = true; m_appInstanceUsers = std::forward<AppInstanceUsersT>(value); }
    template<typename AppInstanceUsersT = Aws::Vector<AppInstanceUserSummary>>
    ListAppInstanceUsersResult& WithAppInstanceUsers(AppInstanceUsersT&& value) { SetAppInstanceUsers(std::forward<AppInstanceUsersT>(value)); return *this;}
    template<typename AppInstanceUsersT = AppInstanceUserSummary>
    ListAppInstanceUsersResult& AddAppInstanceUsers(AppInstanceUsersT&& value) { m_appInstanceUsersHasBeenSet = true; m_appInstanceUsers.emplace_back(std::forward<AppInstanceUsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInstanceUsersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInstanceUsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<AppInstanceUserSummary> m_appInstanceUsers;
    bool m_appInstanceUsersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
