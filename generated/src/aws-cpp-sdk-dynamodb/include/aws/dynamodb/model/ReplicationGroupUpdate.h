/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/CreateReplicationGroupMemberAction.h>
#include <aws/dynamodb/model/UpdateReplicationGroupMemberAction.h>
#include <aws/dynamodb/model/DeleteReplicationGroupMemberAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents one of the following:</p> <ul> <li> <p>A new replica to be added
   * to an existing regional table or global table. This request invokes the
   * <code>CreateTableReplica</code> action in the destination Region.</p> </li> <li>
   * <p>New parameters for an existing replica. This request invokes the
   * <code>UpdateTable</code> action in the destination Region.</p> </li> <li> <p>An
   * existing replica to be deleted. The request invokes the
   * <code>DeleteTableReplica</code> action in the destination Region, deleting the
   * replica and all if its items in the destination Region.</p> </li> </ul> 
   * <p>When you manually remove a table or global table replica, you do not
   * automatically remove any associated scalable targets, scaling policies, or
   * CloudWatch alarms.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicationGroupUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicationGroupUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicationGroupUpdate();
    AWS_DYNAMODB_API ReplicationGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicationGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline const CreateReplicationGroupMemberAction& GetCreate() const{ return m_create; }

    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }

    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline void SetCreate(const CreateReplicationGroupMemberAction& value) { m_createHasBeenSet = true; m_create = value; }

    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline void SetCreate(CreateReplicationGroupMemberAction&& value) { m_createHasBeenSet = true; m_create = std::move(value); }

    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithCreate(const CreateReplicationGroupMemberAction& value) { SetCreate(value); return *this;}

    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithCreate(CreateReplicationGroupMemberAction&& value) { SetCreate(std::move(value)); return *this;}


    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline const UpdateReplicationGroupMemberAction& GetUpdate() const{ return m_update; }

    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }

    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline void SetUpdate(const UpdateReplicationGroupMemberAction& value) { m_updateHasBeenSet = true; m_update = value; }

    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline void SetUpdate(UpdateReplicationGroupMemberAction&& value) { m_updateHasBeenSet = true; m_update = std::move(value); }

    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithUpdate(const UpdateReplicationGroupMemberAction& value) { SetUpdate(value); return *this;}

    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithUpdate(UpdateReplicationGroupMemberAction&& value) { SetUpdate(std::move(value)); return *this;}


    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline const DeleteReplicationGroupMemberAction& GetDelete() const{ return m_delete; }

    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }

    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline void SetDelete(const DeleteReplicationGroupMemberAction& value) { m_deleteHasBeenSet = true; m_delete = value; }

    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline void SetDelete(DeleteReplicationGroupMemberAction&& value) { m_deleteHasBeenSet = true; m_delete = std::move(value); }

    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithDelete(const DeleteReplicationGroupMemberAction& value) { SetDelete(value); return *this;}

    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline ReplicationGroupUpdate& WithDelete(DeleteReplicationGroupMemberAction&& value) { SetDelete(std::move(value)); return *this;}

  private:

    CreateReplicationGroupMemberAction m_create;
    bool m_createHasBeenSet = false;

    UpdateReplicationGroupMemberAction m_update;
    bool m_updateHasBeenSet = false;

    DeleteReplicationGroupMemberAction m_delete;
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
