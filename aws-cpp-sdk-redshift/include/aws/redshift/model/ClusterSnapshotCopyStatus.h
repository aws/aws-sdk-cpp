﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * cross-region snapshot copy.</p>
   */
  class AWS_REDSHIFT_API ClusterSnapshotCopyStatus
  {
  public:
    ClusterSnapshotCopyStatus();
    ClusterSnapshotCopyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterSnapshotCopyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

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
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(value); return *this;}

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
    inline void SetRetentionPeriod(long long value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline ClusterSnapshotCopyStatus& WithRetentionPeriod(long long value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

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
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}

  private:
    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;
    long long m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;
    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
