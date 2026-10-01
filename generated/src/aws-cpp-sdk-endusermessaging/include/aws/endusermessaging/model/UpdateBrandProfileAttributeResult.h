/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/BrandProfileAttributeType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class UpdateBrandProfileAttributeResult {
 public:
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileAttributeResult() = default;
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileAttributeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the brand profile attribute. The name is unique within a brand
   * profile.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  UpdateBrandProfileAttributeResult& WithAttributeName(AttributeNameT&& value) {
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
  inline void SetAttributeType(BrandProfileAttributeType value) {
    m_attributeTypeHasBeenSet = true;
    m_attributeType = value;
  }
  inline UpdateBrandProfileAttributeResult& WithAttributeType(BrandProfileAttributeType value) {
    SetAttributeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text value of the attribute. This value applies to attributes of type
   * TEXT.</p>
   */
  inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
  template <typename AttributeValueT = Aws::String>
  void SetAttributeValue(AttributeValueT&& value) {
    m_attributeValueHasBeenSet = true;
    m_attributeValue = std::forward<AttributeValueT>(value);
  }
  template <typename AttributeValueT = Aws::String>
  UpdateBrandProfileAttributeResult& WithAttributeValue(AttributeValueT&& value) {
    SetAttributeValue(std::forward<AttributeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the attribute.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateBrandProfileAttributeResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the attribute.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  UpdateBrandProfileAttributeResult& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME content type of the attribute media.</p>
   */
  inline const Aws::String& GetMediaContentType() const { return m_mediaContentType; }
  template <typename MediaContentTypeT = Aws::String>
  void SetMediaContentType(MediaContentTypeT&& value) {
    m_mediaContentTypeHasBeenSet = true;
    m_mediaContentType = std::forward<MediaContentTypeT>(value);
  }
  template <typename MediaContentTypeT = Aws::String>
  UpdateBrandProfileAttributeResult& WithMediaContentType(MediaContentTypeT&& value) {
    SetMediaContentType(std::forward<MediaContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the attribute media, in bytes.</p>
   */
  inline long long GetMediaSizeBytes() const { return m_mediaSizeBytes; }
  inline void SetMediaSizeBytes(long long value) {
    m_mediaSizeBytesHasBeenSet = true;
    m_mediaSizeBytes = value;
  }
  inline UpdateBrandProfileAttributeResult& WithMediaSizeBytes(long long value) {
    SetMediaSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateBrandProfileAttributeResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateBrandProfileAttributeResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateBrandProfileAttributeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_attributeName;

  BrandProfileAttributeType m_attributeType{BrandProfileAttributeType::NOT_SET};

  Aws::String m_attributeValue;

  Aws::String m_description;

  Aws::String m_category;

  Aws::String m_mediaContentType;

  long long m_mediaSizeBytes{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeTypeHasBeenSet = false;
  bool m_attributeValueHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_mediaContentTypeHasBeenSet = false;
  bool m_mediaSizeBytesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
