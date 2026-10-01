/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/BrandProfileAttributeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>Specifies an attribute to create for a brand profile.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/BrandProfileAttributeInput">AWS
 * API Reference</a></p>
 */
class BrandProfileAttributeInput {
 public:
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeInput() = default;
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the brand profile attribute. The name is unique within a brand
   * profile.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  BrandProfileAttributeInput& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the attribute. TEXT stores an inline value. IMAGE and DOCUMENT
   * store binary media that you upload.</p>
   */
  inline BrandProfileAttributeType GetAttributeType() const { return m_attributeType; }
  inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
  inline void SetAttributeType(BrandProfileAttributeType value) {
    m_attributeTypeHasBeenSet = true;
    m_attributeType = value;
  }
  inline BrandProfileAttributeInput& WithAttributeType(BrandProfileAttributeType value) {
    SetAttributeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text value for the attribute. This value applies to attributes of type
   * TEXT. For attributes of type IMAGE or DOCUMENT, provide the media through the
   * attachment body instead.</p>
   */
  inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
  inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
  template <typename AttributeValueT = Aws::String>
  void SetAttributeValue(AttributeValueT&& value) {
    m_attributeValueHasBeenSet = true;
    m_attributeValue = std::forward<AttributeValueT>(value);
  }
  template <typename AttributeValueT = Aws::String>
  BrandProfileAttributeInput& WithAttributeValue(AttributeValueT&& value) {
    SetAttributeValue(std::forward<AttributeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The binary content for an attribute of type IMAGE or DOCUMENT. The content is
   * base64-encoded when it is sent over the wire.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetAttachmentBody() const { return m_attachmentBody; }
  inline bool AttachmentBodyHasBeenSet() const { return m_attachmentBodyHasBeenSet; }
  template <typename AttachmentBodyT = Aws::Utils::CryptoBuffer>
  void SetAttachmentBody(AttachmentBodyT&& value) {
    m_attachmentBodyHasBeenSet = true;
    m_attachmentBody = std::forward<AttachmentBodyT>(value);
  }
  template <typename AttachmentBodyT = Aws::Utils::CryptoBuffer>
  BrandProfileAttributeInput& WithAttachmentBody(AttachmentBodyT&& value) {
    SetAttachmentBody(std::forward<AttachmentBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the attribute.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BrandProfileAttributeInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the attribute.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  BrandProfileAttributeInput& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeName;

  BrandProfileAttributeType m_attributeType{BrandProfileAttributeType::NOT_SET};

  Aws::String m_attributeValue;

  Aws::Utils::CryptoBuffer m_attachmentBody{};

  Aws::String m_description;

  Aws::String m_category;
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeTypeHasBeenSet = false;
  bool m_attributeValueHasBeenSet = false;
  bool m_attachmentBodyHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
