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
#include <aws/cognito-idp/model/UserPoolType.h>
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
   * <p>Represents the response from the server for the request to create a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolResult
  {
  public:
    CreateUserPoolResult();
    CreateUserPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUserPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A container for the user pool details.</p>
     */
    inline const UserPoolType& GetUserPool() const{ return m_userPool; }

    /**
     * <p>A container for the user pool details.</p>
     */
    inline void SetUserPool(const UserPoolType& value) { m_userPool = value; }

    /**
     * <p>A container for the user pool details.</p>
     */
    inline void SetUserPool(UserPoolType&& value) { m_userPool = std::move(value); }

    /**
     * <p>A container for the user pool details.</p>
     */
    inline CreateUserPoolResult& WithUserPool(const UserPoolType& value) { SetUserPool(value); return *this;}

    /**
     * <p>A container for the user pool details.</p>
     */
    inline CreateUserPoolResult& WithUserPool(UserPoolType&& value) { SetUserPool(std::move(value)); return *this;}

  private:

    UserPoolType m_userPool;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
