/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/UpdateGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/CreateGlobalSecondaryIndexAction.h>
#include <aws/dynamodb/model/DeleteGlobalSecondaryIndexAction.h>
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
   * <p>Represents one of the following:</p> <ul> <li> <p>A new global secondary
   * index to be added to an existing table.</p> </li> <li> <p>New provisioned
   * throughput parameters for an existing global secondary index.</p> </li> <li>
   * <p>An existing global secondary index to be removed from an existing table.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexUpdate">AWS
   * API Reference</a></p>
   */
  class GlobalSecondaryIndexUpdate
  {
  public:
    AWS_DYNAMODB_API GlobalSecondaryIndexUpdate() = default;
    AWS_DYNAMODB_API GlobalSecondaryIndexUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalSecondaryIndexUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an existing global secondary index, along with new provisioned
     * throughput settings to be applied to that index.</p>
     */
    inline const UpdateGlobalSecondaryIndexAction& GetUpdate() const { return m_update; }
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
    template<typename UpdateT = UpdateGlobalSecondaryIndexAction>
    void SetUpdate(UpdateT&& value) { m_updateHasBeenSet = true; m_update = std::forward<UpdateT>(value); }
    template<typename UpdateT = UpdateGlobalSecondaryIndexAction>
    GlobalSecondaryIndexUpdate& WithUpdate(UpdateT&& value) { SetUpdate(std::forward<UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required for creating a global secondary index on an existing
     * table:</p> <ul> <li> <p> <code>IndexName </code> </p> </li> <li> <p>
     * <code>KeySchema </code> </p> </li> <li> <p> <code>AttributeDefinitions </code>
     * </p> </li> <li> <p> <code>Projection </code> </p> </li> <li> <p>
     * <code>ProvisionedThroughput </code> </p> </li> </ul>
     */
    inline const CreateGlobalSecondaryIndexAction& GetCreate() const { return m_create; }
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
    template<typename CreateT = CreateGlobalSecondaryIndexAction>
    void SetCreate(CreateT&& value) { m_createHasBeenSet = true; m_create = std::forward<CreateT>(value); }
    template<typename CreateT = CreateGlobalSecondaryIndexAction>
    GlobalSecondaryIndexUpdate& WithCreate(CreateT&& value) { SetCreate(std::forward<CreateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing global secondary index to be removed.</p>
     */
    inline const DeleteGlobalSecondaryIndexAction& GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    template<typename DeleteT = DeleteGlobalSecondaryIndexAction>
    void SetDelete(DeleteT&& value) { m_deleteHasBeenSet = true; m_delete = std::forward<DeleteT>(value); }
    template<typename DeleteT = DeleteGlobalSecondaryIndexAction>
    GlobalSecondaryIndexUpdate& WithDelete(DeleteT&& value) { SetDelete(std::forward<DeleteT>(value)); return *this;}
    ///@}
  private:

    UpdateGlobalSecondaryIndexAction m_update;
    bool m_updateHasBeenSet = false;

    CreateGlobalSecondaryIndexAction m_create;
    bool m_createHasBeenSet = false;

    DeleteGlobalSecondaryIndexAction m_delete;
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
