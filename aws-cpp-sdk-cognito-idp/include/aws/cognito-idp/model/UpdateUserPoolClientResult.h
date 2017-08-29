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
#include <aws/cognito-idp/model/UserPoolClientType.h>
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
   * <p>Represents the response from the server to the request to update the user
   * pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClientResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientResult
  {
  public:
    UpdateUserPoolClientResult();
    UpdateUserPoolClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateUserPoolClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user pool client value from the response from the server when an update
     * user pool client request is made.</p>
     */
    inline const UserPoolClientType& GetUserPoolClient() const{ return m_userPoolClient; }

    /**
     * <p>The user pool client value from the response from the server when an update
     * user pool client request is made.</p>
     */
    inline void SetUserPoolClient(const UserPoolClientType& value) { m_userPoolClient = value; }

    /**
     * <p>The user pool client value from the response from the server when an update
     * user pool client request is made.</p>
     */
    inline void SetUserPoolClient(UserPoolClientType&& value) { m_userPoolClient = std::move(value); }

    /**
     * <p>The user pool client value from the response from the server when an update
     * user pool client request is made.</p>
     */
    inline UpdateUserPoolClientResult& WithUserPoolClient(const UserPoolClientType& value) { SetUserPoolClient(value); return *this;}

    /**
     * <p>The user pool client value from the response from the server when an update
     * user pool client request is made.</p>
     */
    inline UpdateUserPoolClientResult& WithUserPoolClient(UserPoolClientType&& value) { SetUserPoolClient(std::move(value)); return *this;}

  private:

    UserPoolClientType m_userPoolClient;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
