/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ArchiveBooleanToEvaluate.h>
#include <aws/mailmanager/model/ArchiveBooleanOperator.h>
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
   * <p>A boolean expression to evaluate email attribute values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveBooleanExpression">AWS
   * API Reference</a></p>
   */
  class ArchiveBooleanExpression
  {
  public:
    AWS_MAILMANAGER_API ArchiveBooleanExpression() = default;
    AWS_MAILMANAGER_API ArchiveBooleanExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveBooleanExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email attribute value to evaluate.</p>
     */
    inline const ArchiveBooleanToEvaluate& GetEvaluate() const { return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    template<typename EvaluateT = ArchiveBooleanToEvaluate>
    void SetEvaluate(EvaluateT&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::forward<EvaluateT>(value); }
    template<typename EvaluateT = ArchiveBooleanToEvaluate>
    ArchiveBooleanExpression& WithEvaluate(EvaluateT&& value) { SetEvaluate(std::forward<EvaluateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boolean operator to use for evaluation.</p>
     */
    inline ArchiveBooleanOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ArchiveBooleanOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline ArchiveBooleanExpression& WithOperator(ArchiveBooleanOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    ArchiveBooleanToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    ArchiveBooleanOperator m_operator{ArchiveBooleanOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
