/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AdditionalInfo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains detailed information about where a threat was
 * detected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ItemDetails">AWS
 * API Reference</a></p>
 */
class ItemDetails {
 public:
  AWS_GUARDDUTY_API ItemDetails() = default;
  AWS_GUARDDUTY_API ItemDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ItemDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the resource where the threat was detected.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ItemDetails& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path where the threat was detected.</p>
   */
  inline const Aws::String& GetItemPath() const { return m_itemPath; }
  inline bool ItemPathHasBeenSet() const { return m_itemPathHasBeenSet; }
  template <typename ItemPathT = Aws::String>
  void SetItemPath(ItemPathT&& value) {
    m_itemPathHasBeenSet = true;
    m_itemPath = std::forward<ItemPathT>(value);
  }
  template <typename ItemPathT = Aws::String>
  ItemDetails& WithItemPath(ItemPathT&& value) {
    SetItemPath(std::forward<ItemPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hash value of the infected item.</p>
   */
  inline const Aws::String& GetHash() const { return m_hash; }
  inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
  template <typename HashT = Aws::String>
  void SetHash(HashT&& value) {
    m_hashHasBeenSet = true;
    m_hash = std::forward<HashT>(value);
  }
  template <typename HashT = Aws::String>
  ItemDetails& WithHash(HashT&& value) {
    SetHash(std::forward<HashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the detected threat item.</p>
   */
  inline const AdditionalInfo& GetAdditionalInfo() const { return m_additionalInfo; }
  inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
  template <typename AdditionalInfoT = AdditionalInfo>
  void SetAdditionalInfo(AdditionalInfoT&& value) {
    m_additionalInfoHasBeenSet = true;
    m_additionalInfo = std::forward<AdditionalInfoT>(value);
  }
  template <typename AdditionalInfoT = AdditionalInfo>
  ItemDetails& WithAdditionalInfo(AdditionalInfoT&& value) {
    SetAdditionalInfo(std::forward<AdditionalInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_itemPath;

  Aws::String m_hash;

  AdditionalInfo m_additionalInfo;
  bool m_resourceArnHasBeenSet = false;
  bool m_itemPathHasBeenSet = false;
  bool m_hashHasBeenSet = false;
  bool m_additionalInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
