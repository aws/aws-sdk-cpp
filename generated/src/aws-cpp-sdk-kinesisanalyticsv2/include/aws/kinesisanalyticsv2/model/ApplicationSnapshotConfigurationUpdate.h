/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Describes updates to whether snapshots are enabled for a Managed Service for
 * Apache Flink application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfigurationUpdate">AWS
 * API Reference</a></p>
 */
class ApplicationSnapshotConfigurationUpdate {
 public:
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfigurationUpdate() = default;
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Describes updates to whether snapshots are enabled for an application.</p>
   */
  inline bool GetSnapshotsEnabledUpdate() const { return m_snapshotsEnabledUpdate; }
  inline bool SnapshotsEnabledUpdateHasBeenSet() const { return m_snapshotsEnabledUpdateHasBeenSet; }
  inline void SetSnapshotsEnabledUpdate(bool value) {
    m_snapshotsEnabledUpdateHasBeenSet = true;
    m_snapshotsEnabledUpdate = value;
  }
  inline ApplicationSnapshotConfigurationUpdate& WithSnapshotsEnabledUpdate(bool value) {
    SetSnapshotsEnabledUpdate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes updates to the snapshot mode of a Managed Service for Apache Flink
   * application. You can update the snapshot mode from
   * <code>APPLICATION_SNAPSHOTS_LEGACY</code> to <code>ENHANCED_SNAPSHOTS</code>.
   * You can't use <code>UpdateApplication</code> to change the snapshot mode back to
   * <code>APPLICATION_SNAPSHOTS_LEGACY</code>.</p> <p>To return to
   * <code>APPLICATION_SNAPSHOTS_LEGACY</code>, use <code>RollbackApplication</code>.
   * After you update an application that uses <code>ENHANCED_SNAPSHOTS</code>, you
   * can't roll it back to <code>APPLICATION_SNAPSHOTS_LEGACY</code>.</p> <p>To use
   * <code>ENHANCED_SNAPSHOTS</code>, the application must use Apache Flink version
   * 1.20 or later.</p>
   */
  inline SnapshotMode GetSnapshotModeUpdate() const { return m_snapshotModeUpdate; }
  inline bool SnapshotModeUpdateHasBeenSet() const { return m_snapshotModeUpdateHasBeenSet; }
  inline void SetSnapshotModeUpdate(SnapshotMode value) {
    m_snapshotModeUpdateHasBeenSet = true;
    m_snapshotModeUpdate = value;
  }
  inline ApplicationSnapshotConfigurationUpdate& WithSnapshotModeUpdate(SnapshotMode value) {
    SetSnapshotModeUpdate(value);
    return *this;
  }
  ///@}
 private:
  bool m_snapshotsEnabledUpdate{false};

  SnapshotMode m_snapshotModeUpdate{SnapshotMode::NOT_SET};
  bool m_snapshotsEnabledUpdateHasBeenSet = false;
  bool m_snapshotModeUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
