/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/LongConditionOperator.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>The long condition contains a <code>Value</code> and can optionally contain
   * an <code>Operator</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/LongCondition">AWS
   * API Reference</a></p>
   */
  class LongCondition
  {
  public:
    AWS_BACKUPSEARCH_API LongCondition();
    AWS_BACKUPSEARCH_API LongCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API LongCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of an item included in one of the search item filters.</p>
     */
    inline long long GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline LongCondition& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that defines what values will be returned.</p> <p>If this is
     * included, avoid combinations of operators that will return all possible values.
     * For example, including both <code>EQUALS_TO</code> and
     * <code>NOT_EQUALS_TO</code> with a value of <code>4</code> will return all
     * values.</p>
     */
    inline const LongConditionOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const LongConditionOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(LongConditionOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline LongCondition& WithOperator(const LongConditionOperator& value) { SetOperator(value); return *this;}
    inline LongCondition& WithOperator(LongConditionOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    long long m_value;
    bool m_valueHasBeenSet = false;

    LongConditionOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
