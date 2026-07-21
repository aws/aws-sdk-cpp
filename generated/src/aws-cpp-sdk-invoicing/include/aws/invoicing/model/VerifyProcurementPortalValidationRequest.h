/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Invoicing {
namespace Model {

/**
 */
class VerifyProcurementPortalValidationRequest : public InvoicingRequest {
 public:
  AWS_INVOICING_API VerifyProcurementPortalValidationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "VerifyProcurementPortalValidation"; }

  AWS_INVOICING_API Aws::String SerializePayload() const override;

  AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the procurement portal preference to
   * validate.</p>
   */
  inline const Aws::String& GetProcurementPortalPreferenceArn() const { return m_procurementPortalPreferenceArn; }
  inline bool ProcurementPortalPreferenceArnHasBeenSet() const { return m_procurementPortalPreferenceArnHasBeenSet; }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  void SetProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    m_procurementPortalPreferenceArnHasBeenSet = true;
    m_procurementPortalPreferenceArn = std::forward<ProcurementPortalPreferenceArnT>(value);
  }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  VerifyProcurementPortalValidationRequest& WithProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    SetProcurementPortalPreferenceArn(std::forward<ProcurementPortalPreferenceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation code received from the procurement portal in response to a
   * previous <code>SendProcurementPortalValidation</code> request.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  VerifyProcurementPortalValidationRequest& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure idempotency of
   * the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  VerifyProcurementPortalValidationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_procurementPortalPreferenceArn;

  Aws::String m_code;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_procurementPortalPreferenceArnHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
