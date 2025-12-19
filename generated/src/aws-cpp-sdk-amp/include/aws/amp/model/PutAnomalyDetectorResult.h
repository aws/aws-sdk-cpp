/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AnomalyDetectorStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class PutAnomalyDetectorResult {
 public:
  AWS_PROMETHEUSSERVICE_API PutAnomalyDetectorResult() = default;
  AWS_PROMETHEUSSERVICE_API PutAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PROMETHEUSSERVICE_API PutAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated anomaly detector.</p>
   */
  inline const Aws::String& GetAnomalyDetectorId() const { return m_anomalyDetectorId; }
  template <typename AnomalyDetectorIdT = Aws::String>
  void SetAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    m_anomalyDetectorIdHasBeenSet = true;
    m_anomalyDetectorId = std::forward<AnomalyDetectorIdT>(value);
  }
  template <typename AnomalyDetectorIdT = Aws::String>
  PutAnomalyDetectorResult& WithAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    SetAnomalyDetectorId(std::forward<AnomalyDetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated anomaly detector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  PutAnomalyDetectorResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status information of the updated anomaly detector.</p>
   */
  inline const AnomalyDetectorStatus& GetStatus() const { return m_status; }
  template <typename StatusT = AnomalyDetectorStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = AnomalyDetectorStatus>
  PutAnomalyDetectorResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags applied to the updated anomaly detector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutAnomalyDetectorResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutAnomalyDetectorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  PutAnomalyDetectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_anomalyDetectorId;

  Aws::String m_arn;

  AnomalyDetectorStatus m_status;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_anomalyDetectorIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
