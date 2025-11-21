/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/EinvoiceDeliveryDocumentType.h>
#include <aws/invoicing/model/PurchaseOrderDataSourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Specifies the source configuration for retrieving purchase order
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/PurchaseOrderDataSource">AWS
 * API Reference</a></p>
 */
class PurchaseOrderDataSource {
 public:
  AWS_INVOICING_API PurchaseOrderDataSource() = default;
  AWS_INVOICING_API PurchaseOrderDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API PurchaseOrderDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of e-invoice document that requires purchase order data.</p>
   */
  inline EinvoiceDeliveryDocumentType GetEinvoiceDeliveryDocumentType() const { return m_einvoiceDeliveryDocumentType; }
  inline bool EinvoiceDeliveryDocumentTypeHasBeenSet() const { return m_einvoiceDeliveryDocumentTypeHasBeenSet; }
  inline void SetEinvoiceDeliveryDocumentType(EinvoiceDeliveryDocumentType value) {
    m_einvoiceDeliveryDocumentTypeHasBeenSet = true;
    m_einvoiceDeliveryDocumentType = value;
  }
  inline PurchaseOrderDataSource& WithEinvoiceDeliveryDocumentType(EinvoiceDeliveryDocumentType value) {
    SetEinvoiceDeliveryDocumentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of source for purchase order data.</p>
   */
  inline PurchaseOrderDataSourceType GetPurchaseOrderDataSourceType() const { return m_purchaseOrderDataSourceType; }
  inline bool PurchaseOrderDataSourceTypeHasBeenSet() const { return m_purchaseOrderDataSourceTypeHasBeenSet; }
  inline void SetPurchaseOrderDataSourceType(PurchaseOrderDataSourceType value) {
    m_purchaseOrderDataSourceTypeHasBeenSet = true;
    m_purchaseOrderDataSourceType = value;
  }
  inline PurchaseOrderDataSource& WithPurchaseOrderDataSourceType(PurchaseOrderDataSourceType value) {
    SetPurchaseOrderDataSourceType(value);
    return *this;
  }
  ///@}
 private:
  EinvoiceDeliveryDocumentType m_einvoiceDeliveryDocumentType{EinvoiceDeliveryDocumentType::NOT_SET};
  bool m_einvoiceDeliveryDocumentTypeHasBeenSet = false;

  PurchaseOrderDataSourceType m_purchaseOrderDataSourceType{PurchaseOrderDataSourceType::NOT_SET};
  bool m_purchaseOrderDataSourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
