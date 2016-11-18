/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/UserType.h>

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
   * <p>Represents the response from the server to the request to create the
   * user.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserResult
  {
  public:
    AdminCreateUserResult();
    AdminCreateUserResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminCreateUserResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The user returned in the request to create a new user.</p>
     */
    inline const UserType& GetUser() const{ return m_user; }

    /**
     * <p>The user returned in the request to create a new user.</p>
     */
    inline void SetUser(const UserType& value) { m_user = value; }

    /**
     * <p>The user returned in the request to create a new user.</p>
     */
    inline void SetUser(UserType&& value) { m_user = value; }

    /**
     * <p>The user returned in the request to create a new user.</p>
     */
    inline AdminCreateUserResult& WithUser(const UserType& value) { SetUser(value); return *this;}

    /**
     * <p>The user returned in the request to create a new user.</p>
     */
    inline AdminCreateUserResult& WithUser(UserType&& value) { SetUser(value); return *this;}

  private:
    UserType m_user;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
