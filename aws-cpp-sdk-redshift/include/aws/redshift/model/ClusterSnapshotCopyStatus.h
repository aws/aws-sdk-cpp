/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Returns the destination region and retention period that are configured for
   * cross-region snapshot copy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSnapshotCopyStatus">AWS
   * API Reference</a></p>
   */
  class ClusterSnapshotCopyStatus
  {
  public:
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus();
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline long long GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline void SetRetentionPeriod(long long value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline ClusterSnapshotCopyStatus& WithRetentionPeriod(long long value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline ClusterSnapshotCopyStatus& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


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
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}

  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    long long m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
