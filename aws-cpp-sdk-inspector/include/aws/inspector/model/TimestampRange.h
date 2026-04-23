/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API TimestampRange
  {
  public:
    TimestampRange();
    TimestampRange(Aws::Utils::Json::JsonView jsonValue);
    TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_beginDateHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
