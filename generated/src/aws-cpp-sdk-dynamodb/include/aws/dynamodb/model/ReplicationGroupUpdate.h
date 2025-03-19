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
    AWS_DYNAMODB_API ReplicationGroupUpdate() = default;
    AWS_DYNAMODB_API ReplicationGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicationGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters required for creating a replica for the table.</p>
     */
    inline const CreateReplicationGroupMemberAction& GetCreate() const { return m_create; }
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
    template<typename CreateT = CreateReplicationGroupMemberAction>
    void SetCreate(CreateT&& value) { m_createHasBeenSet = true; m_create = std::forward<CreateT>(value); }
    template<typename CreateT = CreateReplicationGroupMemberAction>
    ReplicationGroupUpdate& WithCreate(CreateT&& value) { SetCreate(std::forward<CreateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required for updating a replica for the table.</p>
     */
    inline const UpdateReplicationGroupMemberAction& GetUpdate() const { return m_update; }
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
    template<typename UpdateT = UpdateReplicationGroupMemberAction>
    void SetUpdate(UpdateT&& value) { m_updateHasBeenSet = true; m_update = std::forward<UpdateT>(value); }
    template<typename UpdateT = UpdateReplicationGroupMemberAction>
    ReplicationGroupUpdate& WithUpdate(UpdateT&& value) { SetUpdate(std::forward<UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required for deleting a replica for the table.</p>
     */
    inline const DeleteReplicationGroupMemberAction& GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    template<typename DeleteT = DeleteReplicationGroupMemberAction>
    void SetDelete(DeleteT&& value) { m_deleteHasBeenSet = true; m_delete = std::forward<DeleteT>(value); }
    template<typename DeleteT = DeleteReplicationGroupMemberAction>
    ReplicationGroupUpdate& WithDelete(DeleteT&& value) { SetDelete(std::forward<DeleteT>(value)); return *this;}
    ///@}
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
