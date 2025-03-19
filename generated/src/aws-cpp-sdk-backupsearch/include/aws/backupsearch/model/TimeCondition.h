/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backupsearch/model/TimeConditionOperator.h>
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
   * <p>A time condition denotes a creation time, last modification time, or other
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/TimeCondition">AWS
   * API Reference</a></p>
   */
  class TimeCondition
  {
  public:
    AWS_BACKUPSEARCH_API TimeCondition() = default;
    AWS_BACKUPSEARCH_API TimeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API TimeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the timestamp value of the time condition.</p>
     */
    inline const Aws::Utils::DateTime& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::DateTime>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::DateTime>
    TimeCondition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that defines what values will be returned.</p> <p>If this is
     * included, avoid combinations of operators that will return all possible values.
     * For example, including both <code>EQUALS_TO</code> and
     * <code>NOT_EQUALS_TO</code> with a value of <code>4</code> will return all
     * values.</p>
     */
    inline TimeConditionOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(TimeConditionOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline TimeCondition& WithOperator(TimeConditionOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_value{};
    bool m_valueHasBeenSet = false;

    TimeConditionOperator m_operator{TimeConditionOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
