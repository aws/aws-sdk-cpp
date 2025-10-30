/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AnomalyDetectorDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {
class DescribeAnomalyDetectorResult {
 public:
  AWS_PROMETHEUSSERVICE_API DescribeAnomalyDetectorResult() = default;
  AWS_PROMETHEUSSERVICE_API DescribeAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PROMETHEUSSERVICE_API DescribeAnomalyDetectorResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The detailed information about the anomaly detector.</p>
   */
  inline const AnomalyDetectorDescription& GetAnomalyDetector() const { return m_anomalyDetector; }
  template <typename AnomalyDetectorT = AnomalyDetectorDescription>
  void SetAnomalyDetector(AnomalyDetectorT&& value) {
    m_anomalyDetectorHasBeenSet = true;
    m_anomalyDetector = std::forward<AnomalyDetectorT>(value);
  }
  template <typename AnomalyDetectorT = AnomalyDetectorDescription>
  DescribeAnomalyDetectorResult& WithAnomalyDetector(AnomalyDetectorT&& value) {
    SetAnomalyDetector(std::forward<AnomalyDetectorT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAnomalyDetectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  AnomalyDetectorDescription m_anomalyDetector;
  bool m_anomalyDetectorHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
