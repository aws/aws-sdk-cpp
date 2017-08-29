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
#include <aws/cognito-idp/model/UserType.h>
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
  /**
   * <p>The response from the request to list users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ListUsersResult
  {
  public:
    ListUsersResult();
    ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline const Aws::Vector<UserType>& GetUsers() const{ return m_users; }

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline void SetUsers(const Aws::Vector<UserType>& value) { m_users = value; }

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline void SetUsers(Aws::Vector<UserType>&& value) { m_users = std::move(value); }

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<UserType>& value) { SetUsers(value); return *this;}

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline ListUsersResult& WithUsers(Aws::Vector<UserType>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline ListUsersResult& AddUsers(const UserType& value) { m_users.push_back(value); return *this; }

    /**
     * <p>The users returned in the request to list users.</p>
     */
    inline ListUsersResult& AddUsers(UserType&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::Vector<UserType> m_users;

    Aws::String m_paginationToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
