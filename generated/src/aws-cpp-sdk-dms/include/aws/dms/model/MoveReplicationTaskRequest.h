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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MoveReplicationTaskMessage">AWS
   * API Reference</a></p>
   */
  class MoveReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MoveReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MoveReplicationTask"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline MoveReplicationTaskRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline MoveReplicationTaskRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you want to move.</p>
     */
    inline MoveReplicationTaskRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline const Aws::String& GetTargetReplicationInstanceArn() const{ return m_targetReplicationInstanceArn; }

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline bool TargetReplicationInstanceArnHasBeenSet() const { return m_targetReplicationInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline void SetTargetReplicationInstanceArn(const Aws::String& value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn = value; }

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline void SetTargetReplicationInstanceArn(Aws::String&& value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline void SetTargetReplicationInstanceArn(const char* value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn.assign(value); }

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline MoveReplicationTaskRequest& WithTargetReplicationInstanceArn(const Aws::String& value) { SetTargetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline MoveReplicationTaskRequest& WithTargetReplicationInstanceArn(Aws::String&& value) { SetTargetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the replication instance where you want to move the task to.</p>
     */
    inline MoveReplicationTaskRequest& WithTargetReplicationInstanceArn(const char* value) { SetTargetReplicationInstanceArn(value); return *this;}

  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_targetReplicationInstanceArn;
    bool m_targetReplicationInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
