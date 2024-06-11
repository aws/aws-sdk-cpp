﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleDmarcOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/RuleDmarcPolicy.h>
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
   * <p>A DMARC policy expression. The condition matches if the given DMARC policy
   * matches that of the incoming email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleDmarcExpression">AWS
   * API Reference</a></p>
   */
  class RuleDmarcExpression
  {
  public:
    AWS_MAILMANAGER_API RuleDmarcExpression();
    AWS_MAILMANAGER_API RuleDmarcExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleDmarcExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to apply to the DMARC policy of the incoming email.</p>
     */
    inline const RuleDmarcOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const RuleDmarcOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(RuleDmarcOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline RuleDmarcExpression& WithOperator(const RuleDmarcOperator& value) { SetOperator(value); return *this;}
    inline RuleDmarcExpression& WithOperator(RuleDmarcOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use for the given DMARC policy operator. For the operator
     * EQUALS, if multiple values are given, they are evaluated as an OR. That is, if
     * any of the given values match, the condition is deemed to match. For the
     * operator NOT_EQUALS, if multiple values are given, they are evaluated as an AND.
     * That is, only if the email's DMARC policy is not equal to any of the given
     * values, then the condition is deemed to match.</p>
     */
    inline const Aws::Vector<RuleDmarcPolicy>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<RuleDmarcPolicy>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<RuleDmarcPolicy>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline RuleDmarcExpression& WithValues(const Aws::Vector<RuleDmarcPolicy>& value) { SetValues(value); return *this;}
    inline RuleDmarcExpression& WithValues(Aws::Vector<RuleDmarcPolicy>&& value) { SetValues(std::move(value)); return *this;}
    inline RuleDmarcExpression& AddValues(const RuleDmarcPolicy& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline RuleDmarcExpression& AddValues(RuleDmarcPolicy&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RuleDmarcOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<RuleDmarcPolicy> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
