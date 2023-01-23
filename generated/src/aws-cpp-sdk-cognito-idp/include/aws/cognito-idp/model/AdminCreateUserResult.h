/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AdminCreateUserResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
