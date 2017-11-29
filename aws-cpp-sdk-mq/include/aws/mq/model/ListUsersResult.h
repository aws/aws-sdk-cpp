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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/UserSummary.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API ListUsersResult
  {
  public:
    ListUsersResult();
    ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline ListUsersResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline ListUsersResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline ListUsersResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * Required. The maximum number of ActiveMQ users that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Required. The maximum number of ActiveMQ users that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * Required. The maximum number of ActiveMQ users that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline ListUsersResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline ListUsersResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline ListUsersResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }

    /**
     * Required. The list of all ActiveMQ usernames for the specified broker.
     */
    inline ListUsersResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_brokerId;

    int m_maxResults;

    Aws::String m_nextToken;

    Aws::Vector<UserSummary> m_users;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
