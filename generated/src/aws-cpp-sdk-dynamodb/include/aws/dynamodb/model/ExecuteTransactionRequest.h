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
    AWS_DYNAMODB_API ExecuteTransactionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteTransaction"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of PartiQL statements representing the transaction to run.</p>
     */
    inline const Aws::Vector<ParameterizedStatement>& GetTransactStatements() const { return m_transactStatements; }
    inline bool TransactStatementsHasBeenSet() const { return m_transactStatementsHasBeenSet; }
    template<typename TransactStatementsT = Aws::Vector<ParameterizedStatement>>
    void SetTransactStatements(TransactStatementsT&& value) { m_transactStatementsHasBeenSet = true; m_transactStatements = std::forward<TransactStatementsT>(value); }
    template<typename TransactStatementsT = Aws::Vector<ParameterizedStatement>>
    ExecuteTransactionRequest& WithTransactStatements(TransactStatementsT&& value) { SetTransactStatements(std::forward<TransactStatementsT>(value)); return *this;}
    template<typename TransactStatementsT = ParameterizedStatement>
    ExecuteTransactionRequest& AddTransactStatements(TransactStatementsT&& value) { m_transactStatementsHasBeenSet = true; m_transactStatements.emplace_back(std::forward<TransactStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set this value to get remaining results, if <code>NextToken</code> was
     * returned in the statement response.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    ExecuteTransactionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the level of detail about either provisioned or on-demand
     * throughput consumption that is returned in the response. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactGetItems.html">TransactGetItems</a>
     * and <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_TransactWriteItems.html">TransactWriteItems</a>.</p>
     */
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline ExecuteTransactionRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}
  private:

    Aws::Vector<ParameterizedStatement> m_transactStatements;
    bool m_transactStatementsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
