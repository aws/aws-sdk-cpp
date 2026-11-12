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
 * <p>Contains a reference to a MITRE ATT&amp;CK tactic or technique.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ThreatReference">AWS
 * API Reference</a></p>
 */
class ThreatReference {
 public:
  AWS_GUARDDUTY_API ThreatReference() = default;
  AWS_GUARDDUTY_API ThreatReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ThreatReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the tactic or technique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ThreatReference& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK identifier of the tactic or technique, such as
   * <code>TA0002</code> or <code>T1059.004</code>.</p>
   */
  inline const Aws::String& GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  template <typename UidT = Aws::String>
  void SetUid(UidT&& value) {
    m_uidHasBeenSet = true;
    m_uid = std::forward<UidT>(value);
  }
  template <typename UidT = Aws::String>
  ThreatReference& WithUid(UidT&& value) {
    SetUid(std::forward<UidT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_uid;
  bool m_nameHasBeenSet = false;
  bool m_uidHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
