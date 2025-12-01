/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsPercentiles.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Statistical measurements for object type attributes including basic
 * statistics and percentiles.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetObjectTypeAttributeStatisticsStats">AWS
 * API Reference</a></p>
 */
class GetObjectTypeAttributeStatisticsStats {
 public:
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsStats() = default;
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsStats(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsStats& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum value found in the attribute dataset.</p>
   */
  inline double GetMaximum() const { return m_maximum; }
  inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
  inline void SetMaximum(double value) {
    m_maximumHasBeenSet = true;
    m_maximum = value;
  }
  inline GetObjectTypeAttributeStatisticsStats& WithMaximum(double value) {
    SetMaximum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum value found in the attribute dataset.</p>
   */
  inline double GetMinimum() const { return m_minimum; }
  inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
  inline void SetMinimum(double value) {
    m_minimumHasBeenSet = true;
    m_minimum = value;
  }
  inline GetObjectTypeAttributeStatisticsStats& WithMinimum(double value) {
    SetMinimum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arithmetic mean of the attribute values.</p>
   */
  inline double GetAverage() const { return m_average; }
  inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }
  inline void SetAverage(double value) {
    m_averageHasBeenSet = true;
    m_average = value;
  }
  inline GetObjectTypeAttributeStatisticsStats& WithAverage(double value) {
    SetAverage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The standard deviation of the attribute values, measuring their spread around
   * the mean.</p>
   */
  inline double GetStandardDeviation() const { return m_standardDeviation; }
  inline bool StandardDeviationHasBeenSet() const { return m_standardDeviationHasBeenSet; }
  inline void SetStandardDeviation(double value) {
    m_standardDeviationHasBeenSet = true;
    m_standardDeviation = value;
  }
  inline GetObjectTypeAttributeStatisticsStats& WithStandardDeviation(double value) {
    SetStandardDeviation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Percentile distribution statistics for the attribute values.</p>
   */
  inline const GetObjectTypeAttributeStatisticsPercentiles& GetPercentiles() const { return m_percentiles; }
  inline bool PercentilesHasBeenSet() const { return m_percentilesHasBeenSet; }
  template <typename PercentilesT = GetObjectTypeAttributeStatisticsPercentiles>
  void SetPercentiles(PercentilesT&& value) {
    m_percentilesHasBeenSet = true;
    m_percentiles = std::forward<PercentilesT>(value);
  }
  template <typename PercentilesT = GetObjectTypeAttributeStatisticsPercentiles>
  GetObjectTypeAttributeStatisticsStats& WithPercentiles(PercentilesT&& value) {
    SetPercentiles(std::forward<PercentilesT>(value));
    return *this;
  }
  ///@}
 private:
  double m_maximum{0.0};
  bool m_maximumHasBeenSet = false;

  double m_minimum{0.0};
  bool m_minimumHasBeenSet = false;

  double m_average{0.0};
  bool m_averageHasBeenSet = false;

  double m_standardDeviation{0.0};
  bool m_standardDeviationHasBeenSet = false;

  GetObjectTypeAttributeStatisticsPercentiles m_percentiles;
  bool m_percentilesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
