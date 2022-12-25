/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides statistics for each data field imported into to an Amazon Forecast
   * dataset with the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Statistics">AWS
   * API Reference</a></p>
   */
  class Statistics
  {
  public:
    AWS_FORECASTSERVICE_API Statistics();
    AWS_FORECASTSERVICE_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of values in the field. If the response value is -1, refer to
     * <code>CountLong</code>.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of values in the field. If the response value is -1, refer to
     * <code>CountLong</code>.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of values in the field. If the response value is -1, refer to
     * <code>CountLong</code>.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of values in the field. If the response value is -1, refer to
     * <code>CountLong</code>.</p>
     */
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The number of distinct values in the field. If the response value is -1,
     * refer to <code>CountDistinctLong</code>.</p>
     */
    inline int GetCountDistinct() const{ return m_countDistinct; }

    /**
     * <p>The number of distinct values in the field. If the response value is -1,
     * refer to <code>CountDistinctLong</code>.</p>
     */
    inline bool CountDistinctHasBeenSet() const { return m_countDistinctHasBeenSet; }

    /**
     * <p>The number of distinct values in the field. If the response value is -1,
     * refer to <code>CountDistinctLong</code>.</p>
     */
    inline void SetCountDistinct(int value) { m_countDistinctHasBeenSet = true; m_countDistinct = value; }

    /**
     * <p>The number of distinct values in the field. If the response value is -1,
     * refer to <code>CountDistinctLong</code>.</p>
     */
    inline Statistics& WithCountDistinct(int value) { SetCountDistinct(value); return *this;}


    /**
     * <p>The number of null values in the field. If the response value is -1, refer to
     * <code>CountNullLong</code>.</p>
     */
    inline int GetCountNull() const{ return m_countNull; }

    /**
     * <p>The number of null values in the field. If the response value is -1, refer to
     * <code>CountNullLong</code>.</p>
     */
    inline bool CountNullHasBeenSet() const { return m_countNullHasBeenSet; }

    /**
     * <p>The number of null values in the field. If the response value is -1, refer to
     * <code>CountNullLong</code>.</p>
     */
    inline void SetCountNull(int value) { m_countNullHasBeenSet = true; m_countNull = value; }

    /**
     * <p>The number of null values in the field. If the response value is -1, refer to
     * <code>CountNullLong</code>.</p>
     */
    inline Statistics& WithCountNull(int value) { SetCountNull(value); return *this;}


    /**
     * <p>The number of NAN (not a number) values in the field. If the response value
     * is -1, refer to <code>CountNanLong</code>.</p>
     */
    inline int GetCountNan() const{ return m_countNan; }

    /**
     * <p>The number of NAN (not a number) values in the field. If the response value
     * is -1, refer to <code>CountNanLong</code>.</p>
     */
    inline bool CountNanHasBeenSet() const { return m_countNanHasBeenSet; }

    /**
     * <p>The number of NAN (not a number) values in the field. If the response value
     * is -1, refer to <code>CountNanLong</code>.</p>
     */
    inline void SetCountNan(int value) { m_countNanHasBeenSet = true; m_countNan = value; }

    /**
     * <p>The number of NAN (not a number) values in the field. If the response value
     * is -1, refer to <code>CountNanLong</code>.</p>
     */
    inline Statistics& WithCountNan(int value) { SetCountNan(value); return *this;}


    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline const Aws::String& GetMin() const{ return m_min; }

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline void SetMin(const Aws::String& value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline void SetMin(Aws::String&& value) { m_minHasBeenSet = true; m_min = std::move(value); }

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline void SetMin(const char* value) { m_minHasBeenSet = true; m_min.assign(value); }

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline Statistics& WithMin(const Aws::String& value) { SetMin(value); return *this;}

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline Statistics& WithMin(Aws::String&& value) { SetMin(std::move(value)); return *this;}

    /**
     * <p>For a numeric field, the minimum value in the field.</p>
     */
    inline Statistics& WithMin(const char* value) { SetMin(value); return *this;}


    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline const Aws::String& GetMax() const{ return m_max; }

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline Statistics& WithMax(const Aws::String& value) { SetMax(value); return *this;}

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline Statistics& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}

    /**
     * <p>For a numeric field, the maximum value in the field.</p>
     */
    inline Statistics& WithMax(const char* value) { SetMax(value); return *this;}


    /**
     * <p>For a numeric field, the average value in the field.</p>
     */
    inline double GetAvg() const{ return m_avg; }

    /**
     * <p>For a numeric field, the average value in the field.</p>
     */
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }

    /**
     * <p>For a numeric field, the average value in the field.</p>
     */
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }

    /**
     * <p>For a numeric field, the average value in the field.</p>
     */
    inline Statistics& WithAvg(double value) { SetAvg(value); return *this;}


    /**
     * <p>For a numeric field, the standard deviation.</p>
     */
    inline double GetStddev() const{ return m_stddev; }

    /**
     * <p>For a numeric field, the standard deviation.</p>
     */
    inline bool StddevHasBeenSet() const { return m_stddevHasBeenSet; }

    /**
     * <p>For a numeric field, the standard deviation.</p>
     */
    inline void SetStddev(double value) { m_stddevHasBeenSet = true; m_stddev = value; }

    /**
     * <p>For a numeric field, the standard deviation.</p>
     */
    inline Statistics& WithStddev(double value) { SetStddev(value); return *this;}


    /**
     * <p>The number of values in the field. <code>CountLong</code> is used instead of
     * <code>Count</code> if the value is greater than 2,147,483,647.</p>
     */
    inline long long GetCountLong() const{ return m_countLong; }

    /**
     * <p>The number of values in the field. <code>CountLong</code> is used instead of
     * <code>Count</code> if the value is greater than 2,147,483,647.</p>
     */
    inline bool CountLongHasBeenSet() const { return m_countLongHasBeenSet; }

    /**
     * <p>The number of values in the field. <code>CountLong</code> is used instead of
     * <code>Count</code> if the value is greater than 2,147,483,647.</p>
     */
    inline void SetCountLong(long long value) { m_countLongHasBeenSet = true; m_countLong = value; }

    /**
     * <p>The number of values in the field. <code>CountLong</code> is used instead of
     * <code>Count</code> if the value is greater than 2,147,483,647.</p>
     */
    inline Statistics& WithCountLong(long long value) { SetCountLong(value); return *this;}


    /**
     * <p>The number of distinct values in the field. <code>CountDistinctLong</code> is
     * used instead of <code>CountDistinct</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline long long GetCountDistinctLong() const{ return m_countDistinctLong; }

    /**
     * <p>The number of distinct values in the field. <code>CountDistinctLong</code> is
     * used instead of <code>CountDistinct</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline bool CountDistinctLongHasBeenSet() const { return m_countDistinctLongHasBeenSet; }

    /**
     * <p>The number of distinct values in the field. <code>CountDistinctLong</code> is
     * used instead of <code>CountDistinct</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline void SetCountDistinctLong(long long value) { m_countDistinctLongHasBeenSet = true; m_countDistinctLong = value; }

    /**
     * <p>The number of distinct values in the field. <code>CountDistinctLong</code> is
     * used instead of <code>CountDistinct</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline Statistics& WithCountDistinctLong(long long value) { SetCountDistinctLong(value); return *this;}


    /**
     * <p>The number of null values in the field. <code>CountNullLong</code> is used
     * instead of <code>CountNull</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline long long GetCountNullLong() const{ return m_countNullLong; }

    /**
     * <p>The number of null values in the field. <code>CountNullLong</code> is used
     * instead of <code>CountNull</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline bool CountNullLongHasBeenSet() const { return m_countNullLongHasBeenSet; }

    /**
     * <p>The number of null values in the field. <code>CountNullLong</code> is used
     * instead of <code>CountNull</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline void SetCountNullLong(long long value) { m_countNullLongHasBeenSet = true; m_countNullLong = value; }

    /**
     * <p>The number of null values in the field. <code>CountNullLong</code> is used
     * instead of <code>CountNull</code> if the value is greater than
     * 2,147,483,647.</p>
     */
    inline Statistics& WithCountNullLong(long long value) { SetCountNullLong(value); return *this;}


    /**
     * <p>The number of NAN (not a number) values in the field.
     * <code>CountNanLong</code> is used instead of <code>CountNan</code> if the value
     * is greater than 2,147,483,647.</p>
     */
    inline long long GetCountNanLong() const{ return m_countNanLong; }

    /**
     * <p>The number of NAN (not a number) values in the field.
     * <code>CountNanLong</code> is used instead of <code>CountNan</code> if the value
     * is greater than 2,147,483,647.</p>
     */
    inline bool CountNanLongHasBeenSet() const { return m_countNanLongHasBeenSet; }

    /**
     * <p>The number of NAN (not a number) values in the field.
     * <code>CountNanLong</code> is used instead of <code>CountNan</code> if the value
     * is greater than 2,147,483,647.</p>
     */
    inline void SetCountNanLong(long long value) { m_countNanLongHasBeenSet = true; m_countNanLong = value; }

    /**
     * <p>The number of NAN (not a number) values in the field.
     * <code>CountNanLong</code> is used instead of <code>CountNan</code> if the value
     * is greater than 2,147,483,647.</p>
     */
    inline Statistics& WithCountNanLong(long long value) { SetCountNanLong(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    int m_countDistinct;
    bool m_countDistinctHasBeenSet = false;

    int m_countNull;
    bool m_countNullHasBeenSet = false;

    int m_countNan;
    bool m_countNanHasBeenSet = false;

    Aws::String m_min;
    bool m_minHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;

    double m_avg;
    bool m_avgHasBeenSet = false;

    double m_stddev;
    bool m_stddevHasBeenSet = false;

    long long m_countLong;
    bool m_countLongHasBeenSet = false;

    long long m_countDistinctLong;
    bool m_countDistinctLongHasBeenSet = false;

    long long m_countNullLong;
    bool m_countNullLongHasBeenSet = false;

    long long m_countNanLong;
    bool m_countNanLongHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
