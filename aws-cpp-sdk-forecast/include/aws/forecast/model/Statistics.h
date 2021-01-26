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
   * dataset with the <a>CreateDatasetImportJob</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Statistics">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API Statistics
  {
  public:
    Statistics();
    Statistics(Aws::Utils::Json::JsonView jsonValue);
    Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of values in the field.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of values in the field.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of values in the field.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of values in the field.</p>
     */
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The number of distinct values in the field.</p>
     */
    inline int GetCountDistinct() const{ return m_countDistinct; }

    /**
     * <p>The number of distinct values in the field.</p>
     */
    inline bool CountDistinctHasBeenSet() const { return m_countDistinctHasBeenSet; }

    /**
     * <p>The number of distinct values in the field.</p>
     */
    inline void SetCountDistinct(int value) { m_countDistinctHasBeenSet = true; m_countDistinct = value; }

    /**
     * <p>The number of distinct values in the field.</p>
     */
    inline Statistics& WithCountDistinct(int value) { SetCountDistinct(value); return *this;}


    /**
     * <p>The number of null values in the field.</p>
     */
    inline int GetCountNull() const{ return m_countNull; }

    /**
     * <p>The number of null values in the field.</p>
     */
    inline bool CountNullHasBeenSet() const { return m_countNullHasBeenSet; }

    /**
     * <p>The number of null values in the field.</p>
     */
    inline void SetCountNull(int value) { m_countNullHasBeenSet = true; m_countNull = value; }

    /**
     * <p>The number of null values in the field.</p>
     */
    inline Statistics& WithCountNull(int value) { SetCountNull(value); return *this;}


    /**
     * <p>The number of NAN (not a number) values in the field.</p>
     */
    inline int GetCountNan() const{ return m_countNan; }

    /**
     * <p>The number of NAN (not a number) values in the field.</p>
     */
    inline bool CountNanHasBeenSet() const { return m_countNanHasBeenSet; }

    /**
     * <p>The number of NAN (not a number) values in the field.</p>
     */
    inline void SetCountNan(int value) { m_countNanHasBeenSet = true; m_countNan = value; }

    /**
     * <p>The number of NAN (not a number) values in the field.</p>
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

  private:

    int m_count;
    bool m_countHasBeenSet;

    int m_countDistinct;
    bool m_countDistinctHasBeenSet;

    int m_countNull;
    bool m_countNullHasBeenSet;

    int m_countNan;
    bool m_countNanHasBeenSet;

    Aws::String m_min;
    bool m_minHasBeenSet;

    Aws::String m_max;
    bool m_maxHasBeenSet;

    double m_avg;
    bool m_avgHasBeenSet;

    double m_stddev;
    bool m_stddevHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
