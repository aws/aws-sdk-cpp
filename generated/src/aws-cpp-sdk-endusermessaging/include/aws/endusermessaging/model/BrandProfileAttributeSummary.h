/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains summary information about a brand profile attribute in a list
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/BrandProfileAttributeSummary">AWS
 * API Reference</a></p>
 */
class BrandProfileAttributeSummary {
 public:
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeSummary() = default;
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BrandProfileAttributeSummary& WithAttributeName(AttributeNameT&& value) {
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
  inline BrandProfileAttributeSummary& WithAttributeType(BrandProfileAttributeType value) {
    SetAttributeType(value);
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
  BrandProfileAttributeSummary& WithDescription(DescriptionT&& value) {
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
  BrandProfileAttributeSummary& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BrandProfileAttributeSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BrandProfileAttributeSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeName;

  BrandProfileAttributeType m_attributeType{BrandProfileAttributeType::NOT_SET};

  Aws::String m_description;

  Aws::String m_category;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
