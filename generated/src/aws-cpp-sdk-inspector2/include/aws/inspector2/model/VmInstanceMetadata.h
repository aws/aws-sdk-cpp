/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/VmPlatform.h>

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
 * <p>Contains metadata about a virtual machine (VM) instance associated with a
 * covered resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/VmInstanceMetadata">AWS
 * API Reference</a></p>
 */
class VmInstanceMetadata {
 public:
  AWS_INSPECTOR2_API VmInstanceMetadata() = default;
  AWS_INSPECTOR2_API VmInstanceMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API VmInstanceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tags associated with the VM instance.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  VmInstanceMetadata& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  VmInstanceMetadata& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform of the VM instance.</p>
   */
  inline VmPlatform GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(VmPlatform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline VmInstanceMetadata& WithPlatform(VmPlatform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inventory hash of the VM instance.</p>
   */
  inline const Aws::String& GetInventoryHash() const { return m_inventoryHash; }
  inline bool InventoryHashHasBeenSet() const { return m_inventoryHashHasBeenSet; }
  template <typename InventoryHashT = Aws::String>
  void SetInventoryHash(InventoryHashT&& value) {
    m_inventoryHashHasBeenSet = true;
    m_inventoryHash = std::forward<InventoryHashT>(value);
  }
  template <typename InventoryHashT = Aws::String>
  VmInstanceMetadata& WithInventoryHash(InventoryHashT&& value) {
    SetInventoryHash(std::forward<InventoryHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image reference of the VM instance.</p>
   */
  inline const Aws::String& GetVmImageReference() const { return m_vmImageReference; }
  inline bool VmImageReferenceHasBeenSet() const { return m_vmImageReferenceHasBeenSet; }
  template <typename VmImageReferenceT = Aws::String>
  void SetVmImageReference(VmImageReferenceT&& value) {
    m_vmImageReferenceHasBeenSet = true;
    m_vmImageReference = std::forward<VmImageReferenceT>(value);
  }
  template <typename VmImageReferenceT = Aws::String>
  VmInstanceMetadata& WithVmImageReference(VmImageReferenceT&& value) {
    SetVmImageReference(std::forward<VmImageReferenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_tags;

  VmPlatform m_platform{VmPlatform::NOT_SET};

  Aws::String m_inventoryHash;

  Aws::String m_vmImageReference;
  bool m_tagsHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_inventoryHashHasBeenSet = false;
  bool m_vmImageReferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
