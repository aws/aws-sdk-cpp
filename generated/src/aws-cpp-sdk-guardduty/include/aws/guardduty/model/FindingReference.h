/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains a reference to a GuardDuty finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingReference">AWS
 * API Reference</a></p>
 */
class FindingReference {
 public:
  AWS_GUARDDUTY_API FindingReference() = default;
  AWS_GUARDDUTY_API FindingReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FindingReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the finding.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  FindingReference& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the finding.</p>
   */
  inline const Aws::String& GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  template <typename UidT = Aws::String>
  void SetUid(UidT&& value) {
    m_uidHasBeenSet = true;
    m_uid = std::forward<UidT>(value);
  }
  template <typename UidT = Aws::String>
  FindingReference& WithUid(UidT&& value) {
    SetUid(std::forward<UidT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  Aws::String m_uid;
  bool m_findingTypeHasBeenSet = false;
  bool m_uidHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
