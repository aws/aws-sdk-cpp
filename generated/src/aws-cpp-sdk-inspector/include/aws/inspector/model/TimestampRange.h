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
    AWS_INSPECTOR_API TimestampRange();
    AWS_INSPECTOR_API TimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline const Aws::Utils::DateTime& GetBeginDate() const{ return m_beginDate; }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline bool BeginDateHasBeenSet() const { return m_beginDateHasBeenSet; }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline void SetBeginDate(const Aws::Utils::DateTime& value) { m_beginDateHasBeenSet = true; m_beginDate = value; }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline void SetBeginDate(Aws::Utils::DateTime&& value) { m_beginDateHasBeenSet = true; m_beginDate = std::move(value); }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline TimestampRange& WithBeginDate(const Aws::Utils::DateTime& value) { SetBeginDate(value); return *this;}

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline TimestampRange& WithBeginDate(Aws::Utils::DateTime&& value) { SetBeginDate(std::move(value)); return *this;}


    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline TimestampRange& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline TimestampRange& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_beginDate;
    bool m_beginDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
