/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationSnapshotConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration();
    AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool GetSnapshotsEnabled() const{ return m_snapshotsEnabled; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool SnapshotsEnabledHasBeenSet() const { return m_snapshotsEnabledHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetSnapshotsEnabled(bool value) { m_snapshotsEnabledHasBeenSet = true; m_snapshotsEnabled = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationSnapshotConfiguration& WithSnapshotsEnabled(bool value) { SetSnapshotsEnabled(value); return *this;}

  private:

    bool m_snapshotsEnabled;
    bool m_snapshotsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
