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
 * <p>Describes whether snapshots are enabled for a Managed Service for Apache
 * Flink application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfiguration">AWS
 * API Reference</a></p>
 */
class ApplicationSnapshotConfiguration {
 public:
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration() = default;
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Describes whether snapshots are enabled for a Managed Service for Apache
   * Flink application.</p>
   */
  inline bool GetSnapshotsEnabled() const { return m_snapshotsEnabled; }
  inline bool SnapshotsEnabledHasBeenSet() const { return m_snapshotsEnabledHasBeenSet; }
  inline void SetSnapshotsEnabled(bool value) {
    m_snapshotsEnabledHasBeenSet = true;
    m_snapshotsEnabled = value;
  }
  inline ApplicationSnapshotConfiguration& WithSnapshotsEnabled(bool value) {
    SetSnapshotsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the snapshot mode for a Managed Service for Apache Flink
   * application. To use enhanced snapshots, specify <code>ENHANCED_SNAPSHOTS</code>.
   * If you don't specify this parameter, the application uses
   * <code>APPLICATION_SNAPSHOTS_LEGACY</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/managed-flink/latest/java/how-snapshots.html">Enhanced
   * Snapshots</a>.</p> <p>To use <code>ENHANCED_SNAPSHOTS</code>, the application
   * must use Apache Flink version 1.20 or later.</p>
   */
  inline SnapshotMode GetSnapshotMode() const { return m_snapshotMode; }
  inline bool SnapshotModeHasBeenSet() const { return m_snapshotModeHasBeenSet; }
  inline void SetSnapshotMode(SnapshotMode value) {
    m_snapshotModeHasBeenSet = true;
    m_snapshotMode = value;
  }
  inline ApplicationSnapshotConfiguration& WithSnapshotMode(SnapshotMode value) {
    SetSnapshotMode(value);
    return *this;
  }
  ///@}
 private:
  bool m_snapshotsEnabled{false};

  SnapshotMode m_snapshotMode{SnapshotMode::NOT_SET};
  bool m_snapshotsEnabledHasBeenSet = false;
  bool m_snapshotModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
