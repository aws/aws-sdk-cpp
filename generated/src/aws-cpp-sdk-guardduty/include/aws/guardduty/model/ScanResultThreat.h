/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectionSource.h>
#include <aws/guardduty/model/ItemDetails.h>

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
 * <p>Contains information about a specific threat that was detected during the
 * malware scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanResultThreat">AWS
 * API Reference</a></p>
 */
class ScanResultThreat {
 public:
  AWS_GUARDDUTY_API ScanResultThreat() = default;
  AWS_GUARDDUTY_API ScanResultThreat(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ScanResultThreat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the detected threat.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ScanResultThreat& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that detected this threat.</p>
   */
  inline DetectionSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(DetectionSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline ScanResultThreat& WithSource(DetectionSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances of this threat that were detected.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ScanResultThreat& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hash value associated with the detected threat.</p>
   */
  inline const Aws::String& GetHash() const { return m_hash; }
  inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
  template <typename HashT = Aws::String>
  void SetHash(HashT&& value) {
    m_hashHasBeenSet = true;
    m_hash = std::forward<HashT>(value);
  }
  template <typename HashT = Aws::String>
  ScanResultThreat& WithHash(HashT&& value) {
    SetHash(std::forward<HashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about where this threat was detected.</p>
   */
  inline const Aws::Vector<ItemDetails>& GetItemDetails() const { return m_itemDetails; }
  inline bool ItemDetailsHasBeenSet() const { return m_itemDetailsHasBeenSet; }
  template <typename ItemDetailsT = Aws::Vector<ItemDetails>>
  void SetItemDetails(ItemDetailsT&& value) {
    m_itemDetailsHasBeenSet = true;
    m_itemDetails = std::forward<ItemDetailsT>(value);
  }
  template <typename ItemDetailsT = Aws::Vector<ItemDetails>>
  ScanResultThreat& WithItemDetails(ItemDetailsT&& value) {
    SetItemDetails(std::forward<ItemDetailsT>(value));
    return *this;
  }
  template <typename ItemDetailsT = ItemDetails>
  ScanResultThreat& AddItemDetails(ItemDetailsT&& value) {
    m_itemDetailsHasBeenSet = true;
    m_itemDetails.emplace_back(std::forward<ItemDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  DetectionSource m_source{DetectionSource::NOT_SET};
  bool m_sourceHasBeenSet = false;

  long long m_count{0};
  bool m_countHasBeenSet = false;

  Aws::String m_hash;
  bool m_hashHasBeenSet = false;

  Aws::Vector<ItemDetails> m_itemDetails;
  bool m_itemDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
