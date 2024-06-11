/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ArchiveStringToEvaluate.h>
#include <aws/mailmanager/model/ArchiveStringOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A string expression to evaluate an email attribute value against one or more
   * string values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveStringExpression">AWS
   * API Reference</a></p>
   */
  class ArchiveStringExpression
  {
  public:
    AWS_MAILMANAGER_API ArchiveStringExpression();
    AWS_MAILMANAGER_API ArchiveStringExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveStringExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline const ArchiveStringToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const ArchiveStringToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(ArchiveStringToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline ArchiveStringExpression& WithEvaluate(const ArchiveStringToEvaluate& value) { SetEvaluate(value); return *this;}
    inline ArchiveStringExpression& WithEvaluate(ArchiveStringToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use when evaluating the string values.</p>
     */
    inline const ArchiveStringOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const ArchiveStringOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(ArchiveStringOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline ArchiveStringExpression& WithOperator(const ArchiveStringOperator& value) { SetOperator(value); return *this;}
    inline ArchiveStringExpression& WithOperator(ArchiveStringOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of string values to evaluate the email attribute against.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ArchiveStringExpression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline ArchiveStringExpression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline ArchiveStringExpression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline ArchiveStringExpression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline ArchiveStringExpression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    ArchiveStringToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    ArchiveStringOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
