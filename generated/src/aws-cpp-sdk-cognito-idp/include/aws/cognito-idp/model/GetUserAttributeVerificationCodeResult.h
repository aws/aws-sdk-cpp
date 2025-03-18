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
   * <p>The verification code response returned by the server response to get the
   * user attribute verification code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCodeResponse">AWS
   * API Reference</a></p>
   */
  class GetUserAttributeVerificationCodeResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAttributeVerificationCodeResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAttributeVerificationCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAttributeVerificationCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the delivery destination of the user attribute verification
     * code.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const { return m_codeDeliveryDetails; }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    void SetCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { m_codeDeliveryDetailsHasBeenSet = true; m_codeDeliveryDetails = std::forward<CodeDeliveryDetailsT>(value); }
    template<typename CodeDeliveryDetailsT = CodeDeliveryDetailsType>
    GetUserAttributeVerificationCodeResult& WithCodeDeliveryDetails(CodeDeliveryDetailsT&& value) { SetCodeDeliveryDetails(std::forward<CodeDeliveryDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserAttributeVerificationCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
