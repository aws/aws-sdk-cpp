/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/BatchStatementRequest.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API BatchExecuteStatementRequest : public DynamoDBRequest
  {
  public:
    BatchExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchExecuteStatement"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline const Aws::Vector<BatchStatementRequest>& GetStatements() const{ return m_statements; }

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline void SetStatements(const Aws::Vector<BatchStatementRequest>& value) { m_statementsHasBeenSet = true; m_statements = value; }

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline void SetStatements(Aws::Vector<BatchStatementRequest>&& value) { m_statementsHasBeenSet = true; m_statements = std::move(value); }

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline BatchExecuteStatementRequest& WithStatements(const Aws::Vector<BatchStatementRequest>& value) { SetStatements(value); return *this;}

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline BatchExecuteStatementRequest& WithStatements(Aws::Vector<BatchStatementRequest>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline BatchExecuteStatementRequest& AddStatements(const BatchStatementRequest& value) { m_statementsHasBeenSet = true; m_statements.push_back(value); return *this; }

    /**
     * <p> The list of PartiQL statements representing the batch to run. </p>
     */
    inline BatchExecuteStatementRequest& AddStatements(BatchStatementRequest&& value) { m_statementsHasBeenSet = true; m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchStatementRequest> m_statements;
    bool m_statementsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
