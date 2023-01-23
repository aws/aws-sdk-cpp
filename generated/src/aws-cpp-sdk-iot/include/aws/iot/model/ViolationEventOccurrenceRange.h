/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p> Specifies the time period of which violation events occurred between.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ViolationEventOccurrenceRange">AWS
   * API Reference</a></p>
   */
  class ViolationEventOccurrenceRange
  {
  public:
    AWS_IOT_API ViolationEventOccurrenceRange();
    AWS_IOT_API ViolationEventOccurrenceRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ViolationEventOccurrenceRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline ViolationEventOccurrenceRange& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start date and time of a time period in which violation events occurred.
     * </p>
     */
    inline ViolationEventOccurrenceRange& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline ViolationEventOccurrenceRange& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end date and time of a time period in which violation events occurred.
     * </p>
     */
    inline ViolationEventOccurrenceRange& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
