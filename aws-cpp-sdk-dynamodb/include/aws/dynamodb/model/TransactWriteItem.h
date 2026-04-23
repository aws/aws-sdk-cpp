/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DYNAMODB_API TransactWriteItem
  {
  public:
    TransactWriteItem();
    TransactWriteItem(Aws::Utils::Json::JsonView jsonValue);
    TransactWriteItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline const ConditionCheck& GetConditionCheck() const{ return m_conditionCheck; }

    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline bool ConditionCheckHasBeenSet() const { return m_conditionCheckHasBeenSet; }

    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline void SetConditionCheck(const ConditionCheck& value) { m_conditionCheckHasBeenSet = true; m_conditionCheck = value; }

    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline void SetConditionCheck(ConditionCheck&& value) { m_conditionCheckHasBeenSet = true; m_conditionCheck = std::move(value); }

    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline TransactWriteItem& WithConditionCheck(const ConditionCheck& value) { SetConditionCheck(value); return *this;}

    /**
     * <p>A request to perform a check item operation.</p>
     */
    inline TransactWriteItem& WithConditionCheck(ConditionCheck&& value) { SetConditionCheck(std::move(value)); return *this;}


    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline const Put& GetPut() const{ return m_put; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline bool PutHasBeenSet() const { return m_putHasBeenSet; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline void SetPut(const Put& value) { m_putHasBeenSet = true; m_put = value; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline void SetPut(Put&& value) { m_putHasBeenSet = true; m_put = std::move(value); }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline TransactWriteItem& WithPut(const Put& value) { SetPut(value); return *this;}

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline TransactWriteItem& WithPut(Put&& value) { SetPut(std::move(value)); return *this;}


    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline const Delete& GetDelete() const{ return m_delete; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline void SetDelete(const Delete& value) { m_deleteHasBeenSet = true; m_delete = value; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline void SetDelete(Delete&& value) { m_deleteHasBeenSet = true; m_delete = std::move(value); }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline TransactWriteItem& WithDelete(const Delete& value) { SetDelete(value); return *this;}

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline TransactWriteItem& WithDelete(Delete&& value) { SetDelete(std::move(value)); return *this;}


    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline const Update& GetUpdate() const{ return m_update; }

    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }

    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline void SetUpdate(const Update& value) { m_updateHasBeenSet = true; m_update = value; }

    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline void SetUpdate(Update&& value) { m_updateHasBeenSet = true; m_update = std::move(value); }

    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline TransactWriteItem& WithUpdate(const Update& value) { SetUpdate(value); return *this;}

    /**
     * <p>A request to perform an <code>UpdateItem</code> operation.</p>
     */
    inline TransactWriteItem& WithUpdate(Update&& value) { SetUpdate(std::move(value)); return *this;}

  private:

    ConditionCheck m_conditionCheck;
    bool m_conditionCheckHasBeenSet;

    Put m_put;
    bool m_putHasBeenSet;

    Delete m_delete;
    bool m_deleteHasBeenSet;

    Update m_update;
    bool m_updateHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
