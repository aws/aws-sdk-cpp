/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageStatusFilter.h>
#include <aws/ecr/model/TagStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An object representing a filter on a <a>ListImages</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImagesFilter">AWS
 * API Reference</a></p>
 */
class ListImagesFilter {
 public:
  AWS_ECR_API ListImagesFilter() = default;
  AWS_ECR_API ListImagesFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ListImagesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tag status with which to filter your <a>ListImages</a> results.</p>
   */
  inline TagStatus GetTagStatus() const { return m_tagStatus; }
  inline bool TagStatusHasBeenSet() const { return m_tagStatusHasBeenSet; }
  inline void SetTagStatus(TagStatus value) {
    m_tagStatusHasBeenSet = true;
    m_tagStatus = value;
  }
  inline ListImagesFilter& WithTagStatus(TagStatus value) {
    SetTagStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image status with which to filter your <a>ListImages</a> results. Valid
   * values are <code>ACTIVE</code>, <code>ARCHIVED</code>, and
   * <code>ACTIVATING</code>.</p>
   */
  inline ImageStatusFilter GetImageStatus() const { return m_imageStatus; }
  inline bool ImageStatusHasBeenSet() const { return m_imageStatusHasBeenSet; }
  inline void SetImageStatus(ImageStatusFilter value) {
    m_imageStatusHasBeenSet = true;
    m_imageStatus = value;
  }
  inline ListImagesFilter& WithImageStatus(ImageStatusFilter value) {
    SetImageStatus(value);
    return *this;
  }
  ///@}
 private:
  TagStatus m_tagStatus{TagStatus::NOT_SET};

  ImageStatusFilter m_imageStatus{ImageStatusFilter::NOT_SET};
  bool m_tagStatusHasBeenSet = false;
  bool m_imageStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
