/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AnomalyDetectorStatusCode.h>
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
 * <p>The status information of an anomaly detector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AnomalyDetectorStatus">AWS
 * API Reference</a></p>
 */
class AnomalyDetectorStatus {
 public:
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorStatus() = default;
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status code of the anomaly detector.</p>
   */
  inline AnomalyDetectorStatusCode GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(AnomalyDetectorStatusCode value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline AnomalyDetectorStatus& WithStatusCode(AnomalyDetectorStatusCode value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the current status of the anomaly detector.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AnomalyDetectorStatus& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  AnomalyDetectorStatusCode m_statusCode{AnomalyDetectorStatusCode::NOT_SET};

  Aws::String m_statusReason;
  bool m_statusCodeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
