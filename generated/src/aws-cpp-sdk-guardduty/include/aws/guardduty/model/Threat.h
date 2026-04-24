/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ItemDetails.h>
#include <aws/guardduty/model/ItemPath.h>

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
 * <p>Information about the detected threats associated with the generated
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Threat">AWS
 * API Reference</a></p>
 */
class Threat {
 public:
  AWS_GUARDDUTY_API Threat() = default;
  AWS_GUARDDUTY_API Threat(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Threat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the detected threat that caused GuardDuty to generate this
   * finding.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Threat& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source of the threat that generated this finding.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  Threat& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the nested item path and hash of the protected
   * resource.</p>
   */
  inline const Aws::Vector<ItemPath>& GetItemPaths() const { return m_itemPaths; }
  inline bool ItemPathsHasBeenSet() const { return m_itemPathsHasBeenSet; }
  template <typename ItemPathsT = Aws::Vector<ItemPath>>
  void SetItemPaths(ItemPathsT&& value) {
    m_itemPathsHasBeenSet = true;
    m_itemPaths = std::forward<ItemPathsT>(value);
  }
  template <typename ItemPathsT = Aws::Vector<ItemPath>>
  Threat& WithItemPaths(ItemPathsT&& value) {
    SetItemPaths(std::forward<ItemPathsT>(value));
    return *this;
  }
  template <typename ItemPathsT = ItemPath>
  Threat& AddItemPaths(ItemPathsT&& value) {
    m_itemPathsHasBeenSet = true;
    m_itemPaths.emplace_back(std::forward<ItemPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of occurrences of this specific threat detected during the
   * scan.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline Threat& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hash identifier of the detected malware threat.</p>
   */
  inline const Aws::String& GetHash() const { return m_hash; }
  inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
  template <typename HashT = Aws::String>
  void SetHash(HashT&& value) {
    m_hashHasBeenSet = true;
    m_hash = std::forward<HashT>(value);
  }
  template <typename HashT = Aws::String>
  Threat& WithHash(HashT&& value) {
    SetHash(std::forward<HashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about the detected malware threat.</p>
   */
  inline const Aws::Vector<ItemDetails>& GetItemDetails() const { return m_itemDetails; }
  inline bool ItemDetailsHasBeenSet() const { return m_itemDetailsHasBeenSet; }
  template <typename ItemDetailsT = Aws::Vector<ItemDetails>>
  void SetItemDetails(ItemDetailsT&& value) {
    m_itemDetailsHasBeenSet = true;
    m_itemDetails = std::forward<ItemDetailsT>(value);
  }
  template <typename ItemDetailsT = Aws::Vector<ItemDetails>>
  Threat& WithItemDetails(ItemDetailsT&& value) {
    SetItemDetails(std::forward<ItemDetailsT>(value));
    return *this;
  }
  template <typename ItemDetailsT = ItemDetails>
  Threat& AddItemDetails(ItemDetailsT&& value) {
    m_itemDetailsHasBeenSet = true;
    m_itemDetails.emplace_back(std::forward<ItemDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_source;

  Aws::Vector<ItemPath> m_itemPaths;

  long long m_count{0};

  Aws::String m_hash;

  Aws::Vector<ItemDetails> m_itemDetails;
  bool m_nameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_itemPathsHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_hashHasBeenSet = false;
  bool m_itemDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
