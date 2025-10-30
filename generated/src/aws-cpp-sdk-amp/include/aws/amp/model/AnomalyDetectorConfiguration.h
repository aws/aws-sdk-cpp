/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/RandomCutForestConfiguration.h>

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
 * <p>The configuration for the anomaly detection algorithm.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AnomalyDetectorConfiguration">AWS
 * API Reference</a></p>
 */
class AnomalyDetectorConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Random Cut Forest algorithm configuration for anomaly detection.</p>
   */
  inline const RandomCutForestConfiguration& GetRandomCutForest() const { return m_randomCutForest; }
  inline bool RandomCutForestHasBeenSet() const { return m_randomCutForestHasBeenSet; }
  template <typename RandomCutForestT = RandomCutForestConfiguration>
  void SetRandomCutForest(RandomCutForestT&& value) {
    m_randomCutForestHasBeenSet = true;
    m_randomCutForest = std::forward<RandomCutForestT>(value);
  }
  template <typename RandomCutForestT = RandomCutForestConfiguration>
  AnomalyDetectorConfiguration& WithRandomCutForest(RandomCutForestT&& value) {
    SetRandomCutForest(std::forward<RandomCutForestT>(value));
    return *this;
  }
  ///@}
 private:
  RandomCutForestConfiguration m_randomCutForest;
  bool m_randomCutForestHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
