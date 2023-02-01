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
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceUsersResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceUsersResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceUsersResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::Vector<AppInstanceUserSummary>& GetAppInstanceUsers() const{ return m_appInstanceUsers; }

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUsers(const Aws::Vector<AppInstanceUserSummary>& value) { m_appInstanceUsers = value; }

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUsers(Aws::Vector<AppInstanceUserSummary>&& value) { m_appInstanceUsers = std::move(value); }

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUsersResult& WithAppInstanceUsers(const Aws::Vector<AppInstanceUserSummary>& value) { SetAppInstanceUsers(value); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUsersResult& WithAppInstanceUsers(Aws::Vector<AppInstanceUserSummary>&& value) { SetAppInstanceUsers(std::move(value)); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUsersResult& AddAppInstanceUsers(const AppInstanceUserSummary& value) { m_appInstanceUsers.push_back(value); return *this; }

    /**
     * <p>The information for each requested <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUsersResult& AddAppInstanceUsers(AppInstanceUserSummary&& value) { m_appInstanceUsers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListAppInstanceUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListAppInstanceUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListAppInstanceUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appInstanceArn;

    Aws::Vector<AppInstanceUserSummary> m_appInstanceUsers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
