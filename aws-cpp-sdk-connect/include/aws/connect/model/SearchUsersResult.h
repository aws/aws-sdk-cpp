/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserSearchSummary.h>
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
namespace Connect
{
namespace Model
{
  class SearchUsersResult
  {
  public:
    AWS_CONNECT_API SearchUsersResult();
    AWS_CONNECT_API SearchUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the users.</p>
     */
    inline const Aws::Vector<UserSearchSummary>& GetUsers() const{ return m_users; }

    /**
     * <p>Information about the users.</p>
     */
    inline void SetUsers(const Aws::Vector<UserSearchSummary>& value) { m_users = value; }

    /**
     * <p>Information about the users.</p>
     */
    inline void SetUsers(Aws::Vector<UserSearchSummary>&& value) { m_users = std::move(value); }

    /**
     * <p>Information about the users.</p>
     */
    inline SearchUsersResult& WithUsers(const Aws::Vector<UserSearchSummary>& value) { SetUsers(value); return *this;}

    /**
     * <p>Information about the users.</p>
     */
    inline SearchUsersResult& WithUsers(Aws::Vector<UserSearchSummary>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>Information about the users.</p>
     */
    inline SearchUsersResult& AddUsers(const UserSearchSummary& value) { m_users.push_back(value); return *this; }

    /**
     * <p>Information about the users.</p>
     */
    inline SearchUsersResult& AddUsers(UserSearchSummary&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of users who matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total number of users who matched your search query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total number of users who matched your search query.</p>
     */
    inline SearchUsersResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}

  private:

    Aws::Vector<UserSearchSummary> m_users;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
