/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/CreateReplicaAction.h>
#include <aws/dynamodb/model/DeleteReplicaAction.h>
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
   * to an existing global table.</p> </li> <li> <p>New parameters for an existing
   * replica.</p> </li> <li> <p>An existing replica to be removed from an existing
   * global table.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaUpdate() = default;
    AWS_DYNAMODB_API ReplicaUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline const CreateReplicaAction& GetCreate() const { return m_create; }
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
    template<typename CreateT = CreateReplicaAction>
    void SetCreate(CreateT&& value) { m_createHasBeenSet = true; m_create = std::forward<CreateT>(value); }
    template<typename CreateT = CreateReplicaAction>
    ReplicaUpdate& WithCreate(CreateT&& value) { SetCreate(std::forward<CreateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline const DeleteReplicaAction& GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    template<typename DeleteT = DeleteReplicaAction>
    void SetDelete(DeleteT&& value) { m_deleteHasBeenSet = true; m_delete = std::forward<DeleteT>(value); }
    template<typename DeleteT = DeleteReplicaAction>
    ReplicaUpdate& WithDelete(DeleteT&& value) { SetDelete(std::forward<DeleteT>(value)); return *this;}
    ///@}
  private:

    CreateReplicaAction m_create;
    bool m_createHasBeenSet = false;

    DeleteReplicaAction m_delete;
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
