/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
   * <p> A PartiQL batch statement request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchStatementRequest">AWS
   * API Reference</a></p>
   */
  class BatchStatementRequest
  {
  public:
    AWS_DYNAMODB_API BatchStatementRequest();
    AWS_DYNAMODB_API BatchStatementRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchStatementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A valid PartiQL statement. </p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }
    inline BatchStatementRequest& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}
    inline BatchStatementRequest& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}
    inline BatchStatementRequest& WithStatement(const char* value) { SetStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters associated with a PartiQL statement in the batch request.
     * </p>
     */
    inline const Aws::Vector<AttributeValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<AttributeValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<AttributeValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline BatchStatementRequest& WithParameters(const Aws::Vector<AttributeValue>& value) { SetParameters(value); return *this;}
    inline BatchStatementRequest& WithParameters(Aws::Vector<AttributeValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline BatchStatementRequest& AddParameters(const AttributeValue& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline BatchStatementRequest& AddParameters(AttributeValue&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The read consistency of the PartiQL batch request. </p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline BatchStatementRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL batch
     * request operation that failed a condition check.</p> <p>There is no additional
     * cost associated with requesting a return value aside from the small network and
     * processing overhead of receiving a larger response. No read capacity units are
     * consumed.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }
    inline BatchStatementRequest& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    inline BatchStatementRequest& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;

    Aws::Vector<AttributeValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
