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
   * <p>Represents the response from the server to the request to create the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserResult
  {
  public:
    AdminCreateUserResult();
    AdminCreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminCreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created user.</p>
     */
    inline const UserType& GetUser() const{ return m_user; }

    /**
     * <p>The newly created user.</p>
     */
    inline void SetUser(const UserType& value) { m_user = value; }

    /**
     * <p>The newly created user.</p>
     */
    inline void SetUser(UserType&& value) { m_user = std::move(value); }

    /**
     * <p>The newly created user.</p>
     */
    inline AdminCreateUserResult& WithUser(const UserType& value) { SetUser(value); return *this;}

    /**
     * <p>The newly created user.</p>
     */
    inline AdminCreateUserResult& WithUser(UserType&& value) { SetUser(std::move(value)); return *this;}

  private:

    UserType m_user;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
