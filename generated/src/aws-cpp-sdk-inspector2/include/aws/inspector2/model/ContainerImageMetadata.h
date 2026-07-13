/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains metadata about a container image associated with a covered
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ContainerImageMetadata">AWS
 * API Reference</a></p>
 */
class ContainerImageMetadata {
 public:
  AWS_INSPECTOR2_API ContainerImageMetadata() = default;
  AWS_INSPECTOR2_API ContainerImageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ContainerImageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tags attached to the container image.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
  inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  void SetImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags = std::forward<ImageTagsT>(value);
  }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  ContainerImageMetadata& WithImageTags(ImageTagsT&& value) {
    SetImageTags(std::forward<ImageTagsT>(value));
    return *this;
  }
  template <typename ImageTagsT = Aws::String>
  ContainerImageMetadata& AddImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags.emplace_back(std::forward<ImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the container image was pulled.</p>
   */
  inline const Aws::Utils::DateTime& GetImagePulledAt() const { return m_imagePulledAt; }
  inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }
  template <typename ImagePulledAtT = Aws::Utils::DateTime>
  void SetImagePulledAt(ImagePulledAtT&& value) {
    m_imagePulledAtHasBeenSet = true;
    m_imagePulledAt = std::forward<ImagePulledAtT>(value);
  }
  template <typename ImagePulledAtT = Aws::Utils::DateTime>
  ContainerImageMetadata& WithImagePulledAt(ImagePulledAtT&& value) {
    SetImagePulledAt(std::forward<ImagePulledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time the container image was in use.</p>
   */
  inline const Aws::Utils::DateTime& GetLastInUseAt() const { return m_lastInUseAt; }
  inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  void SetLastInUseAt(LastInUseAtT&& value) {
    m_lastInUseAtHasBeenSet = true;
    m_lastInUseAt = std::forward<LastInUseAtT>(value);
  }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  ContainerImageMetadata& WithLastInUseAt(LastInUseAtT&& value) {
    SetLastInUseAt(std::forward<LastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times the container image is in use.</p>
   */
  inline long long GetInUseCount() const { return m_inUseCount; }
  inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
  inline void SetInUseCount(long long value) {
    m_inUseCountHasBeenSet = true;
    m_inUseCount = value;
  }
  inline ContainerImageMetadata& WithInUseCount(long long value) {
    SetInUseCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_imageTags;

  Aws::Utils::DateTime m_imagePulledAt{};

  Aws::Utils::DateTime m_lastInUseAt{};

  long long m_inUseCount{0};
  bool m_imageTagsHasBeenSet = false;
  bool m_imagePulledAtHasBeenSet = false;
  bool m_lastInUseAtHasBeenSet = false;
  bool m_inUseCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
