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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationConfigMessage">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationConfigRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationConfig"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The replication config to delete.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The replication config to delete.</p>
     */
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }

    /**
     * <p>The replication config to delete.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }

    /**
     * <p>The replication config to delete.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }

    /**
     * <p>The replication config to delete.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }

    /**
     * <p>The replication config to delete.</p>
     */
    inline DeleteReplicationConfigRequest& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The replication config to delete.</p>
     */
    inline DeleteReplicationConfigRequest& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The replication config to delete.</p>
     */
    inline DeleteReplicationConfigRequest& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}

  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
