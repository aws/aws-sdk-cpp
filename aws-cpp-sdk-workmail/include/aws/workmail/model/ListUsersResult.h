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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/User.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API ListUsersResult
  {
  public:
    ListUsersResult();
    ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The overview of users for an organization.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline void SetUsers(const Aws::Vector<User>& value) { m_users = value; }

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline void SetUsers(Aws::Vector<User>&& value) { m_users = std::move(value); }

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline ListUsersResult& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline ListUsersResult& AddUsers(const User& value) { m_users.push_back(value); return *this; }

    /**
     * <p>The overview of users for an organization.</p>
     */
    inline ListUsersResult& AddUsers(User&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to use to retrieve the next page of results. This value is `null`
     * when there are no more results to return.</p>
     */
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<User> m_users;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
