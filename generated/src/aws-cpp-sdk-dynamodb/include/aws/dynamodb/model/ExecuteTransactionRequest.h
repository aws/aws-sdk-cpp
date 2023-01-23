/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ParameterizedStatement.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ExecuteTransactionRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ExecuteTransactionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteTransaction"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline const Aws::Vector<ParameterizedStatement>& GetTransactStatements() const{ return m_transactStatements; }

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline bool TransactStatementsHasBeenSet() const { return m_transactStatementsHasBeenSet; }

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline void SetTransactStatements(const Aws::Vector<ParameterizedStatement>& value) { m_transactStatementsHasBeenSet = true; m_transactStatements = value; }

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline void SetTransactStatements(Aws::Vector<ParameterizedStatement>&& value) { m_transactStatementsHasBeenSet = true; m_transactStatements = std::move(value); }

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline ExecuteTransactionRequest& WithTransactStatements(const Aws::Vector<ParameterizedStatement>& value) { SetTransactStatements(value); return *this;}

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline ExecuteTransactionRequest& WithTransactStatements(Aws::Vector<ParameterizedStatement>&& value) { SetTransactStatements(std::move(value)); return *this;}

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline ExecuteTransactionRequest& AddTransactStatements(const ParameterizedStatement& value) { m_transactStatementsHasBeenSet = true; m_transactStatements.push_back(value); return *this; }

    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline ExecuteTransactionRequest& AddTransactStatements(ParameterizedStatement&& value) { m_transactStatementsHasBeenSet = true; m_transactStatements.push_back(std::move(value)); return *this; }


    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteTransactionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteTransactionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline ExecuteTransactionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline ExecuteTransactionRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline ExecuteTransactionRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}

  private:

    Aws::Vector<ParameterizedStatement> m_transactStatements;
    bool m_transactStatementsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
