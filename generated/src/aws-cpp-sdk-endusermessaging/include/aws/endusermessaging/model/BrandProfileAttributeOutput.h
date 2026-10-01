/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Contains information about an attribute that was created for a brand
 * profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/BrandProfileAttributeOutput">AWS
 * API Reference</a></p>
 */
class BrandProfileAttributeOutput {
 public:
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeOutput() = default;
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API BrandProfileAttributeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BrandProfileAttributeOutput& WithAttributeName(AttributeNameT&& value) {
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
  inline BrandProfileAttributeOutput& WithAttributeType(BrandProfileAttributeType value) {
    SetAttributeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A presigned Amazon S3 URL that you can use to download the attribute media.
   * The URL is valid for one hour and is present only for attributes of type IMAGE
   * or DOCUMENT.</p>
   */
  inline const Aws::String& GetMediaDownloadUrl() const { return m_mediaDownloadUrl; }
  inline bool MediaDownloadUrlHasBeenSet() const { return m_mediaDownloadUrlHasBeenSet; }
  template <typename MediaDownloadUrlT = Aws::String>
  void SetMediaDownloadUrl(MediaDownloadUrlT&& value) {
    m_mediaDownloadUrlHasBeenSet = true;
    m_mediaDownloadUrl = std::forward<MediaDownloadUrlT>(value);
  }
  template <typename MediaDownloadUrlT = Aws::String>
  BrandProfileAttributeOutput& WithMediaDownloadUrl(MediaDownloadUrlT&& value) {
    SetMediaDownloadUrl(std::forward<MediaDownloadUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeName;

  BrandProfileAttributeType m_attributeType{BrandProfileAttributeType::NOT_SET};

  Aws::String m_mediaDownloadUrl;
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeTypeHasBeenSet = false;
  bool m_mediaDownloadUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
