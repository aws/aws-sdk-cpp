/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DYNAMODB_API ExecuteStatementRequest : public DynamoDBRequest
  {
  public:
    ExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline ExecuteStatementRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline ExecuteStatementRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p> The PartiQL statement representing the operation to run. </p>
     */
    inline ExecuteStatementRequest& WithStatement(const char* value) { SetStatement(value); return *this;}


    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline const Aws::Vector<AttributeValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline void SetParameters(const Aws::Vector<AttributeValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline void SetParameters(Aws::Vector<AttributeValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline ExecuteStatementRequest& WithParameters(const Aws::Vector<AttributeValue>& value) { SetParameters(value); return *this;}

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline ExecuteStatementRequest& WithParameters(Aws::Vector<AttributeValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline ExecuteStatementRequest& AddParameters(const AttributeValue& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p> The parameters for the PartiQL statement, if any. </p>
     */
    inline ExecuteStatementRequest& AddParameters(AttributeValue&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p> The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used. </p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * <p> The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used. </p>
     */
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }

    /**
     * <p> The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used. </p>
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * <p> The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used. </p>
     */
    inline ExecuteStatementRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}


    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline ExecuteStatementRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline ExecuteStatementRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response. </p>
     */
    inline ExecuteStatementRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_statement;
    bool m_statementHasBeenSet;

    Aws::Vector<AttributeValue> m_parameters;
    bool m_parametersHasBeenSet;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
