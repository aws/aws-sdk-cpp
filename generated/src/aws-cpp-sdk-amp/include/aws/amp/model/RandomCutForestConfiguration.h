/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/IgnoreNearExpected.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>Configuration for the Random Cut Forest algorithm used for anomaly detection
 * in time-series data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/RandomCutForestConfiguration">AWS
 * API Reference</a></p>
 */
class RandomCutForestConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API RandomCutForestConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API RandomCutForestConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API RandomCutForestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Prometheus query used to retrieve the time-series data for anomaly
   * detection.</p>  <p>Random Cut Forest queries must be wrapped by a
   * supported PromQL aggregation operator. For more information, see <a
   * href="https://prometheus.io/docs/prometheus/latest/querying/operators/#aggregation-operators">Aggregation
   * operators</a> on the <i>Prometheus docs</i> website.</p> <p> <b>Supported PromQL
   * aggregation operators</b>: <code>avg</code>, <code>count</code>,
   * <code>group</code>, <code>max</code>, <code>min</code>, <code>quantile</code>,
   * <code>stddev</code>, <code>stdvar</code>, and <code>sum</code>.</p>
   */
  inline const Aws::String& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::String>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::String>
  RandomCutForestConfiguration& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive data points used to create a shingle for the Random
   * Cut Forest algorithm. The default number is 8 consecutive data points.</p>
   */
  inline int GetShingleSize() const { return m_shingleSize; }
  inline bool ShingleSizeHasBeenSet() const { return m_shingleSizeHasBeenSet; }
  inline void SetShingleSize(int value) {
    m_shingleSizeHasBeenSet = true;
    m_shingleSize = value;
  }
  inline RandomCutForestConfiguration& WithShingleSize(int value) {
    SetShingleSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of data points sampled from the input stream for the Random Cut
   * Forest algorithm. The default number is 256 consecutive data points.</p>
   */
  inline int GetSampleSize() const { return m_sampleSize; }
  inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
  inline void SetSampleSize(int value) {
    m_sampleSizeHasBeenSet = true;
    m_sampleSize = value;
  }
  inline RandomCutForestConfiguration& WithSampleSize(int value) {
    SetSampleSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for ignoring values that are near expected values from above
   * during anomaly detection.</p>
   */
  inline const IgnoreNearExpected& GetIgnoreNearExpectedFromAbove() const { return m_ignoreNearExpectedFromAbove; }
  inline bool IgnoreNearExpectedFromAboveHasBeenSet() const { return m_ignoreNearExpectedFromAboveHasBeenSet; }
  template <typename IgnoreNearExpectedFromAboveT = IgnoreNearExpected>
  void SetIgnoreNearExpectedFromAbove(IgnoreNearExpectedFromAboveT&& value) {
    m_ignoreNearExpectedFromAboveHasBeenSet = true;
    m_ignoreNearExpectedFromAbove = std::forward<IgnoreNearExpectedFromAboveT>(value);
  }
  template <typename IgnoreNearExpectedFromAboveT = IgnoreNearExpected>
  RandomCutForestConfiguration& WithIgnoreNearExpectedFromAbove(IgnoreNearExpectedFromAboveT&& value) {
    SetIgnoreNearExpectedFromAbove(std::forward<IgnoreNearExpectedFromAboveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for ignoring values that are near expected values from below
   * during anomaly detection.</p>
   */
  inline const IgnoreNearExpected& GetIgnoreNearExpectedFromBelow() const { return m_ignoreNearExpectedFromBelow; }
  inline bool IgnoreNearExpectedFromBelowHasBeenSet() const { return m_ignoreNearExpectedFromBelowHasBeenSet; }
  template <typename IgnoreNearExpectedFromBelowT = IgnoreNearExpected>
  void SetIgnoreNearExpectedFromBelow(IgnoreNearExpectedFromBelowT&& value) {
    m_ignoreNearExpectedFromBelowHasBeenSet = true;
    m_ignoreNearExpectedFromBelow = std::forward<IgnoreNearExpectedFromBelowT>(value);
  }
  template <typename IgnoreNearExpectedFromBelowT = IgnoreNearExpected>
  RandomCutForestConfiguration& WithIgnoreNearExpectedFromBelow(IgnoreNearExpectedFromBelowT&& value) {
    SetIgnoreNearExpectedFromBelow(std::forward<IgnoreNearExpectedFromBelowT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_query;

  int m_shingleSize{0};

  int m_sampleSize{0};

  IgnoreNearExpected m_ignoreNearExpectedFromAbove;

  IgnoreNearExpected m_ignoreNearExpectedFromBelow;
  bool m_queryHasBeenSet = false;
  bool m_shingleSizeHasBeenSet = false;
  bool m_sampleSizeHasBeenSet = false;
  bool m_ignoreNearExpectedFromAboveHasBeenSet = false;
  bool m_ignoreNearExpectedFromBelowHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
