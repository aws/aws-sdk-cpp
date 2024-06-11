/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FieldStats
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API FieldStats();
    AWS_CLOUDSEARCHDOMAIN_API FieldStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API FieldStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(const Aws::String& value) { m_minHasBeenSet = true; m_min = value; }
    inline void SetMin(Aws::String&& value) { m_minHasBeenSet = true; m_min = std::move(value); }
    inline void SetMin(const char* value) { m_minHasBeenSet = true; m_min.assign(value); }
    inline FieldStats& WithMin(const Aws::String& value) { SetMin(value); return *this;}
    inline FieldStats& WithMin(Aws::String&& value) { SetMin(std::move(value)); return *this;}
    inline FieldStats& WithMin(const char* value) { SetMin(value); return *this;}
    ///@}

    ///@{
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
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }
    inline FieldStats& WithMax(const Aws::String& value) { SetMax(value); return *this;}
    inline FieldStats& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}
    inline FieldStats& WithMax(const char* value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline long long GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline FieldStats& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline long long GetMissing() const{ return m_missing; }
    inline bool MissingHasBeenSet() const { return m_missingHasBeenSet; }
    inline void SetMissing(long long value) { m_missingHasBeenSet = true; m_missing = value; }
    inline FieldStats& WithMissing(long long value) { SetMissing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline double GetSum() const{ return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline FieldStats& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline double GetSumOfSquares() const{ return m_sumOfSquares; }
    inline bool SumOfSquaresHasBeenSet() const { return m_sumOfSquaresHasBeenSet; }
    inline void SetSumOfSquares(double value) { m_sumOfSquaresHasBeenSet = true; m_sumOfSquares = value; }
    inline FieldStats& WithSumOfSquares(double value) { SetSumOfSquares(value); return *this;}
    ///@}

    ///@{
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
    inline bool MeanHasBeenSet() const { return m_meanHasBeenSet; }
    inline void SetMean(const Aws::String& value) { m_meanHasBeenSet = true; m_mean = value; }
    inline void SetMean(Aws::String&& value) { m_meanHasBeenSet = true; m_mean = std::move(value); }
    inline void SetMean(const char* value) { m_meanHasBeenSet = true; m_mean.assign(value); }
    inline FieldStats& WithMean(const Aws::String& value) { SetMean(value); return *this;}
    inline FieldStats& WithMean(Aws::String&& value) { SetMean(std::move(value)); return *this;}
    inline FieldStats& WithMean(const char* value) { SetMean(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline double GetStddev() const{ return m_stddev; }
    inline bool StddevHasBeenSet() const { return m_stddevHasBeenSet; }
    inline void SetStddev(double value) { m_stddevHasBeenSet = true; m_stddev = value; }
    inline FieldStats& WithStddev(double value) { SetStddev(value); return *this;}
    ///@}
  private:

    Aws::String m_min;
    bool m_minHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;

    long long m_count;
    bool m_countHasBeenSet = false;

    long long m_missing;
    bool m_missingHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_sumOfSquares;
    bool m_sumOfSquaresHasBeenSet = false;

    Aws::String m_mean;
    bool m_meanHasBeenSet = false;

    double m_stddev;
    bool m_stddevHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
