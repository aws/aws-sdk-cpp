/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The time period for when the predictions were generated. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PredictionTimeRange">AWS
   * API Reference</a></p>
   */
  class PredictionTimeRange
  {
  public:
    AWS_FRAUDDETECTOR_API PredictionTimeRange();
    AWS_FRAUDDETECTOR_API PredictionTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API PredictionTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p> The start time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p> The end time of the time period for when the predictions were generated.
     * </p>
     */
    inline PredictionTimeRange& WithEndTime(const char* value) { SetEndTime(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
