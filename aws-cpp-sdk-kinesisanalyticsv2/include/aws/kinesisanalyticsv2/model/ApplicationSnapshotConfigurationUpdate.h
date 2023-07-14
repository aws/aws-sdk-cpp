﻿/**
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
   * <p>Describes updates to whether snapshots are enabled for a Flink-based Kinesis
   * Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfigurationUpdate
  {
  public:
    ApplicationSnapshotConfigurationUpdate();
    ApplicationSnapshotConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSnapshotConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether snapshots are enabled for an application.</p>
     */
    inline bool GetSnapshotsEnabledUpdate() const{ return m_snapshotsEnabledUpdate; }

    /**
     * <p>Describes updates to whether snapshots are enabled for an application.</p>
     */
    inline bool SnapshotsEnabledUpdateHasBeenSet() const { return m_snapshotsEnabledUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether snapshots are enabled for an application.</p>
     */
    inline void SetSnapshotsEnabledUpdate(bool value) { m_snapshotsEnabledUpdateHasBeenSet = true; m_snapshotsEnabledUpdate = value; }

    /**
     * <p>Describes updates to whether snapshots are enabled for an application.</p>
     */
    inline ApplicationSnapshotConfigurationUpdate& WithSnapshotsEnabledUpdate(bool value) { SetSnapshotsEnabledUpdate(value); return *this;}

  private:

    bool m_snapshotsEnabledUpdate;
    bool m_snapshotsEnabledUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
