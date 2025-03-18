/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class ConfirmCustomerAgreementRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API ConfirmCustomerAgreementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmCustomerAgreement"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the customer agreement. </p>
     */
    inline const Aws::String& GetAgreementName() const { return m_agreementName; }
    inline bool AgreementNameHasBeenSet() const { return m_agreementNameHasBeenSet; }
    template<typename AgreementNameT = Aws::String>
    void SetAgreementName(AgreementNameT&& value) { m_agreementNameHasBeenSet = true; m_agreementName = std::forward<AgreementNameT>(value); }
    template<typename AgreementNameT = Aws::String>
    ConfirmCustomerAgreementRequest& WithAgreementName(AgreementNameT&& value) { SetAgreementName(std::forward<AgreementNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementName;
    bool m_agreementNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
