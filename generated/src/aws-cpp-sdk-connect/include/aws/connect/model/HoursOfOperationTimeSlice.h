/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>The start time or end time for an hours of operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationTimeSlice">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationTimeSlice
  {
  public:
    AWS_CONNECT_API HoursOfOperationTimeSlice();
    AWS_CONNECT_API HoursOfOperationTimeSlice(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationTimeSlice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hours.</p>
     */
    inline int GetHours() const{ return m_hours; }

    /**
     * <p>The hours.</p>
     */
    inline bool HoursHasBeenSet() const { return m_hoursHasBeenSet; }

    /**
     * <p>The hours.</p>
     */
    inline void SetHours(int value) { m_hoursHasBeenSet = true; m_hours = value; }

    /**
     * <p>The hours.</p>
     */
    inline HoursOfOperationTimeSlice& WithHours(int value) { SetHours(value); return *this;}


    /**
     * <p>The minutes.</p>
     */
    inline int GetMinutes() const{ return m_minutes; }

    /**
     * <p>The minutes.</p>
     */
    inline bool MinutesHasBeenSet() const { return m_minutesHasBeenSet; }

    /**
     * <p>The minutes.</p>
     */
    inline void SetMinutes(int value) { m_minutesHasBeenSet = true; m_minutes = value; }

    /**
     * <p>The minutes.</p>
     */
    inline HoursOfOperationTimeSlice& WithMinutes(int value) { SetMinutes(value); return *this;}

  private:

    int m_hours;
    bool m_hoursHasBeenSet = false;

    int m_minutes;
    bool m_minutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
