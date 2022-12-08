/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class FailoverDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API FailoverDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
