/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/User.h>
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
namespace Chime
{
namespace Model
{
  class ListUsersResult
  {
  public:
    AWS_CHIME_API ListUsersResult();
    AWS_CHIME_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of users and user details.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }

    /**
     * <p>List of users and user details.</p>
     */
    inline void SetUsers(const Aws::Vector<User>& value) { m_users = value; }

    /**
     * <p>List of users and user details.</p>
     */
    inline void SetUsers(Aws::Vector<User>&& value) { m_users = std::move(value); }

    /**
     * <p>List of users and user details.</p>
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}

    /**
     * <p>List of users and user details.</p>
     */
    inline ListUsersResult& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>List of users and user details.</p>
     */
    inline ListUsersResult& AddUsers(const User& value) { m_users.push_back(value); return *this; }

    /**
     * <p>List of users and user details.</p>
     */
    inline ListUsersResult& AddUsers(User&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<User> m_users;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
