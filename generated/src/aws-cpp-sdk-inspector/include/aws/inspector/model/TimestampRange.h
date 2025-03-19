/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>AssessmentRunFilter</a> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/TimestampRange">AWS
   * API Reference</a></p>
   */
  class TimestampRange
  {
  public:
    AWS_INSPECTOR_API TimestampRange() = default;
    AWS_INSPECTOR_API TimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline const Aws::Utils::DateTime& GetBeginDate() const { return m_beginDate; }
    inline bool BeginDateHasBeenSet() const { return m_beginDateHasBeenSet; }
    template<typename BeginDateT = Aws::Utils::DateTime>
    void SetBeginDate(BeginDateT&& value) { m_beginDateHasBeenSet = true; m_beginDate = std::forward<BeginDateT>(value); }
    template<typename BeginDateT = Aws::Utils::DateTime>
    TimestampRange& WithBeginDate(BeginDateT&& value) { SetBeginDate(std::forward<BeginDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    TimestampRange& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_beginDate{};
    bool m_beginDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
