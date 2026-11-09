/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/MachineImagePlatform.h>

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
 * <p>Contains metadata about a machine image associated with a covered
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MachineImageMetadata">AWS
 * API Reference</a></p>
 */
class MachineImageMetadata {
 public:
  AWS_INSPECTOR2_API MachineImageMetadata() = default;
  AWS_INSPECTOR2_API MachineImageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API MachineImageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tags associated with the machine image.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  MachineImageMetadata& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  MachineImageMetadata& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform of the machine image.</p>
   */
  inline MachineImagePlatform GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(MachineImagePlatform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline MachineImageMetadata& WithPlatform(MachineImagePlatform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_tags;

  MachineImagePlatform m_platform{MachineImagePlatform::NOT_SET};
  bool m_tagsHasBeenSet = false;
  bool m_platformHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
