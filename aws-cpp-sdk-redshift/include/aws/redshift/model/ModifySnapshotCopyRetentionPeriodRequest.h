/*
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
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API ModifySnapshotCopyRetentionPeriodRequest : public RedshiftRequest
  {
  public:
    ModifySnapshotCopyRetentionPeriodRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for automated snapshots that are copied to a destination
     * region.</p> <p>Constraints: Must be the valid name of an existing cluster that
     * has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>If you decrease the
     * retention period for automated snapshots that are copied to a destination
     * region, Amazon Redshift will delete any existing automated snapshots that were
     * copied to the destination region and that fall outside of the new retention
     * period.</p> <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>If you decrease the
     * retention period for automated snapshots that are copied to a destination
     * region, Amazon Redshift will delete any existing automated snapshots that were
     * copied to the destination region and that fall outside of the new retention
     * period.</p> <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>If you decrease the
     * retention period for automated snapshots that are copied to a destination
     * region, Amazon Redshift will delete any existing automated snapshots that were
     * copied to the destination region and that fall outside of the new retention
     * period.</p> <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
