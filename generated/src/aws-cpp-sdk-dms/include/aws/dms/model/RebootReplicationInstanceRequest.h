/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class RebootReplicationInstanceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RebootReplicationInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootReplicationInstance"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline RebootReplicationInstanceRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline RebootReplicationInstanceRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline RebootReplicationInstanceRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * Multi-AZ failover. If the instance isn't configured for Multi-AZ, then you can't
     * specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline bool GetForceFailover() const{ return m_forceFailover; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * Multi-AZ failover. If the instance isn't configured for Multi-AZ, then you can't
     * specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline bool ForceFailoverHasBeenSet() const { return m_forceFailoverHasBeenSet; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * Multi-AZ failover. If the instance isn't configured for Multi-AZ, then you can't
     * specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline void SetForceFailover(bool value) { m_forceFailoverHasBeenSet = true; m_forceFailover = value; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * Multi-AZ failover. If the instance isn't configured for Multi-AZ, then you can't
     * specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline RebootReplicationInstanceRequest& WithForceFailover(bool value) { SetForceFailover(value); return *this;}


    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * planned Multi-AZ failover where resources are released and cleaned up prior to
     * conducting the failover. If the instance isn''t configured for Multi-AZ, then
     * you can't specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline bool GetForcePlannedFailover() const{ return m_forcePlannedFailover; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * planned Multi-AZ failover where resources are released and cleaned up prior to
     * conducting the failover. If the instance isn''t configured for Multi-AZ, then
     * you can't specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline bool ForcePlannedFailoverHasBeenSet() const { return m_forcePlannedFailoverHasBeenSet; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * planned Multi-AZ failover where resources are released and cleaned up prior to
     * conducting the failover. If the instance isn''t configured for Multi-AZ, then
     * you can't specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline void SetForcePlannedFailover(bool value) { m_forcePlannedFailoverHasBeenSet = true; m_forcePlannedFailover = value; }

    /**
     * <p>If this parameter is <code>true</code>, the reboot is conducted through a
     * planned Multi-AZ failover where resources are released and cleaned up prior to
     * conducting the failover. If the instance isn''t configured for Multi-AZ, then
     * you can't specify <code>true</code>. ( <code>--force-planned-failover</code> and
     * <code>--force-failover</code> can't both be set to <code>true</code>.)</p>
     */
    inline RebootReplicationInstanceRequest& WithForcePlannedFailover(bool value) { SetForcePlannedFailover(value); return *this;}

  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    bool m_forceFailover;
    bool m_forceFailoverHasBeenSet = false;

    bool m_forcePlannedFailover;
    bool m_forcePlannedFailoverHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
