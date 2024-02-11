/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/CancellationReason.h>
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
   * <p>The entire transaction request was canceled.</p> <p>DynamoDB cancels a
   * <code>TransactWriteItems</code> request under the following circumstances:</p>
   * <ul> <li> <p>A condition in one of the condition expressions is not met.</p>
   * </li> <li> <p>A table in the <code>TransactWriteItems</code> request is in a
   * different account or region.</p> </li> <li> <p>More than one action in the
   * <code>TransactWriteItems</code> operation targets the same item.</p> </li> <li>
   * <p>There is insufficient provisioned capacity for the transaction to be
   * completed.</p> </li> <li> <p>An item size becomes too large (larger than 400
   * KB), or a local secondary index (LSI) becomes too large, or a similar validation
   * error occurs because of changes made by the transaction.</p> </li> <li> <p>There
   * is a user error, such as an invalid data format.</p> </li> <li> <p> There is an
   * ongoing <code>TransactWriteItems</code> operation that conflicts with a
   * concurrent <code>TransactWriteItems</code> request. In this case the
   * <code>TransactWriteItems</code> operation fails with a
   * <code>TransactionCanceledException</code>. </p> </li> </ul> <p>DynamoDB cancels
   * a <code>TransactGetItems</code> request under the following circumstances:</p>
   * <ul> <li> <p>There is an ongoing <code>TransactGetItems</code> operation that
   * conflicts with a concurrent <code>PutItem</code>, <code>UpdateItem</code>,
   * <code>DeleteItem</code> or <code>TransactWriteItems</code> request. In this case
   * the <code>TransactGetItems</code> operation fails with a
   * <code>TransactionCanceledException</code>.</p> </li> <li> <p>A table in the
   * <code>TransactGetItems</code> request is in a different account or region.</p>
   * </li> <li> <p>There is insufficient provisioned capacity for the transaction to
   * be completed.</p> </li> <li> <p>There is a user error, such as an invalid data
   * format.</p> </li> </ul>  <p>If using Java, DynamoDB lists the cancellation
   * reasons on the <code>CancellationReasons</code> property. This property is not
   * set for other languages. Transaction cancellation reasons are ordered in the
   * order of requested items, if an item has no error it will have <code>None</code>
   * code and <code>Null</code> message.</p>  <p>Cancellation reason codes and
   * possible error messages:</p> <ul> <li> <p>No Errors:</p> <ul> <li> <p>Code:
   * <code>None</code> </p> </li> <li> <p>Message: <code>null</code> </p> </li> </ul>
   * </li> <li> <p>Conditional Check Failed:</p> <ul> <li> <p>Code:
   * <code>ConditionalCheckFailed</code> </p> </li> <li> <p>Message: The conditional
   * request failed. </p> </li> </ul> </li> <li> <p>Item Collection Size Limit
   * Exceeded:</p> <ul> <li> <p>Code: <code>ItemCollectionSizeLimitExceeded</code>
   * </p> </li> <li> <p>Message: Collection size exceeded.</p> </li> </ul> </li> <li>
   * <p>Transaction Conflict:</p> <ul> <li> <p>Code: <code>TransactionConflict</code>
   * </p> </li> <li> <p>Message: Transaction is ongoing for the item.</p> </li> </ul>
   * </li> <li> <p>Provisioned Throughput Exceeded:</p> <ul> <li> <p>Code:
   * <code>ProvisionedThroughputExceeded</code> </p> </li> <li> <p>Messages:</p> <ul>
   * <li> <p>The level of configured provisioned throughput for the table was
   * exceeded. Consider increasing your provisioning level with the UpdateTable
   * API.</p>  <p>This Message is received when provisioned throughput is
   * exceeded is on a provisioned DynamoDB table.</p>  </li> <li> <p>The level
   * of configured provisioned throughput for one or more global secondary indexes of
   * the table was exceeded. Consider increasing your provisioning level for the
   * under-provisioned global secondary indexes with the UpdateTable API.</p> 
   * <p>This message is returned when provisioned throughput is exceeded is on a
   * provisioned GSI.</p>  </li> </ul> </li> </ul> </li> <li> <p>Throttling
   * Error:</p> <ul> <li> <p>Code: <code>ThrottlingError</code> </p> </li> <li>
   * <p>Messages: </p> <ul> <li> <p>Throughput exceeds the current capacity of your
   * table or index. DynamoDB is automatically scaling your table or index so please
   * try again shortly. If exceptions persist, check if you have a hot key:
   * https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/bp-partition-key-design.html.</p>
   *  <p>This message is returned when writes get throttled on an On-Demand
   * table as DynamoDB is automatically scaling the table.</p>  </li> <li>
   * <p>Throughput exceeds the current capacity for one or more global secondary
   * indexes. DynamoDB is automatically scaling your index so please try again
   * shortly.</p>  <p>This message is returned when writes get throttled on an
   * On-Demand GSI as DynamoDB is automatically scaling the GSI.</p>  </li>
   * </ul> </li> </ul> </li> <li> <p>Validation Error:</p> <ul> <li> <p>Code:
   * <code>ValidationError</code> </p> </li> <li> <p>Messages: </p> <ul> <li> <p>One
   * or more parameter values were invalid.</p> </li> <li> <p>The update expression
   * attempted to update the secondary index key beyond allowed size limits.</p>
   * </li> <li> <p>The update expression attempted to update the secondary index key
   * to unsupported type.</p> </li> <li> <p>An operand in the update expression has
   * an incorrect data type.</p> </li> <li> <p>Item size to update has exceeded the
   * maximum allowed size.</p> </li> <li> <p>Number overflow. Attempting to store a
   * number with magnitude larger than supported range.</p> </li> <li> <p>Type
   * mismatch for attribute to update.</p> </li> <li> <p>Nesting Levels have exceeded
   * supported limits.</p> </li> <li> <p>The document path provided in the update
   * expression is invalid for update.</p> </li> <li> <p>The provided expression
   * refers to an attribute that does not exist in the item.</p> </li> </ul> </li>
   * </ul> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactionCanceledException">AWS
   * API Reference</a></p>
   */
  class TransactionCanceledException
  {
  public:
    AWS_DYNAMODB_API TransactionCanceledException();
    AWS_DYNAMODB_API TransactionCanceledException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TransactionCanceledException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TransactionCanceledException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TransactionCanceledException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TransactionCanceledException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline const Aws::Vector<CancellationReason>& GetCancellationReasons() const{ return m_cancellationReasons; }

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline bool CancellationReasonsHasBeenSet() const { return m_cancellationReasonsHasBeenSet; }

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline void SetCancellationReasons(const Aws::Vector<CancellationReason>& value) { m_cancellationReasonsHasBeenSet = true; m_cancellationReasons = value; }

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline void SetCancellationReasons(Aws::Vector<CancellationReason>&& value) { m_cancellationReasonsHasBeenSet = true; m_cancellationReasons = std::move(value); }

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline TransactionCanceledException& WithCancellationReasons(const Aws::Vector<CancellationReason>& value) { SetCancellationReasons(value); return *this;}

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline TransactionCanceledException& WithCancellationReasons(Aws::Vector<CancellationReason>&& value) { SetCancellationReasons(std::move(value)); return *this;}

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline TransactionCanceledException& AddCancellationReasons(const CancellationReason& value) { m_cancellationReasonsHasBeenSet = true; m_cancellationReasons.push_back(value); return *this; }

    /**
     * <p>A list of cancellation reasons.</p>
     */
    inline TransactionCanceledException& AddCancellationReasons(CancellationReason&& value) { m_cancellationReasonsHasBeenSet = true; m_cancellationReasons.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<CancellationReason> m_cancellationReasons;
    bool m_cancellationReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
