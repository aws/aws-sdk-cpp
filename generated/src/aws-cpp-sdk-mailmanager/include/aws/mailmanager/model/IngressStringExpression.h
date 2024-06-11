/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressStringToEvaluate.h>
#include <aws/mailmanager/model/IngressStringOperator.h>
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
   * <p>The structure for a string based condition matching on the incoming
   * mail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressStringExpression">AWS
   * API Reference</a></p>
   */
  class IngressStringExpression
  {
  public:
    AWS_MAILMANAGER_API IngressStringExpression();
    AWS_MAILMANAGER_API IngressStringExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressStringExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The left hand side argument of a string condition expression.</p>
     */
    inline const IngressStringToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const IngressStringToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(IngressStringToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline IngressStringExpression& WithEvaluate(const IngressStringToEvaluate& value) { SetEvaluate(value); return *this;}
    inline IngressStringExpression& WithEvaluate(IngressStringToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for a string condition expression.</p>
     */
    inline const IngressStringOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const IngressStringOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(IngressStringOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline IngressStringExpression& WithOperator(const IngressStringOperator& value) { SetOperator(value); return *this;}
    inline IngressStringExpression& WithOperator(IngressStringOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The right hand side argument of a string condition expression.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline IngressStringExpression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline IngressStringExpression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline IngressStringExpression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline IngressStringExpression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline IngressStringExpression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    IngressStringToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressStringOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
