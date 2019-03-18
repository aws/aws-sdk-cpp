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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/DateRange.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A date filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DateFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API DateFilter
  {
  public:
    DateFilter();
    DateFilter(Aws::Utils::Json::JsonView jsonValue);
    DateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A start date for the date filter.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * <p>A start date for the date filter.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>A start date for the date filter.</p>
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>A start date for the date filter.</p>
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>A start date for the date filter.</p>
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * <p>A start date for the date filter.</p>
     */
    inline DateFilter& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * <p>A start date for the date filter.</p>
     */
    inline DateFilter& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * <p>A start date for the date filter.</p>
     */
    inline DateFilter& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * <p>An end date for the date filter.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>An end date for the date filter.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>An end date for the date filter.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>An end date for the date filter.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>An end date for the date filter.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>An end date for the date filter.</p>
     */
    inline DateFilter& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>An end date for the date filter.</p>
     */
    inline DateFilter& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>An end date for the date filter.</p>
     */
    inline DateFilter& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * <p>A date range for the date filter.</p>
     */
    inline const DateRange& GetDateRange() const{ return m_dateRange; }

    /**
     * <p>A date range for the date filter.</p>
     */
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }

    /**
     * <p>A date range for the date filter.</p>
     */
    inline void SetDateRange(const DateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }

    /**
     * <p>A date range for the date filter.</p>
     */
    inline void SetDateRange(DateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }

    /**
     * <p>A date range for the date filter.</p>
     */
    inline DateFilter& WithDateRange(const DateRange& value) { SetDateRange(value); return *this;}

    /**
     * <p>A date range for the date filter.</p>
     */
    inline DateFilter& WithDateRange(DateRange&& value) { SetDateRange(std::move(value)); return *this;}

  private:

    Aws::String m_start;
    bool m_startHasBeenSet;

    Aws::String m_end;
    bool m_endHasBeenSet;

    DateRange m_dateRange;
    bool m_dateRangeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
