﻿/**
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
   * <p>Searches for a particular string.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StringFilterExpression">AWS
   * API Reference</a></p>
   */
  class StringFilterExpression
  {
  public:
    AWS_DEADLINE_API StringFilterExpression();
    AWS_DEADLINE_API StringFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StringFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name to search.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StringFilterExpression& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StringFilterExpression& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StringFilterExpression& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to use for this search.</p>
     */
    inline const ComparisonOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const ComparisonOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(ComparisonOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline StringFilterExpression& WithOperator(const ComparisonOperator& value) { SetOperator(value); return *this;}
    inline StringFilterExpression& WithOperator(ComparisonOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string to search for.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline StringFilterExpression& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline StringFilterExpression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline StringFilterExpression& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
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
