/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksAccessEntryDesiredState.h>
#include <aws/batch/model/EksAccessEntryStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>Configures whether Batch manages an Amazon EKS access entry on the cluster
 * for the compute environment. For information on how the fields interact with the
 * cluster's <code>authenticationMode</code> and with other compute environments
 * that share the cluster, see <a
 * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-access-entries.html">Amazon
 * EKS access entry authentication</a> in the <i>Batch User Guide</i>.</p>
 * <p>Setting <code>desiredState=ENABLED</code> on a single compute environment
 * does not guarantee that Batch creates an access entry, and setting
 * <code>desiredState=DISABLED</code> on a single compute environment does not
 * guarantee that Batch deletes one. Batch compares the <code>desiredState</code>
 * across all compute environments that target the same cluster. The Batch-managed
 * access entry is created only when all compute environments have
 * <code>desiredState=ENABLED</code>, and deleted only when all have
 * <code>desiredState=DISABLED</code>. If you have multiple compute environments on
 * the same cluster, set <code>desiredState</code> consistently across all of them
 * to avoid uncertainty. For more information, see <a
 * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-access-entries.html#eks-access-entries-reconciliation">Reconciling
 * desiredState across compute environments</a> in the <i>Batch User Guide</i>.</p>
 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksAccessEntry">AWS
 * API Reference</a></p>
 */
class EksAccessEntry {
 public:
  AWS_BATCH_API EksAccessEntry() = default;
  AWS_BATCH_API EksAccessEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksAccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The desired access entry state for the compute environment. Valid values:</p>
   * <dl> <dt>ENABLED</dt> <dd> <p>Batch manages an access entry on the cluster for
   * the compute environment.</p> </dd> <dt>DISABLED</dt> <dd> <p>Batch deletes the
   * Batch-managed access entry for the cluster. This value is rejected if the
   * cluster's <code>authenticationMode</code> is <code>API</code>, because such a
   * cluster doesn't support the <code>aws-auth</code> ConfigMap.</p> </dd>
   * <dt>INHERIT_FROM_CLUSTER</dt> <dd> <p>Batch defers to the cluster's current
   * access entry <code>status</code>. On a cluster whose authentication mode is
   * <code>API</code>, Batch creates and manages an access entry. On a cluster whose
   * authentication mode is <code>API_AND_CONFIG_MAP</code> or
   * <code>CONFIG_MAP</code>, Batch neither adds nor removes an access entry.</p>
   * </dd> </dl>
   */
  inline EksAccessEntryDesiredState GetDesiredState() const { return m_desiredState; }
  inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
  inline void SetDesiredState(EksAccessEntryDesiredState value) {
    m_desiredStateHasBeenSet = true;
    m_desiredState = value;
  }
  inline EksAccessEntry& WithDesiredState(EksAccessEntryDesiredState value) {
    SetDesiredState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The observed state of the access entry on the cluster. <code>ACTIVE</code>
   * means that an access entry for the compute environment exists on the cluster and
   * takes precedence over the <code>aws-auth</code> ConfigMap. <code>INACTIVE</code>
   * means that no Batch-managed access entry is present. This is a read-only field
   * returned by <code>DescribeComputeEnvironments</code>.</p>
   */
  inline EksAccessEntryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EksAccessEntryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EksAccessEntry& WithStatus(EksAccessEntryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  EksAccessEntryDesiredState m_desiredState{EksAccessEntryDesiredState::NOT_SET};

  EksAccessEntryStatus m_status{EksAccessEntryStatus::NOT_SET};
  bool m_desiredStateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
