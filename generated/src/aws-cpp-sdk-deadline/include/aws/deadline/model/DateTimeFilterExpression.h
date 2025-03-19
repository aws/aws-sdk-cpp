/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/ComparisonOperator.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The time stamp in date-time format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DateTimeFilterExpression">AWS
   * API Reference</a></p>
   */
  class DateTimeFilterExpression
  {
  public:
    AWS_DEADLINE_API DateTimeFilterExpression() = default;
    AWS_DEADLINE_API DateTimeFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API DateTimeFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the date-time field to filter on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DateTimeFilterExpression& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to use to filter the results.</p>
     */
    inline ComparisonOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ComparisonOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DateTimeFilterExpression& WithOperator(ComparisonOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const { return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    template<typename DateTimeT = Aws::Utils::DateTime>
    void SetDateTime(DateTimeT&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::forward<DateTimeT>(value); }
    template<typename DateTimeT = Aws::Utils::DateTime>
    DateTimeFilterExpression& WithDateTime(DateTimeT&& value) { SetDateTime(std::forward<DateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ComparisonOperator m_operator{ComparisonOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime{};
    bool m_dateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
