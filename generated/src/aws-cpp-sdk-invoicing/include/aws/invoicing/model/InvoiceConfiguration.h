/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/EinvoiceDeliveryAttachmentType.h>
#include <aws/invoicing/model/EinvoiceDeliveryDocumentType.h>

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
 * <p>Specifies the supported document types and attachment types for invoice
 * delivery to a procurement portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceConfiguration">AWS
 * API Reference</a></p>
 */
class InvoiceConfiguration {
 public:
  AWS_INVOICING_API InvoiceConfiguration() = default;
  AWS_INVOICING_API InvoiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API InvoiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The e-invoice document types supported by the procurement portal.</p>
   */
  inline const Aws::Vector<EinvoiceDeliveryDocumentType>& GetDocumentTypes() const { return m_documentTypes; }
  inline bool DocumentTypesHasBeenSet() const { return m_documentTypesHasBeenSet; }
  template <typename DocumentTypesT = Aws::Vector<EinvoiceDeliveryDocumentType>>
  void SetDocumentTypes(DocumentTypesT&& value) {
    m_documentTypesHasBeenSet = true;
    m_documentTypes = std::forward<DocumentTypesT>(value);
  }
  template <typename DocumentTypesT = Aws::Vector<EinvoiceDeliveryDocumentType>>
  InvoiceConfiguration& WithDocumentTypes(DocumentTypesT&& value) {
    SetDocumentTypes(std::forward<DocumentTypesT>(value));
    return *this;
  }
  inline InvoiceConfiguration& AddDocumentTypes(EinvoiceDeliveryDocumentType value) {
    m_documentTypesHasBeenSet = true;
    m_documentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attachment types supported by the procurement portal for e-invoice
   * delivery.</p>
   */
  inline const Aws::Vector<EinvoiceDeliveryAttachmentType>& GetAttachmentTypes() const { return m_attachmentTypes; }
  inline bool AttachmentTypesHasBeenSet() const { return m_attachmentTypesHasBeenSet; }
  template <typename AttachmentTypesT = Aws::Vector<EinvoiceDeliveryAttachmentType>>
  void SetAttachmentTypes(AttachmentTypesT&& value) {
    m_attachmentTypesHasBeenSet = true;
    m_attachmentTypes = std::forward<AttachmentTypesT>(value);
  }
  template <typename AttachmentTypesT = Aws::Vector<EinvoiceDeliveryAttachmentType>>
  InvoiceConfiguration& WithAttachmentTypes(AttachmentTypesT&& value) {
    SetAttachmentTypes(std::forward<AttachmentTypesT>(value));
    return *this;
  }
  inline InvoiceConfiguration& AddAttachmentTypes(EinvoiceDeliveryAttachmentType value) {
    m_attachmentTypesHasBeenSet = true;
    m_attachmentTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EinvoiceDeliveryDocumentType> m_documentTypes;

  Aws::Vector<EinvoiceDeliveryAttachmentType> m_attachmentTypes;
  bool m_documentTypesHasBeenSet = false;
  bool m_attachmentTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
