/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>A source server with a specific recovery snapshot for plan
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionSourceServer">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionSourceServer {
 public:
  AWS_DRS_API RecoveryPlanExecutionSourceServer() = default;
  AWS_DRS_API RecoveryPlanExecutionSourceServer(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionSourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the source server.</p>
   */
  inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
  inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
  template <typename SourceServerIDT = Aws::String>
  void SetSourceServerID(SourceServerIDT&& value) {
    m_sourceServerIDHasBeenSet = true;
    m_sourceServerID = std::forward<SourceServerIDT>(value);
  }
  template <typename SourceServerIDT = Aws::String>
  RecoveryPlanExecutionSourceServer& WithSourceServerID(SourceServerIDT&& value) {
    SetSourceServerID(std::forward<SourceServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the recovery snapshot to use.</p>
   */
  inline const Aws::String& GetRecoverySnapshotID() const { return m_recoverySnapshotID; }
  inline bool RecoverySnapshotIDHasBeenSet() const { return m_recoverySnapshotIDHasBeenSet; }
  template <typename RecoverySnapshotIDT = Aws::String>
  void SetRecoverySnapshotID(RecoverySnapshotIDT&& value) {
    m_recoverySnapshotIDHasBeenSet = true;
    m_recoverySnapshotID = std::forward<RecoverySnapshotIDT>(value);
  }
  template <typename RecoverySnapshotIDT = Aws::String>
  RecoveryPlanExecutionSourceServer& WithRecoverySnapshotID(RecoverySnapshotIDT&& value) {
    SetRecoverySnapshotID(std::forward<RecoverySnapshotIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceServerID;

  Aws::String m_recoverySnapshotID;
  bool m_sourceServerIDHasBeenSet = false;
  bool m_recoverySnapshotIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
