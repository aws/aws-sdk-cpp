/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyReplicationSubnetGroupRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationSubnetGroup"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::move(value); }

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const char* value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier.assign(value); }

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const Aws::String& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}


    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupDescription() const{ return m_replicationSubnetGroupDescription; }

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline bool ReplicationSubnetGroupDescriptionHasBeenSet() const { return m_replicationSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const Aws::String& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = value; }

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(Aws::String&& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = std::move(value); }

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const char* value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription.assign(value); }

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(const Aws::String& value) { SetReplicationSubnetGroupDescription(value); return *this;}

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(Aws::String&& value) { SetReplicationSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the replication instance subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(const char* value) { SetReplicationSubnetGroupDescription(value); return *this;}


    /**
     * <p>A list of subnet IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs.</p>
     */
    inline ModifyReplicationSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;

    Aws::String m_replicationSubnetGroupDescription;
    bool m_replicationSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
