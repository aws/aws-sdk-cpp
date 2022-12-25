/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a cross-Region snapshot copy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterSnapshotCopyStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterSnapshotCopyStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * region after they are copied from a source region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * region after they are copied from a source region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * region after they are copied from a source region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * region after they are copied from a source region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}

  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
