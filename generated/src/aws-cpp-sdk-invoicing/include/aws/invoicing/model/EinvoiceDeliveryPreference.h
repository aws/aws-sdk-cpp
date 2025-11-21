/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ConnectionTestingMethod.h>
#include <aws/invoicing/model/EinvoiceDeliveryAttachmentType.h>
#include <aws/invoicing/model/EinvoiceDeliveryDocumentType.h>
#include <aws/invoicing/model/Protocol.h>
#include <aws/invoicing/model/PurchaseOrderDataSource.h>

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
 * <p>Specifies the preferences for e-invoice delivery, including document types,
 * attachment types, and customization settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/EinvoiceDeliveryPreference">AWS
 * API Reference</a></p>
 */
class EinvoiceDeliveryPreference {
 public:
  AWS_INVOICING_API EinvoiceDeliveryPreference() = default;
  AWS_INVOICING_API EinvoiceDeliveryPreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API EinvoiceDeliveryPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The types of e-invoice documents to be delivered.</p>
   */
  inline const Aws::Vector<EinvoiceDeliveryDocumentType>& GetEinvoiceDeliveryDocumentTypes() const {
    return m_einvoiceDeliveryDocumentTypes;
  }
  inline bool EinvoiceDeliveryDocumentTypesHasBeenSet() const { return m_einvoiceDeliveryDocumentTypesHasBeenSet; }
  template <typename EinvoiceDeliveryDocumentTypesT = Aws::Vector<EinvoiceDeliveryDocumentType>>
  void SetEinvoiceDeliveryDocumentTypes(EinvoiceDeliveryDocumentTypesT&& value) {
    m_einvoiceDeliveryDocumentTypesHasBeenSet = true;
    m_einvoiceDeliveryDocumentTypes = std::forward<EinvoiceDeliveryDocumentTypesT>(value);
  }
  template <typename EinvoiceDeliveryDocumentTypesT = Aws::Vector<EinvoiceDeliveryDocumentType>>
  EinvoiceDeliveryPreference& WithEinvoiceDeliveryDocumentTypes(EinvoiceDeliveryDocumentTypesT&& value) {
    SetEinvoiceDeliveryDocumentTypes(std::forward<EinvoiceDeliveryDocumentTypesT>(value));
    return *this;
  }
  inline EinvoiceDeliveryPreference& AddEinvoiceDeliveryDocumentTypes(EinvoiceDeliveryDocumentType value) {
    m_einvoiceDeliveryDocumentTypesHasBeenSet = true;
    m_einvoiceDeliveryDocumentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of attachments to include with the e-invoice delivery.</p>
   */
  inline const Aws::Vector<EinvoiceDeliveryAttachmentType>& GetEinvoiceDeliveryAttachmentTypes() const {
    return m_einvoiceDeliveryAttachmentTypes;
  }
  inline bool EinvoiceDeliveryAttachmentTypesHasBeenSet() const { return m_einvoiceDeliveryAttachmentTypesHasBeenSet; }
  template <typename EinvoiceDeliveryAttachmentTypesT = Aws::Vector<EinvoiceDeliveryAttachmentType>>
  void SetEinvoiceDeliveryAttachmentTypes(EinvoiceDeliveryAttachmentTypesT&& value) {
    m_einvoiceDeliveryAttachmentTypesHasBeenSet = true;
    m_einvoiceDeliveryAttachmentTypes = std::forward<EinvoiceDeliveryAttachmentTypesT>(value);
  }
  template <typename EinvoiceDeliveryAttachmentTypesT = Aws::Vector<EinvoiceDeliveryAttachmentType>>
  EinvoiceDeliveryPreference& WithEinvoiceDeliveryAttachmentTypes(EinvoiceDeliveryAttachmentTypesT&& value) {
    SetEinvoiceDeliveryAttachmentTypes(std::forward<EinvoiceDeliveryAttachmentTypesT>(value));
    return *this;
  }
  inline EinvoiceDeliveryPreference& AddEinvoiceDeliveryAttachmentTypes(EinvoiceDeliveryAttachmentType value) {
    m_einvoiceDeliveryAttachmentTypesHasBeenSet = true;
    m_einvoiceDeliveryAttachmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The communication protocol to use for e-invoice delivery.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline EinvoiceDeliveryPreference& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sources of purchase order data to use for e-invoice generation and
   * delivery.</p>
   */
  inline const Aws::Vector<PurchaseOrderDataSource>& GetPurchaseOrderDataSources() const { return m_purchaseOrderDataSources; }
  inline bool PurchaseOrderDataSourcesHasBeenSet() const { return m_purchaseOrderDataSourcesHasBeenSet; }
  template <typename PurchaseOrderDataSourcesT = Aws::Vector<PurchaseOrderDataSource>>
  void SetPurchaseOrderDataSources(PurchaseOrderDataSourcesT&& value) {
    m_purchaseOrderDataSourcesHasBeenSet = true;
    m_purchaseOrderDataSources = std::forward<PurchaseOrderDataSourcesT>(value);
  }
  template <typename PurchaseOrderDataSourcesT = Aws::Vector<PurchaseOrderDataSource>>
  EinvoiceDeliveryPreference& WithPurchaseOrderDataSources(PurchaseOrderDataSourcesT&& value) {
    SetPurchaseOrderDataSources(std::forward<PurchaseOrderDataSourcesT>(value));
    return *this;
  }
  template <typename PurchaseOrderDataSourcesT = PurchaseOrderDataSource>
  EinvoiceDeliveryPreference& AddPurchaseOrderDataSources(PurchaseOrderDataSourcesT&& value) {
    m_purchaseOrderDataSourcesHasBeenSet = true;
    m_purchaseOrderDataSources.emplace_back(std::forward<PurchaseOrderDataSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method to use for testing the connection to the procurement portal.</p>
   */
  inline ConnectionTestingMethod GetConnectionTestingMethod() const { return m_connectionTestingMethod; }
  inline bool ConnectionTestingMethodHasBeenSet() const { return m_connectionTestingMethodHasBeenSet; }
  inline void SetConnectionTestingMethod(ConnectionTestingMethod value) {
    m_connectionTestingMethodHasBeenSet = true;
    m_connectionTestingMethod = value;
  }
  inline EinvoiceDeliveryPreference& WithConnectionTestingMethod(ConnectionTestingMethod value) {
    SetConnectionTestingMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when e-invoice delivery should be activated for this preference.</p>
   */
  inline const Aws::Utils::DateTime& GetEinvoiceDeliveryActivationDate() const { return m_einvoiceDeliveryActivationDate; }
  inline bool EinvoiceDeliveryActivationDateHasBeenSet() const { return m_einvoiceDeliveryActivationDateHasBeenSet; }
  template <typename EinvoiceDeliveryActivationDateT = Aws::Utils::DateTime>
  void SetEinvoiceDeliveryActivationDate(EinvoiceDeliveryActivationDateT&& value) {
    m_einvoiceDeliveryActivationDateHasBeenSet = true;
    m_einvoiceDeliveryActivationDate = std::forward<EinvoiceDeliveryActivationDateT>(value);
  }
  template <typename EinvoiceDeliveryActivationDateT = Aws::Utils::DateTime>
  EinvoiceDeliveryPreference& WithEinvoiceDeliveryActivationDate(EinvoiceDeliveryActivationDateT&& value) {
    SetEinvoiceDeliveryActivationDate(std::forward<EinvoiceDeliveryActivationDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EinvoiceDeliveryDocumentType> m_einvoiceDeliveryDocumentTypes;
  bool m_einvoiceDeliveryDocumentTypesHasBeenSet = false;

  Aws::Vector<EinvoiceDeliveryAttachmentType> m_einvoiceDeliveryAttachmentTypes;
  bool m_einvoiceDeliveryAttachmentTypesHasBeenSet = false;

  Protocol m_protocol{Protocol::NOT_SET};
  bool m_protocolHasBeenSet = false;

  Aws::Vector<PurchaseOrderDataSource> m_purchaseOrderDataSources;
  bool m_purchaseOrderDataSourcesHasBeenSet = false;

  ConnectionTestingMethod m_connectionTestingMethod{ConnectionTestingMethod::NOT_SET};
  bool m_connectionTestingMethodHasBeenSet = false;

  Aws::Utils::DateTime m_einvoiceDeliveryActivationDate{};
  bool m_einvoiceDeliveryActivationDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
