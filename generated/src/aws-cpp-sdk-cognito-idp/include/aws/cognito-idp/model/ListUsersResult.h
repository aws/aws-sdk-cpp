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
  /**
   * <p>The response from the request to list users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersResponse">AWS
   * API Reference</a></p>
   */
  class ListUsersResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline const Aws::Vector<UserType>& GetUsers() const{ return m_users; }

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline void SetUsers(const Aws::Vector<UserType>& value) { m_users = value; }

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline void SetUsers(Aws::Vector<UserType>&& value) { m_users = std::move(value); }

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<UserType>& value) { SetUsers(value); return *this;}

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline ListUsersResult& WithUsers(Aws::Vector<UserType>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
     */
    inline ListUsersResult& AddUsers(const UserType& value) { m_users.push_back(value); return *this; }

    /**
     * <p>A list of the user pool users, and their attributes, that match your
     * query.</p>  <p>Amazon Cognito creates a profile in your user pool for each
     * native user in your user pool, and each unique user ID from your third-party
     * identity providers (IdPs). When you link users with the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>
     * API operation, the output of <code>ListUsers</code> displays both the IdP user
     * and the native user that you linked. You can identify IdP users in the
     * <code>Users</code> object of this API response by the IdP prefix that Amazon
     * Cognito appends to <code>Username</code>.</p> 
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserType> m_users;

    Aws::String m_paginationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
