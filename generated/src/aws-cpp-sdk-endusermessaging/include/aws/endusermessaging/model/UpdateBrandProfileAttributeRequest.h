/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class UpdateBrandProfileAttributeRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileAttributeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBrandProfileAttribute"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the brand profile. You can specify either the bare
   * ID or the full Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  inline bool BrandProfileIdHasBeenSet() const { return m_brandProfileIdHasBeenSet; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  UpdateBrandProfileAttributeRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

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
  UpdateBrandProfileAttributeRequest& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text value of the attribute. This value applies to attributes of type
   * TEXT.</p>
   */
  inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
  inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
  template <typename AttributeValueT = Aws::String>
  void SetAttributeValue(AttributeValueT&& value) {
    m_attributeValueHasBeenSet = true;
    m_attributeValue = std::forward<AttributeValueT>(value);
  }
  template <typename AttributeValueT = Aws::String>
  UpdateBrandProfileAttributeRequest& WithAttributeValue(AttributeValueT&& value) {
    SetAttributeValue(std::forward<AttributeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The binary content for an attribute of type IMAGE or DOCUMENT. The content is
   * base64-encoded when it is sent over the wire.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetAttachmentBody() const { return m_attachmentBody; }
  inline bool AttachmentBodyHasBeenSet() const { return m_attachmentBodyHasBeenSet; }
  template <typename AttachmentBodyT = Aws::Utils::ByteBuffer>
  void SetAttachmentBody(AttachmentBodyT&& value) {
    m_attachmentBodyHasBeenSet = true;
    m_attachmentBody = std::forward<AttachmentBodyT>(value);
  }
  template <typename AttachmentBodyT = Aws::Utils::ByteBuffer>
  UpdateBrandProfileAttributeRequest& WithAttachmentBody(AttachmentBodyT&& value) {
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
  UpdateBrandProfileAttributeRequest& WithDescription(DescriptionT&& value) {
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
  UpdateBrandProfileAttributeRequest& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::String m_attributeName;

  Aws::String m_attributeValue;

  Aws::Utils::ByteBuffer m_attachmentBody{};

  Aws::String m_description;

  Aws::String m_category;
  bool m_brandProfileIdHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeValueHasBeenSet = false;
  bool m_attachmentBodyHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
