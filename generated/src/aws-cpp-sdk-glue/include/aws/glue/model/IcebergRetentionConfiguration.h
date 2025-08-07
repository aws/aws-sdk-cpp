/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>The configuration for an Iceberg snapshot retention optimizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergRetentionConfiguration">AWS
   * API Reference</a></p>
   */
  class IcebergRetentionConfiguration
  {
  public:
    AWS_GLUE_API IcebergRetentionConfiguration() = default;
    AWS_GLUE_API IcebergRetentionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergRetentionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days to retain the Iceberg snapshots. If an input is not
     * provided, the corresponding Iceberg table configuration field will be used or if
     * not present, the default value 5 will be used.</p>
     */
    inline int GetSnapshotRetentionPeriodInDays() const { return m_snapshotRetentionPeriodInDays; }
    inline bool SnapshotRetentionPeriodInDaysHasBeenSet() const { return m_snapshotRetentionPeriodInDaysHasBeenSet; }
    inline void SetSnapshotRetentionPeriodInDays(int value) { m_snapshotRetentionPeriodInDaysHasBeenSet = true; m_snapshotRetentionPeriodInDays = value; }
    inline IcebergRetentionConfiguration& WithSnapshotRetentionPeriodInDays(int value) { SetSnapshotRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Iceberg snapshots to retain within the retention period. If an
     * input is not provided, the corresponding Iceberg table configuration field will
     * be used or if not present, the default value 1 will be used.</p>
     */
    inline int GetNumberOfSnapshotsToRetain() const { return m_numberOfSnapshotsToRetain; }
    inline bool NumberOfSnapshotsToRetainHasBeenSet() const { return m_numberOfSnapshotsToRetainHasBeenSet; }
    inline void SetNumberOfSnapshotsToRetain(int value) { m_numberOfSnapshotsToRetainHasBeenSet = true; m_numberOfSnapshotsToRetain = value; }
    inline IcebergRetentionConfiguration& WithNumberOfSnapshotsToRetain(int value) { SetNumberOfSnapshotsToRetain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to false, snapshots are only deleted from table metadata, and the
     * underlying data and metadata files are not deleted.</p>
     */
    inline bool GetCleanExpiredFiles() const { return m_cleanExpiredFiles; }
    inline bool CleanExpiredFilesHasBeenSet() const { return m_cleanExpiredFilesHasBeenSet; }
    inline void SetCleanExpiredFiles(bool value) { m_cleanExpiredFilesHasBeenSet = true; m_cleanExpiredFiles = value; }
    inline IcebergRetentionConfiguration& WithCleanExpiredFiles(bool value) { SetCleanExpiredFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval in hours between retention job runs. This parameter controls how
     * frequently the retention optimizer will run to clean up expired snapshots. The
     * value must be between 3 and 168 hours (7 days). If an input is not provided, the
     * default value 24 will be used.</p>
     */
    inline int GetRunRateInHours() const { return m_runRateInHours; }
    inline bool RunRateInHoursHasBeenSet() const { return m_runRateInHoursHasBeenSet; }
    inline void SetRunRateInHours(int value) { m_runRateInHoursHasBeenSet = true; m_runRateInHours = value; }
    inline IcebergRetentionConfiguration& WithRunRateInHours(int value) { SetRunRateInHours(value); return *this;}
    ///@}
  private:

    int m_snapshotRetentionPeriodInDays{0};
    bool m_snapshotRetentionPeriodInDaysHasBeenSet = false;

    int m_numberOfSnapshotsToRetain{0};
    bool m_numberOfSnapshotsToRetainHasBeenSet = false;

    bool m_cleanExpiredFiles{false};
    bool m_cleanExpiredFilesHasBeenSet = false;

    int m_runRateInHours{0};
    bool m_runRateInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
