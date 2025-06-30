/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/CreateGlobalTableWitnessGroupMemberAction.h>
#include <aws/dynamodb/model/DeleteGlobalTableWitnessGroupMemberAction.h>
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
   * <p>Represents one of the following:</p> <ul> <li> <p>A new witness to be added
   * to a new global table.</p> </li> <li> <p>An existing witness to be removed from
   * an existing global table.</p> </li> </ul> <p>You can configure one witness per
   * MRSC global table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTableWitnessGroupUpdate">AWS
   * API Reference</a></p>
   */
  class GlobalTableWitnessGroupUpdate
  {
  public:
    AWS_DYNAMODB_API GlobalTableWitnessGroupUpdate() = default;
    AWS_DYNAMODB_API GlobalTableWitnessGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTableWitnessGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a witness Region to be added to a new MRSC global table. The
     * witness must be added when creating the MRSC global table.</p>
     */
    inline const CreateGlobalTableWitnessGroupMemberAction& GetCreate() const { return m_create; }
    inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
    template<typename CreateT = CreateGlobalTableWitnessGroupMemberAction>
    void SetCreate(CreateT&& value) { m_createHasBeenSet = true; m_create = std::forward<CreateT>(value); }
    template<typename CreateT = CreateGlobalTableWitnessGroupMemberAction>
    GlobalTableWitnessGroupUpdate& WithCreate(CreateT&& value) { SetCreate(std::forward<CreateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a witness Region to be removed from an existing global table. Must
     * be done in conjunction with removing a replica. The deletion of both a witness
     * and replica converts the remaining replica to a single-Region DynamoDB
     * table.</p>
     */
    inline const DeleteGlobalTableWitnessGroupMemberAction& GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    template<typename DeleteT = DeleteGlobalTableWitnessGroupMemberAction>
    void SetDelete(DeleteT&& value) { m_deleteHasBeenSet = true; m_delete = std::forward<DeleteT>(value); }
    template<typename DeleteT = DeleteGlobalTableWitnessGroupMemberAction>
    GlobalTableWitnessGroupUpdate& WithDelete(DeleteT&& value) { SetDelete(std::forward<DeleteT>(value)); return *this;}
    ///@}
  private:

    CreateGlobalTableWitnessGroupMemberAction m_create;
    bool m_createHasBeenSet = false;

    DeleteGlobalTableWitnessGroupMemberAction m_delete;
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
