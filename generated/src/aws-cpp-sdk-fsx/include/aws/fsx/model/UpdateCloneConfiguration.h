/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/CloneSplitAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Specifies changes to the clone configuration of an FSx for ONTAP
 * volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateCloneConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateCloneConfiguration {
 public:
  AWS_FSX_API UpdateCloneConfiguration() = default;
  AWS_FSX_API UpdateCloneConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API UpdateCloneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to <code>START</code> to split the clone from its parent volume.
   * Splitting copies the data that the clone shares with the parent volume, so that
   * the clone becomes an independent volume that no longer depends on the parent.
   * After the split, the volume uses storage for all of its data.</p> <p>When you
   * split a clone, keep the following in mind:</p> <ul> <li> <p>
   * <code>SplitAction</code> must be the only property that you change in the
   * <code>UpdateVolume</code> request.</p> </li> <li> <p>You can't split a data
   * protection (<code>DP</code>) clone.</p> </li> <li> <p>The split fails if the
   * clone has locked snapshots, such as snapshots that a SnapMirror relationship
   * uses or that a retention period protects, or if a backup of the clone is in
   * progress. To allow the split, Amazon FSx deletes the snapshots that it created
   * for backups of the clone, so the next backup transfers more data. Amazon FSx
   * doesn't delete snapshots that you created.</p> </li> </ul> <p>The split runs in
   * the background. To monitor its progress, use the <code>VOLUME_CLONE_SPLIT</code>
   * administrative action in the volume's <code>AdministrativeActions</code>. When
   * the split completes, the volume no longer has a
   * <code>CloneConfiguration</code>.</p>
   */
  inline CloneSplitAction GetSplitAction() const { return m_splitAction; }
  inline bool SplitActionHasBeenSet() const { return m_splitActionHasBeenSet; }
  inline void SetSplitAction(CloneSplitAction value) {
    m_splitActionHasBeenSet = true;
    m_splitAction = value;
  }
  inline UpdateCloneConfiguration& WithSplitAction(CloneSplitAction value) {
    SetSplitAction(value);
    return *this;
  }
  ///@}
 private:
  CloneSplitAction m_splitAction{CloneSplitAction::NOT_SET};
  bool m_splitActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
