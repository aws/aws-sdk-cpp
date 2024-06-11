﻿/**
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
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }
    inline ListAppInstanceUsersResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline ListAppInstanceUsersResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline ListAppInstanceUsersResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::Vector<AppInstanceUserSummary>& GetAppInstanceUsers() const{ return m_appInstanceUsers; }
    inline void SetAppInstanceUsers(const Aws::Vector<AppInstanceUserSummary>& value) { m_appInstanceUsers = value; }
    inline void SetAppInstanceUsers(Aws::Vector<AppInstanceUserSummary>&& value) { m_appInstanceUsers = std::move(value); }
    inline ListAppInstanceUsersResult& WithAppInstanceUsers(const Aws::Vector<AppInstanceUserSummary>& value) { SetAppInstanceUsers(value); return *this;}
    inline ListAppInstanceUsersResult& WithAppInstanceUsers(Aws::Vector<AppInstanceUserSummary>&& value) { SetAppInstanceUsers(std::move(value)); return *this;}
    inline ListAppInstanceUsersResult& AddAppInstanceUsers(const AppInstanceUserSummary& value) { m_appInstanceUsers.push_back(value); return *this; }
    inline ListAppInstanceUsersResult& AddAppInstanceUsers(AppInstanceUserSummary&& value) { m_appInstanceUsers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAppInstanceUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppInstanceUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppInstanceUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAppInstanceUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAppInstanceUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAppInstanceUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;

    Aws::Vector<AppInstanceUserSummary> m_appInstanceUsers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
