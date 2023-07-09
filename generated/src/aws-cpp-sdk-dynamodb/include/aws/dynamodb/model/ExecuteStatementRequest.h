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
    AWS_DYNAMODB_API ExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline ExecuteStatementRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline ExecuteStatementRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The PartiQL statement representing the operation to run.</p>
     */
    inline ExecuteStatementRequest& WithStatement(const char* value) { SetStatement(value); return *this;}


    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline void SetParameters(const Aws::Vector<AttributeValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline void SetParameters(Aws::Vector<AttributeValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline ExecuteStatementRequest& WithParameters(const Aws::Vector<AttributeValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline ExecuteStatementRequest& WithParameters(Aws::Vector<AttributeValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline ExecuteStatementRequest& AddParameters(const AttributeValue& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters for the PartiQL statement, if any.</p>
     */
    inline ExecuteStatementRequest& AddParameters(AttributeValue&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }

    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline ExecuteStatementRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}


    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteStatementRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteStatementRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteStatementRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    
    inline ExecuteStatementRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline ExecuteStatementRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}


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
    inline int GetLimit() const{ return m_limit; }

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
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

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
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

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
    inline ExecuteStatementRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }

    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }

    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }

    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }

    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline ExecuteStatementRequest& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}

    /**
     * <p>An optional parameter that returns the item attributes for an
     * <code>ExecuteStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline ExecuteStatementRequest& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}

  private:

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;

    Aws::Vector<AttributeValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
