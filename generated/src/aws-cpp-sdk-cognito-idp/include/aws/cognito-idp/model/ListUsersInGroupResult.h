/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListUsersInGroupResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersInGroupResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersInGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersInGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of users in the group, and their attributes.</p>
     */
    inline const Aws::Vector<UserType>& GetUsers() const{ return m_users; }
    inline void SetUsers(const Aws::Vector<UserType>& value) { m_users = value; }
    inline void SetUsers(Aws::Vector<UserType>&& value) { m_users = std::move(value); }
    inline ListUsersInGroupResult& WithUsers(const Aws::Vector<UserType>& value) { SetUsers(value); return *this;}
    inline ListUsersInGroupResult& WithUsers(Aws::Vector<UserType>&& value) { SetUsers(std::move(value)); return *this;}
    inline ListUsersInGroupResult& AddUsers(const UserType& value) { m_users.push_back(value); return *this; }
    inline ListUsersInGroupResult& AddUsers(UserType&& value) { m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that you can use in a later request to return the next set of
     * items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsersInGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsersInGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsersInGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsersInGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsersInGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsersInGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserType> m_users;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
