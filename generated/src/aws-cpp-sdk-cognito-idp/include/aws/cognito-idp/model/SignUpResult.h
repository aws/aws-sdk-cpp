/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SignUpResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the user was automatically confirmed. You can auto-confirm
     * users with a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-sign-up.html">pre
     * sign-up Lambda trigger</a>.</p>
     */
    inline bool GetUserConfirmed() const { return m_userConfirmed; }
    inline void SetUserConfirmed(bool value) { m_userConfirmedHasBeenSet = true; m_userConfirmed = value; }
    inline SignUpResult& WithUserConfirmed(bool value) { SetUserConfirmed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In user pools that automatically verify and confirm new users, Amazon Cognito
     * sends users a message with a code or link that confirms ownership of the phone
     * number or email address that they entered. The <code>CodeDeliveryDetails</code>
     * object is information about the delivery destination for that link or code.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const { return m_codeDeliveryDetails; }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    void SetCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { m_codeDeliveryDetailsHasBeenSet = true; m_codeDeliveryDetails = std::forward<CodeDeliveryDetailsT>(value); }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    SignUpResult& WithCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { SetCodeDeliveryDetails(std::forward<CodeDeliveryDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the new user, for example
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
     */
    inline const Aws::String& GetUserSub() const { return m_userSub; }
    template<typename UserSubT = Aws::String>
    void SetUserSub(UserSubT&& value) { m_userSubHasBeenSet = true; m_userSub = std::forward<UserSubT>(value); }
    template<typename UserSubT = Aws::String>
    SignUpResult& WithUserSub(UserSubT&& value) { SetUserSub(std::forward<UserSubT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A session Id that you can pass to <code>ConfirmSignUp</code> when you want to
     * immediately sign in your user with the <code>USER_AUTH</code> flow after they
     * complete sign-up.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    SignUpResult& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SignUpResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_userConfirmed{false};
    bool m_userConfirmedHasBeenSet = false;

    CodeDeliveryDetailsType m_codeDeliveryDetails;
    bool m_codeDeliveryDetailsHasBeenSet = false;

    Aws::String m_userSub;
    bool m_userSubHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
