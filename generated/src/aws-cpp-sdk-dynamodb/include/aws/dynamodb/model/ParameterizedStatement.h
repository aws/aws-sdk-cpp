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
   * <p> Represents a PartiQL statment that uses parameters. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ParameterizedStatement">AWS
   * API Reference</a></p>
   */
  class ParameterizedStatement
  {
  public:
    AWS_DYNAMODB_API ParameterizedStatement();
    AWS_DYNAMODB_API ParameterizedStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ParameterizedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline ParameterizedStatement& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline ParameterizedStatement& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p> A PartiQL statment that uses parameters. </p>
     */
    inline ParameterizedStatement& WithStatement(const char* value) { SetStatement(value); return *this;}


    /**
     * <p> The parameter values. </p>
     */
    inline const Aws::Vector<AttributeValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p> The parameter values. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> The parameter values. </p>
     */
    inline void SetParameters(const Aws::Vector<AttributeValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> The parameter values. </p>
     */
    inline void SetParameters(Aws::Vector<AttributeValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> The parameter values. </p>
     */
    inline ParameterizedStatement& WithParameters(const Aws::Vector<AttributeValue>& value) { SetParameters(value); return *this;}

    /**
     * <p> The parameter values. </p>
     */
    inline ParameterizedStatement& WithParameters(Aws::Vector<AttributeValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p> The parameter values. </p>
     */
    inline ParameterizedStatement& AddParameters(const AttributeValue& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p> The parameter values. </p>
     */
    inline ParameterizedStatement& AddParameters(AttributeValue&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }

    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }

    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }

    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }

    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline ParameterizedStatement& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}

    /**
     * <p>An optional parameter that returns the item attributes for a PartiQL
     * <code>ParameterizedStatement</code> operation that failed a condition check.</p>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>
     */
    inline ParameterizedStatement& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}

  private:

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;

    Aws::Vector<AttributeValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
