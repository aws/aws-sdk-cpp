/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Invoicing {
namespace Model {

/**
 */
class GetProcurementPortalPreferenceRequest : public InvoicingRequest {
 public:
  AWS_INVOICING_API GetProcurementPortalPreferenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProcurementPortalPreference"; }

  AWS_INVOICING_API Aws::String SerializePayload() const override;

  AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the procurement portal preference to
   * retrieve.</p>
   */
  inline const Aws::String& GetProcurementPortalPreferenceArn() const { return m_procurementPortalPreferenceArn; }
  inline bool ProcurementPortalPreferenceArnHasBeenSet() const { return m_procurementPortalPreferenceArnHasBeenSet; }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  void SetProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    m_procurementPortalPreferenceArnHasBeenSet = true;
    m_procurementPortalPreferenceArn = std::forward<ProcurementPortalPreferenceArnT>(value);
  }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  GetProcurementPortalPreferenceRequest& WithProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    SetProcurementPortalPreferenceArn(std::forward<ProcurementPortalPreferenceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_procurementPortalPreferenceArn;
  bool m_procurementPortalPreferenceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
