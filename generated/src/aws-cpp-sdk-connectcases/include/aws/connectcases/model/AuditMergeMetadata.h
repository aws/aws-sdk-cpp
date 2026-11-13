/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Information about the merge that produced an audit event.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/AuditMergeMetadata">AWS
 * API Reference</a></p>
 */
class AuditMergeMetadata {
 public:
  AWS_CONNECTCASES_API AuditMergeMetadata() = default;
  AWS_CONNECTCASES_API AuditMergeMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API AuditMergeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the merge. All audit events produced by the same
   * merge, on both cases, have the same value. Use it to group the changes that a
   * merge made.</p>
   */
  inline const Aws::String& GetMergeEventId() const { return m_mergeEventId; }
  inline bool MergeEventIdHasBeenSet() const { return m_mergeEventIdHasBeenSet; }
  template <typename MergeEventIdT = Aws::String>
  void SetMergeEventId(MergeEventIdT&& value) {
    m_mergeEventIdHasBeenSet = true;
    m_mergeEventId = std::forward<MergeEventIdT>(value);
  }
  template <typename MergeEventIdT = Aws::String>
  AuditMergeMetadata& WithMergeEventId(MergeEventIdT&& value) {
    SetMergeEventId(std::forward<MergeEventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the primary case of the merge.</p>
   */
  inline const Aws::String& GetPrimaryCaseId() const { return m_primaryCaseId; }
  inline bool PrimaryCaseIdHasBeenSet() const { return m_primaryCaseIdHasBeenSet; }
  template <typename PrimaryCaseIdT = Aws::String>
  void SetPrimaryCaseId(PrimaryCaseIdT&& value) {
    m_primaryCaseIdHasBeenSet = true;
    m_primaryCaseId = std::forward<PrimaryCaseIdT>(value);
  }
  template <typename PrimaryCaseIdT = Aws::String>
  AuditMergeMetadata& WithPrimaryCaseId(PrimaryCaseIdT&& value) {
    SetPrimaryCaseId(std::forward<PrimaryCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the secondary case of the merge.</p>
   */
  inline const Aws::String& GetSecondaryCaseId() const { return m_secondaryCaseId; }
  inline bool SecondaryCaseIdHasBeenSet() const { return m_secondaryCaseIdHasBeenSet; }
  template <typename SecondaryCaseIdT = Aws::String>
  void SetSecondaryCaseId(SecondaryCaseIdT&& value) {
    m_secondaryCaseIdHasBeenSet = true;
    m_secondaryCaseId = std::forward<SecondaryCaseIdT>(value);
  }
  template <typename SecondaryCaseIdT = Aws::String>
  AuditMergeMetadata& WithSecondaryCaseId(SecondaryCaseIdT&& value) {
    SetSecondaryCaseId(std::forward<SecondaryCaseIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mergeEventId;

  Aws::String m_primaryCaseId;

  Aws::String m_secondaryCaseId;
  bool m_mergeEventIdHasBeenSet = false;
  bool m_primaryCaseIdHasBeenSet = false;
  bool m_secondaryCaseIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
