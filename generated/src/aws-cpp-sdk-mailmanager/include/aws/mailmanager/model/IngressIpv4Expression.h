/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressIpToEvaluate.h>
#include <aws/mailmanager/model/IngressIpOperator.h>
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
   * <p>The union type representing the allowed types for the left hand side of an IP
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressIpv4Expression">AWS
   * API Reference</a></p>
   */
  class IngressIpv4Expression
  {
  public:
    AWS_MAILMANAGER_API IngressIpv4Expression();
    AWS_MAILMANAGER_API IngressIpv4Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressIpv4Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The left hand side argument of an IP condition expression.</p>
     */
    inline const IngressIpToEvaluate& GetEvaluate() const{ return m_evaluate; }
    inline bool EvaluateHasBeenSet() const { return m_evaluateHasBeenSet; }
    inline void SetEvaluate(const IngressIpToEvaluate& value) { m_evaluateHasBeenSet = true; m_evaluate = value; }
    inline void SetEvaluate(IngressIpToEvaluate&& value) { m_evaluateHasBeenSet = true; m_evaluate = std::move(value); }
    inline IngressIpv4Expression& WithEvaluate(const IngressIpToEvaluate& value) { SetEvaluate(value); return *this;}
    inline IngressIpv4Expression& WithEvaluate(IngressIpToEvaluate&& value) { SetEvaluate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matching operator for an IP condition expression.</p>
     */
    inline const IngressIpOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const IngressIpOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(IngressIpOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline IngressIpv4Expression& WithOperator(const IngressIpOperator& value) { SetOperator(value); return *this;}
    inline IngressIpv4Expression& WithOperator(IngressIpOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The right hand side argument of an IP condition expression.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline IngressIpv4Expression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline IngressIpv4Expression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline IngressIpv4Expression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline IngressIpv4Expression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline IngressIpv4Expression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    IngressIpToEvaluate m_evaluate;
    bool m_evaluateHasBeenSet = false;

    IngressIpOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
