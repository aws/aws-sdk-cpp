/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>A range of dates and times that is used by the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EventFilter.html">EventFilter</a>
   * and <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EntityFilter.html">EntityFilter</a>
   * objects. If <code>from</code> is set and <code>to</code> is set: match items
   * where the timestamp (<code>startTime</code>, <code>endTime</code>, or
   * <code>lastUpdatedTime</code>) is between <code>from</code> and <code>to</code>
   * inclusive. If <code>from</code> is set and <code>to</code> is not set: match
   * items where the timestamp value is equal to or after <code>from</code>. If
   * <code>from</code> is not set and <code>to</code> is set: match items where the
   * timestamp value is equal to or before <code>to</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DateTimeRange">AWS
   * API Reference</a></p>
   */
  class DateTimeRange
  {
  public:
    AWS_HEALTH_API DateTimeRange();
    AWS_HEALTH_API DateTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API DateTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline const Aws::Utils::DateTime& GetFrom() const{ return m_from; }

    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline void SetFrom(const Aws::Utils::DateTime& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline void SetFrom(Aws::Utils::DateTime&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline DateTimeRange& WithFrom(const Aws::Utils::DateTime& value) { SetFrom(value); return *this;}

    /**
     * <p>The starting date and time of a time range.</p>
     */
    inline DateTimeRange& WithFrom(Aws::Utils::DateTime&& value) { SetFrom(std::move(value)); return *this;}


    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline const Aws::Utils::DateTime& GetTo() const{ return m_to; }

    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline void SetTo(const Aws::Utils::DateTime& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline void SetTo(Aws::Utils::DateTime&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline DateTimeRange& WithTo(const Aws::Utils::DateTime& value) { SetTo(value); return *this;}

    /**
     * <p>The ending date and time of a time range.</p>
     */
    inline DateTimeRange& WithTo(Aws::Utils::DateTime&& value) { SetTo(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_from;
    bool m_fromHasBeenSet = false;

    Aws::Utils::DateTime m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
