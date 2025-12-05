/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceStatus.h>

#include <utility>

namespace Aws {
namespace Invoicing {
namespace Model {

/**
 */
class UpdateProcurementPortalPreferenceStatusRequest : public InvoicingRequest {
 public:
  AWS_INVOICING_API UpdateProcurementPortalPreferenceStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProcurementPortalPreferenceStatus"; }

  AWS_INVOICING_API Aws::String SerializePayload() const override;

  AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the procurement portal preference to
   * update.</p>
   */
  inline const Aws::String& GetProcurementPortalPreferenceArn() const { return m_procurementPortalPreferenceArn; }
  inline bool ProcurementPortalPreferenceArnHasBeenSet() const { return m_procurementPortalPreferenceArnHasBeenSet; }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  void SetProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    m_procurementPortalPreferenceArnHasBeenSet = true;
    m_procurementPortalPreferenceArn = std::forward<ProcurementPortalPreferenceArnT>(value);
  }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  UpdateProcurementPortalPreferenceStatusRequest& WithProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    SetProcurementPortalPreferenceArn(std::forward<ProcurementPortalPreferenceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the e-invoice delivery preference.</p>
   */
  inline ProcurementPortalPreferenceStatus GetEinvoiceDeliveryPreferenceStatus() const { return m_einvoiceDeliveryPreferenceStatus; }
  inline bool EinvoiceDeliveryPreferenceStatusHasBeenSet() const { return m_einvoiceDeliveryPreferenceStatusHasBeenSet; }
  inline void SetEinvoiceDeliveryPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    m_einvoiceDeliveryPreferenceStatusHasBeenSet = true;
    m_einvoiceDeliveryPreferenceStatus = value;
  }
  inline UpdateProcurementPortalPreferenceStatusRequest& WithEinvoiceDeliveryPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    SetEinvoiceDeliveryPreferenceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the e-invoice delivery preference status update, providing
   * context for the change.</p>
   */
  inline const Aws::String& GetEinvoiceDeliveryPreferenceStatusReason() const { return m_einvoiceDeliveryPreferenceStatusReason; }
  inline bool EinvoiceDeliveryPreferenceStatusReasonHasBeenSet() const { return m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet; }
  template <typename EinvoiceDeliveryPreferenceStatusReasonT = Aws::String>
  void SetEinvoiceDeliveryPreferenceStatusReason(EinvoiceDeliveryPreferenceStatusReasonT&& value) {
    m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet = true;
    m_einvoiceDeliveryPreferenceStatusReason = std::forward<EinvoiceDeliveryPreferenceStatusReasonT>(value);
  }
  template <typename EinvoiceDeliveryPreferenceStatusReasonT = Aws::String>
  UpdateProcurementPortalPreferenceStatusRequest& WithEinvoiceDeliveryPreferenceStatusReason(
      EinvoiceDeliveryPreferenceStatusReasonT&& value) {
    SetEinvoiceDeliveryPreferenceStatusReason(std::forward<EinvoiceDeliveryPreferenceStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the purchase order retrieval preference.</p>
   */
  inline ProcurementPortalPreferenceStatus GetPurchaseOrderRetrievalPreferenceStatus() const {
    return m_purchaseOrderRetrievalPreferenceStatus;
  }
  inline bool PurchaseOrderRetrievalPreferenceStatusHasBeenSet() const { return m_purchaseOrderRetrievalPreferenceStatusHasBeenSet; }
  inline void SetPurchaseOrderRetrievalPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    m_purchaseOrderRetrievalPreferenceStatusHasBeenSet = true;
    m_purchaseOrderRetrievalPreferenceStatus = value;
  }
  inline UpdateProcurementPortalPreferenceStatusRequest& WithPurchaseOrderRetrievalPreferenceStatus(
      ProcurementPortalPreferenceStatus value) {
    SetPurchaseOrderRetrievalPreferenceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the purchase order retrieval preference status update,
   * providing context for the change.</p>
   */
  inline const Aws::String& GetPurchaseOrderRetrievalPreferenceStatusReason() const {
    return m_purchaseOrderRetrievalPreferenceStatusReason;
  }
  inline bool PurchaseOrderRetrievalPreferenceStatusReasonHasBeenSet() const {
    return m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet;
  }
  template <typename PurchaseOrderRetrievalPreferenceStatusReasonT = Aws::String>
  void SetPurchaseOrderRetrievalPreferenceStatusReason(PurchaseOrderRetrievalPreferenceStatusReasonT&& value) {
    m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet = true;
    m_purchaseOrderRetrievalPreferenceStatusReason = std::forward<PurchaseOrderRetrievalPreferenceStatusReasonT>(value);
  }
  template <typename PurchaseOrderRetrievalPreferenceStatusReasonT = Aws::String>
  UpdateProcurementPortalPreferenceStatusRequest& WithPurchaseOrderRetrievalPreferenceStatusReason(
      PurchaseOrderRetrievalPreferenceStatusReasonT&& value) {
    SetPurchaseOrderRetrievalPreferenceStatusReason(std::forward<PurchaseOrderRetrievalPreferenceStatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_procurementPortalPreferenceArn;

  ProcurementPortalPreferenceStatus m_einvoiceDeliveryPreferenceStatus{ProcurementPortalPreferenceStatus::NOT_SET};

  Aws::String m_einvoiceDeliveryPreferenceStatusReason;

  ProcurementPortalPreferenceStatus m_purchaseOrderRetrievalPreferenceStatus{ProcurementPortalPreferenceStatus::NOT_SET};

  Aws::String m_purchaseOrderRetrievalPreferenceStatusReason;
  bool m_procurementPortalPreferenceArnHasBeenSet = false;
  bool m_einvoiceDeliveryPreferenceStatusHasBeenSet = false;
  bool m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet = false;
  bool m_purchaseOrderRetrievalPreferenceStatusHasBeenSet = false;
  bool m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
