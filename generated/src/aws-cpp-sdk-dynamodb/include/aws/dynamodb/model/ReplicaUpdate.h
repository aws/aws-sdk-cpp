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
    AWS_DYNAMODB_API ReplicaUpdate();
    AWS_DYNAMODB_API ReplicaUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline const CreateReplicaAction& GetCreate() const{ return m_create; }

    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }

    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline void SetCreate(const CreateReplicaAction& value) { m_createHasBeenSet = true; m_create = value; }

    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline void SetCreate(CreateReplicaAction&& value) { m_createHasBeenSet = true; m_create = std::move(value); }

    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline ReplicaUpdate& WithCreate(const CreateReplicaAction& value) { SetCreate(value); return *this;}

    /**
     * <p>The parameters required for creating a replica on an existing global
     * table.</p>
     */
    inline ReplicaUpdate& WithCreate(CreateReplicaAction&& value) { SetCreate(std::move(value)); return *this;}


    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline const DeleteReplicaAction& GetDelete() const{ return m_delete; }

    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }

    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline void SetDelete(const DeleteReplicaAction& value) { m_deleteHasBeenSet = true; m_delete = value; }

    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline void SetDelete(DeleteReplicaAction&& value) { m_deleteHasBeenSet = true; m_delete = std::move(value); }

    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline ReplicaUpdate& WithDelete(const DeleteReplicaAction& value) { SetDelete(value); return *this;}

    /**
     * <p>The name of the existing replica to be removed.</p>
     */
    inline ReplicaUpdate& WithDelete(DeleteReplicaAction&& value) { SetDelete(std::move(value)); return *this;}

  private:

    CreateReplicaAction m_create;
    bool m_createHasBeenSet = false;

    DeleteReplicaAction m_delete;
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
