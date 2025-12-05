/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Represents an item in the catalog with its complete set of attributes and
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CatalogItem">AWS
 * API Reference</a></p>
 */
class CatalogItem {
 public:
  AWS_CUSTOMERPROFILES_API CatalogItem() = default;
  AWS_CUSTOMERPROFILES_API CatalogItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API CatalogItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the catalog item.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CatalogItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the catalog item.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CatalogItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product code or SKU of the catalog item.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  CatalogItem& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type classification of the catalog item.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  CatalogItem& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category to which the catalog item belongs.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  CatalogItem& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the catalog item.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CatalogItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supplementary information about the catalog item beyond the basic
   * description.</p>
   */
  inline const Aws::String& GetAdditionalInformation() const { return m_additionalInformation; }
  inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
  template <typename AdditionalInformationT = Aws::String>
  void SetAdditionalInformation(AdditionalInformationT&& value) {
    m_additionalInformationHasBeenSet = true;
    m_additionalInformation = std::forward<AdditionalInformationT>(value);
  }
  template <typename AdditionalInformationT = Aws::String>
  CatalogItem& WithAdditionalInformation(AdditionalInformationT&& value) {
    SetAdditionalInformation(std::forward<AdditionalInformationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL link to the item's image.</p>
   */
  inline const Aws::String& GetImageLink() const { return m_imageLink; }
  inline bool ImageLinkHasBeenSet() const { return m_imageLinkHasBeenSet; }
  template <typename ImageLinkT = Aws::String>
  void SetImageLink(ImageLinkT&& value) {
    m_imageLinkHasBeenSet = true;
    m_imageLink = std::forward<ImageLinkT>(value);
  }
  template <typename ImageLinkT = Aws::String>
  CatalogItem& WithImageLink(ImageLinkT&& value) {
    SetImageLink(std::forward<ImageLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL link to the item's detailed page or external resource.</p>
   */
  inline const Aws::String& GetLink() const { return m_link; }
  inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
  template <typename LinkT = Aws::String>
  void SetLink(LinkT&& value) {
    m_linkHasBeenSet = true;
    m_link = std::forward<LinkT>(value);
  }
  template <typename LinkT = Aws::String>
  CatalogItem& WithLink(LinkT&& value) {
    SetLink(std::forward<LinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the catalog item was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CatalogItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the catalog item was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CatalogItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price of the catalog item.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  CatalogItem& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attributes or properties associated with the catalog item stored
   * as key-value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  CatalogItem& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  CatalogItem& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_code;

  Aws::String m_type;

  Aws::String m_category;

  Aws::String m_description;

  Aws::String m_additionalInformation;

  Aws::String m_imageLink;

  Aws::String m_link;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_price;

  Aws::Map<Aws::String, Aws::String> m_attributes;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_additionalInformationHasBeenSet = false;
  bool m_imageLinkHasBeenSet = false;
  bool m_linkHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_priceHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
