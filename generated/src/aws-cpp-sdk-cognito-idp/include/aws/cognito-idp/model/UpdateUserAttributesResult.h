/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
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
   * <p>Represents the response from the server for the request to update user
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributesResponse">AWS
   * API Reference</a></p>
   */
  class UpdateUserAttributesResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the attribute-update request includes an email address or phone number
     * attribute, Amazon Cognito sends a message to users with a code that confirms
     * ownership of the new value that they entered. The
     * <code>CodeDeliveryDetails</code> object is information about the delivery
     * destination for that link or code. This behavior happens in user pools
     * configured to automatically verify changes to those attributes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#verifying-when-users-change-their-email-or-phone-number">Verifying
     * when users change their email or phone number</a>.</p>
     */
    inline const Aws::Vector<CodeDeliveryDetailsType>& GetCodeDeliveryDetailsList() const { return m_codeDeliveryDetailsList; }
    template<typename CodeDeliveryDetailsListT = Aws::Vector<CodeDeliveryDetailsType>>
    void SetCodeDeliveryDetailsList(CodeDeliveryDetailsListT&& value) { m_codeDeliveryDetailsListHasBeenSet = true; m_codeDeliveryDetailsList = std::forward<CodeDeliveryDetailsListT>(value); }
    template<typename CodeDeliveryDetailsListT = Aws::Vector<CodeDeliveryDetailsType>>
    UpdateUserAttributesResult& WithCodeDeliveryDetailsList(CodeDeliveryDetailsListT&& value) { SetCodeDeliveryDetailsList(std::forward<CodeDeliveryDetailsListT>(value)); return *this;}
    template<typename CodeDeliveryDetailsListT = CodeDeliveryDetailsType>
    UpdateUserAttributesResult& AddCodeDeliveryDetailsList(CodeDeliveryDetailsListT&& value) { m_codeDeliveryDetailsListHasBeenSet = true; m_codeDeliveryDetailsList.emplace_back(std::forward<CodeDeliveryDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateUserAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeDeliveryDetailsType> m_codeDeliveryDetailsList;
    bool m_codeDeliveryDetailsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
