/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
   * <p>Represents the response from the server for the registration
   * confirmation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUpResponse">AWS
   * API Reference</a></p>
   */
  class ConfirmSignUpResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmSignUpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A session identifier that you can use to immediately sign in the confirmed
     * user. You can automatically sign users in with the one-time password that they
     * provided in a successful <code>ConfirmSignUp</code> request.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    ConfirmSignUpResult& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfirmSignUpResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
