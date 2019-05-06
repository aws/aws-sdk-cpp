/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableSnapshotCopyMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API EnableSnapshotCopyRequest : public RedshiftRequest
  {
  public:
    EnableSnapshotCopyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSnapshotCopy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline EnableSnapshotCopyRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline EnableSnapshotCopyRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline EnableSnapshotCopyRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline EnableSnapshotCopyRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline EnableSnapshotCopyRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination AWS Region that you want to copy snapshots to.</p>
     * <p>Constraints: Must be the name of a valid AWS Region. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline EnableSnapshotCopyRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>Default: 7.</p>
     * <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>Default: 7.</p>
     * <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>Default: 7.</p>
     * <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>Default: 7.</p>
     * <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline EnableSnapshotCopyRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline EnableSnapshotCopyRequest& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline EnableSnapshotCopyRequest& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an AWS
     * KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline EnableSnapshotCopyRequest& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}


    /**
     * <p>The number of days to retain newly copied snapshots in the destination AWS
     * Region after they are copied from the source AWS Region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days to retain newly copied snapshots in the destination AWS
     * Region after they are copied from the source AWS Region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain newly copied snapshots in the destination AWS
     * Region after they are copied from the source AWS Region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days to retain newly copied snapshots in the destination AWS
     * Region after they are copied from the source AWS Region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline EnableSnapshotCopyRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
