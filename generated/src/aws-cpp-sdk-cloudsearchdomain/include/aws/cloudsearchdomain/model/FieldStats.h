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
    AWS_CLOUDSEARCHDOMAIN_API FieldStats() = default;
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
    inline const Aws::String& GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    template<typename MinT = Aws::String>
    void SetMin(MinT&& value) { m_minHasBeenSet = true; m_min = std::forward<MinT>(value); }
    template<typename MinT = Aws::String>
    FieldStats& WithMin(MinT&& value) { SetMin(std::forward<MinT>(value)); return *this;}
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
    inline const Aws::String& GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    template<typename MaxT = Aws::String>
    void SetMax(MaxT&& value) { m_maxHasBeenSet = true; m_max = std::forward<MaxT>(value); }
    template<typename MaxT = Aws::String>
    FieldStats& WithMax(MaxT&& value) { SetMax(std::forward<MaxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that contain a value in the specified field in the
     * result set.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline FieldStats& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that do not contain a value in the specified field in
     * the result set.</p>
     */
    inline long long GetMissing() const { return m_missing; }
    inline bool MissingHasBeenSet() const { return m_missingHasBeenSet; }
    inline void SetMissing(long long value) { m_missingHasBeenSet = true; m_missing = value; }
    inline FieldStats& WithMissing(long long value) { SetMissing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the field values across the documents in the result set.
     * <code>null</code> for date fields.</p>
     */
    inline double GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline FieldStats& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of all field values in the result set squared.</p>
     */
    inline double GetSumOfSquares() const { return m_sumOfSquares; }
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
    inline const Aws::String& GetMean() const { return m_mean; }
    inline bool MeanHasBeenSet() const { return m_meanHasBeenSet; }
    template<typename MeanT = Aws::String>
    void SetMean(MeanT&& value) { m_meanHasBeenSet = true; m_mean = std::forward<MeanT>(value); }
    template<typename MeanT = Aws::String>
    FieldStats& WithMean(MeanT&& value) { SetMean(std::forward<MeanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the values in the specified field in the result
     * set.</p>
     */
    inline double GetStddev() const { return m_stddev; }
    inline bool StddevHasBeenSet() const { return m_stddevHasBeenSet; }
    inline void SetStddev(double value) { m_stddevHasBeenSet = true; m_stddev = value; }
    inline FieldStats& WithStddev(double value) { SetStddev(value); return *this;}
    ///@}
  private:

    Aws::String m_min;
    bool m_minHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;

    long long m_missing{0};
    bool m_missingHasBeenSet = false;

    double m_sum{0.0};
    bool m_sumHasBeenSet = false;

    double m_sumOfSquares{0.0};
    bool m_sumOfSquaresHasBeenSet = false;

    Aws::String m_mean;
    bool m_meanHasBeenSet = false;

    double m_stddev{0.0};
    bool m_stddevHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
