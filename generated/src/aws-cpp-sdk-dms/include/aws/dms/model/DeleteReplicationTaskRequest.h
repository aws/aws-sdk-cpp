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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTaskMessage">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationTask"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline DeleteReplicationTaskRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline DeleteReplicationTaskRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task to be deleted.</p>
     */
    inline DeleteReplicationTaskRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}

  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
