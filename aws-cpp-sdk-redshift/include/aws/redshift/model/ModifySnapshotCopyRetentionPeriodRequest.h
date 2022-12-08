/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifySnapshotCopyRetentionPeriodMessage">AWS
   * API Reference</a></p>
   */
  class ModifySnapshotCopyRetentionPeriodRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifySnapshotCopyRetentionPeriodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotCopyRetentionPeriod"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to change the
     * retention period for either automated or manual snapshots that are copied to a
     * destination Amazon Web Services Region.</p> <p>Constraints: Must be the valid
     * name of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The number of days to retain automated snapshots in the destination Amazon
     * Web Services Region after they are copied from the source Amazon Web Services
     * Region.</p> <p>By default, this only changes the retention period of copied
     * automated snapshots. </p> <p>If you decrease the retention period for automated
     * snapshots that are copied to a destination Amazon Web Services Region, Amazon
     * Redshift deletes any existing automated snapshots that were copied to the
     * destination Amazon Web Services Region and that fall outside of the new
     * retention period.</p> <p>Constraints: Must be at least 1 and no more than 35 for
     * automated snapshots. </p> <p>If you specify the <code>manual</code> option, only
     * newly copied manual snapshots will have the new retention period. </p> <p>If you
     * specify the value of -1 newly copied manual snapshots are retained
     * indefinitely.</p> <p>Constraints: The number of days must be either -1 or an
     * integer between 1 and 3,653 for manual snapshots.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Amazon
     * Web Services Region after they are copied from the source Amazon Web Services
     * Region.</p> <p>By default, this only changes the retention period of copied
     * automated snapshots. </p> <p>If you decrease the retention period for automated
     * snapshots that are copied to a destination Amazon Web Services Region, Amazon
     * Redshift deletes any existing automated snapshots that were copied to the
     * destination Amazon Web Services Region and that fall outside of the new
     * retention period.</p> <p>Constraints: Must be at least 1 and no more than 35 for
     * automated snapshots. </p> <p>If you specify the <code>manual</code> option, only
     * newly copied manual snapshots will have the new retention period. </p> <p>If you
     * specify the value of -1 newly copied manual snapshots are retained
     * indefinitely.</p> <p>Constraints: The number of days must be either -1 or an
     * integer between 1 and 3,653 for manual snapshots.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Amazon
     * Web Services Region after they are copied from the source Amazon Web Services
     * Region.</p> <p>By default, this only changes the retention period of copied
     * automated snapshots. </p> <p>If you decrease the retention period for automated
     * snapshots that are copied to a destination Amazon Web Services Region, Amazon
     * Redshift deletes any existing automated snapshots that were copied to the
     * destination Amazon Web Services Region and that fall outside of the new
     * retention period.</p> <p>Constraints: Must be at least 1 and no more than 35 for
     * automated snapshots. </p> <p>If you specify the <code>manual</code> option, only
     * newly copied manual snapshots will have the new retention period. </p> <p>If you
     * specify the value of -1 newly copied manual snapshots are retained
     * indefinitely.</p> <p>Constraints: The number of days must be either -1 or an
     * integer between 1 and 3,653 for manual snapshots.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days to retain automated snapshots in the destination Amazon
     * Web Services Region after they are copied from the source Amazon Web Services
     * Region.</p> <p>By default, this only changes the retention period of copied
     * automated snapshots. </p> <p>If you decrease the retention period for automated
     * snapshots that are copied to a destination Amazon Web Services Region, Amazon
     * Redshift deletes any existing automated snapshots that were copied to the
     * destination Amazon Web Services Region and that fall outside of the new
     * retention period.</p> <p>Constraints: Must be at least 1 and no more than 35 for
     * automated snapshots. </p> <p>If you specify the <code>manual</code> option, only
     * newly copied manual snapshots will have the new retention period. </p> <p>If you
     * specify the value of -1 newly copied manual snapshots are retained
     * indefinitely.</p> <p>Constraints: The number of days must be either -1 or an
     * integer between 1 and 3,653 for manual snapshots.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>Indicates whether to apply the snapshot retention period to newly copied
     * manual snapshots instead of automated snapshots.</p>
     */
    inline bool GetManual() const{ return m_manual; }

    /**
     * <p>Indicates whether to apply the snapshot retention period to newly copied
     * manual snapshots instead of automated snapshots.</p>
     */
    inline bool ManualHasBeenSet() const { return m_manualHasBeenSet; }

    /**
     * <p>Indicates whether to apply the snapshot retention period to newly copied
     * manual snapshots instead of automated snapshots.</p>
     */
    inline void SetManual(bool value) { m_manualHasBeenSet = true; m_manual = value; }

    /**
     * <p>Indicates whether to apply the snapshot retention period to newly copied
     * manual snapshots instead of automated snapshots.</p>
     */
    inline ModifySnapshotCopyRetentionPeriodRequest& WithManual(bool value) { SetManual(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    bool m_manual;
    bool m_manualHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
