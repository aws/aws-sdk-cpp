/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ConditionCheck.h>
#include <aws/dynamodb/model/Put.h>
#include <aws/dynamodb/model/Delete.h>
#include <aws/dynamodb/model/Update.h>
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
   * <p>A list of requests that can perform update, put, delete, or check operations
   * on multiple items in one or more tables atomically.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactWriteItem">AWS
   * API Reference</a></p>
   */
  class TransactWriteItem
  {
  public:
    AWS_DYNAMODB_API TransactWriteItem() = default;
    AWS_DYNAMODB_API TransactWriteItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TransactWriteItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline const ConditionCheck& GetConditionCheck() const { return m_conditionCheck; }
    inline bool ConditionCheckHasBeenSet() const { return m_conditionCheckHasBeenSet; }
    template<typename ConditionCheckT = ConditionCheck>
    void SetConditionCheck(ConditionCheckT&& value) { m_conditionCheckHasBeenSet = true; m_conditionCheck = std::forward<ConditionCheckT>(value); }
    template<typename ConditionCheckT = ConditionCheck>
    TransactWriteItem& WithConditionCheck(ConditionCheckT&& value) { SetConditionCheck(std::forward<ConditionCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline const Put& GetPut() const { return m_put; }
    inline bool PutHasBeenSet() const { return m_putHasBeenSet; }
    template<typename PutT = Put>
    void SetPut(PutT&& value) { m_putHasBeenSet = true; m_put = std::forward<PutT>(value); }
    template<typename PutT = Put>
    TransactWriteItem& WithPut(PutT&& value) { SetPut(std::forward<PutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline const Delete& GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    template<typename DeleteT = Delete>
    void SetDelete(DeleteT&& value) { m_deleteHasBeenSet = true; m_delete = std::forward<DeleteT>(value); }
    template<typename DeleteT = Delete>
    TransactWriteItem& WithDelete(DeleteT&& value) { SetDelete(std::forward<DeleteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline const Update& GetUpdate() const { return m_update; }
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
    template<typename UpdateT = Update>
    void SetUpdate(UpdateT&& value) { m_updateHasBeenSet = true; m_update = std::forward<UpdateT>(value); }
    template<typename UpdateT = Update>
    TransactWriteItem& WithUpdate(UpdateT&& value) { SetUpdate(std::forward<UpdateT>(value)); return *this;}
    ///@}
  private:

    ConditionCheck m_conditionCheck;
    bool m_conditionCheckHasBeenSet = false;

    Put m_put;
    bool m_putHasBeenSet = false;

    Delete m_delete;
    bool m_deleteHasBeenSet = false;

    Update m_update;
    bool m_updateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
