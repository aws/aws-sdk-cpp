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
    AWS_MAILMANAGER_API ArchiveStringExpression() = default;
    AWS_MAILMANAGER_API ArchiveStringExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveStringExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute of the email to evaluate.</p>
     */
    inline const ArchiveStringToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = ArchiveStringToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = ArchiveStringToEvaluate>
    ArchiveStringExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use when evaluating the string values.</p>
     */
    inline ArchiveStringOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ArchiveStringOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline ArchiveStringExpression& WithOperator(ArchiveStringOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of string values to evaluate the email attribute against.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ArchiveStringExpression& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ArchiveStringExpression& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    ArchiveStringToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    ArchiveStringOperator m_operator{ArchiveStringOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
