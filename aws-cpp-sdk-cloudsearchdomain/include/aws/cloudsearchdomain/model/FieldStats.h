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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>The statistics for a field calculated in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/FieldStats">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API FieldStats
  {
  public:
    FieldStats();
    FieldStats(Aws::Utils::Json::JsonView jsonValue);
    FieldStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline const Aws::String& GetMin() const{ return m_min; }

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMin(const Aws::String& value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMin(Aws::String&& value) { m_minHasBeenSet = true; m_min = std::move(value); }

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMin(const char* value) { m_minHasBeenSet = true; m_min.assign(value); }

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMin(const Aws::String& value) { SetMin(value); return *this;}

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMin(Aws::String&& value) { SetMin(std::move(value)); return *this;}

    /**
     * <p>The minimum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>min</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>min</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMin(const char* value) { SetMin(value); return *this;}


    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline const Aws::String& GetMax() const{ return m_max; }

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMax(const Aws::String& value) { SetMax(value); return *this;}

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}

    /**
     * <p>The maximum value found in the specified field in the result set.</p> <p>If
     * the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>max</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>max</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMax(const char* value) { SetMax(value); return *this;}


    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline FieldStats& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline long long GetMissing() const{ return m_missing; }

    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline bool MissingHasBeenSet() const { return m_missingHasBeenSet; }

    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline void SetMissing(long long value) { m_missingHasBeenSet = true; m_missing = value; }

    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline FieldStats& WithMissing(long long value) { SetMissing(value); return *this;}


    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline FieldStats& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline double GetSumOfSquares() const{ return m_sumOfSquares; }

    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline bool SumOfSquaresHasBeenSet() const { return m_sumOfSquaresHasBeenSet; }

    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline void SetSumOfSquares(double value) { m_sumOfSquaresHasBeenSet = true; m_sumOfSquares = value; }

    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline FieldStats& WithSumOfSquares(double value) { SetSumOfSquares(value); return *this;}


    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline const Aws::String& GetMean() const{ return m_mean; }

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline bool MeanHasBeenSet() const { return m_meanHasBeenSet; }

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMean(const Aws::String& value) { m_meanHasBeenSet = true; m_mean = value; }

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMean(Aws::String&& value) { m_meanHasBeenSet = true; m_mean = std::move(value); }

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline void SetMean(const char* value) { m_meanHasBeenSet = true; m_mean.assign(value); }

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMean(const Aws::String& value) { SetMean(value); return *this;}

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMean(Aws::String&& value) { SetMean(std::move(value)); return *this;}

    /**
     * <p>The average of the values found in the specified field in the result set.</p>
     * <p>If the field is numeric (<code>int</code>, <code>int-array</code>,
     * <code>double</code>, or <code>double-array</code>), <code>mean</code> is the
     * string representation of a double-precision 64-bit floating point value. If the
     * field is <code>date</code> or <code>date-array</code>, <code>mean</code> is the
     * string representation of a date with the format specified in <a
     * href="http://tools.ietf.org/html/rfc3339">IETF RFC3339</a>:
     * yyyy-mm-ddTHH:mm:ss.SSSZ.</p>
     */
    inline FieldStats& WithMean(const char* value) { SetMean(value); return *this;}


    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline double GetStddev() const{ return m_stddev; }

    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline bool StddevHasBeenSet() const { return m_stddevHasBeenSet; }

    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline void SetStddev(double value) { m_stddevHasBeenSet = true; m_stddev = value; }

    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline FieldStats& WithStddev(double value) { SetStddev(value); return *this;}

  private:

    Aws::String m_min;
    bool m_minHasBeenSet;

    Aws::String m_max;
    bool m_maxHasBeenSet;

    long long m_count;
    bool m_countHasBeenSet;

    long long m_missing;
    bool m_missingHasBeenSet;

    double m_sum;
    bool m_sumHasBeenSet;

    double m_sumOfSquares;
    bool m_sumOfSquaresHasBeenSet;

    Aws::String m_mean;
    bool m_meanHasBeenSet;

    double m_stddev;
    bool m_stddevHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
