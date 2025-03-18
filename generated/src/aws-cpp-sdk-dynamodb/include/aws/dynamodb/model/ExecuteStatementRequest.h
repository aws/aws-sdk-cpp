/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ExecuteStatementRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ExecuteStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline const Aws::String& GetStatement() const { return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Aws::String>
    void SetStatement(StatementT&& value) { m_statementHasBeenSet = true; m_statement = std::forward<StatementT>(value); }
    template<typename StatementT = Aws::String>
    ExecuteStatementRequest& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<AttributeValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<AttributeValue>>
    ExecuteStatementRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = AttributeValue>
    ExecuteStatementRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline bool GetConsistentRead() const { return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline ExecuteStatementRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ExecuteStatementRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline ExecuteStatementRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, along with a key in <code>LastEvaluatedKey</code> to apply in
     * a subsequent operation so you can pick up where you left off. Also, if the
     * processed dataset size exceeds 1 MB before DynamoDB reaches this limit, it stops
     * the operation and returns the matching values up to the limit, and a key in
     * <code>LastEvaluatedKey</code> to apply in a subsequent operation to continue the
     * operation. </p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ExecuteStatementRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline ReturnValuesOnConditionCheckFailure GetReturnValuesOnConditionCheckFailure() const { return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline ExecuteStatementRequest& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;

    Aws::Vector<AttributeValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    bool m_consistentRead{false};
    bool m_consistentReadHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure{ReturnValuesOnConditionCheckFailure::NOT_SET};
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
