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
   * <p>The start time or end time for an hours of operation override.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OverrideTimeSlice">AWS
   * API Reference</a></p>
   */
  class OverrideTimeSlice
  {
  public:
    AWS_CONNECT_API OverrideTimeSlice() = default;
    AWS_CONNECT_API OverrideTimeSlice(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OverrideTimeSlice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hours.</p>
     */
    inline int GetHours() const { return m_hours; }
    inline bool HoursHasBeenSet() const { return m_hoursHasBeenSet; }
    inline void SetHours(int value) { m_hoursHasBeenSet = true; m_hours = value; }
    inline OverrideTimeSlice& WithHours(int value) { SetHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minutes.</p>
     */
    inline int GetMinutes() const { return m_minutes; }
    inline bool MinutesHasBeenSet() const { return m_minutesHasBeenSet; }
    inline void SetMinutes(int value) { m_minutesHasBeenSet = true; m_minutes = value; }
    inline OverrideTimeSlice& WithMinutes(int value) { SetMinutes(value); return *this;}
    ///@}
  private:

    int m_hours{0};
    bool m_hoursHasBeenSet = false;

    int m_minutes{0};
    bool m_minutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
