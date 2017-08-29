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
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response from the server for a registration request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUpResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SignUpResult
  {
  public:
    SignUpResult();
    SignUpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SignUpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline bool GetUserConfirmed() const{ return m_userConfirmed; }

    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline void SetUserConfirmed(bool value) { m_userConfirmed = value; }

    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline SignUpResult& WithUserConfirmed(bool value) { SetUserConfirmed(value); return *this;}


    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const{ return m_codeDeliveryDetails; }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline void SetCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetails = value; }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline void SetCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetails = std::move(value); }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline SignUpResult& WithCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { SetCodeDeliveryDetails(value); return *this;}

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline SignUpResult& WithCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { SetCodeDeliveryDetails(std::move(value)); return *this;}


    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline const Aws::String& GetUserSub() const{ return m_userSub; }

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline void SetUserSub(const Aws::String& value) { m_userSub = value; }

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline void SetUserSub(Aws::String&& value) { m_userSub = std::move(value); }

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline void SetUserSub(const char* value) { m_userSub.assign(value); }

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline SignUpResult& WithUserSub(const Aws::String& value) { SetUserSub(value); return *this;}

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline SignUpResult& WithUserSub(Aws::String&& value) { SetUserSub(std::move(value)); return *this;}

    /**
     * <p>The UUID of the authenticated user. This is not the same as
     * <code>username</code>.</p>
     */
    inline SignUpResult& WithUserSub(const char* value) { SetUserSub(value); return *this;}

  private:

    bool m_userConfirmed;

    CodeDeliveryDetailsType m_codeDeliveryDetails;

    Aws::String m_userSub;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
