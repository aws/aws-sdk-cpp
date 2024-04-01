/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/ComparisonOperator.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a filtered search for parameters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ParameterFilterExpression">AWS
   * API Reference</a></p>
   */
  class ParameterFilterExpression
  {
  public:
    AWS_DEADLINE_API ParameterFilterExpression();
    AWS_DEADLINE_API ParameterFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ParameterFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline ParameterFilterExpression& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline ParameterFilterExpression& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline ParameterFilterExpression& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline const ComparisonOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline void SetOperator(const ComparisonOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline void SetOperator(ComparisonOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline ParameterFilterExpression& WithOperator(const ComparisonOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The type of comparison to use to filter results.</p>
     */
    inline ParameterFilterExpression& WithOperator(ComparisonOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The parameter's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter's value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The parameter's value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter's value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter's value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter's value.</p>
     */
    inline ParameterFilterExpression& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter's value.</p>
     */
    inline ParameterFilterExpression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter's value.</p>
     */
    inline ParameterFilterExpression& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ComparisonOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
