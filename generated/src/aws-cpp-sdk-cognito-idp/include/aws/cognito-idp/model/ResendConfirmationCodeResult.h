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
   * <p>The response from the server when Amazon Cognito makes the request to resend
   * a confirmation code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCodeResponse">AWS
   * API Reference</a></p>
   */
  class ResendConfirmationCodeResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the phone number or email address that Amazon Cognito sent
     * the confirmation code to.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const { return m_codeDeliveryDetails; }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    void SetCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { m_codeDeliveryDetailsHasBeenSet = true; m_codeDeliveryDetails = std::forward<CodeDeliveryDetailsT>(value); }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    ResendConfirmationCodeResult& WithCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { SetCodeDeliveryDetails(std::forward<CodeDeliveryDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResendConfirmationCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CodeDeliveryDetailsType m_codeDeliveryDetails;
    bool m_codeDeliveryDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
