/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CollectorStatus.h>
#include <aws/continuum/model/CollectorType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace Continuum {
namespace Model {
/**
 * <p>Contains the current state of the updated Collector.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateCollectorOutput">AWS
 * API Reference</a></p>
 */
class UpdateCollectorResult {
 public:
  AWS_CONTINUUM_API UpdateCollectorResult() = default;
  AWS_CONTINUUM_API UpdateCollectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API UpdateCollectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated Collector.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  UpdateCollectorResult& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the updated Collector.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  UpdateCollectorResult& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source collected by this Collector.</p>
   */
  inline CollectorType GetType() const { return m_type; }
  inline void SetType(CollectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateCollectorResult& WithType(CollectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status.</p>
   */
  inline CollectorStatus GetStatus() const { return m_status; }
  inline void SetStatus(CollectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateCollectorResult& WithStatus(CollectorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the provisioned AWS Config Recorder.</p>
   */
  inline const Aws::String& GetConfigRecorderArn() const { return m_configRecorderArn; }
  template <typename ConfigRecorderArnT = Aws::String>
  void SetConfigRecorderArn(ConfigRecorderArnT&& value) {
    m_configRecorderArnHasBeenSet = true;
    m_configRecorderArn = std::forward<ConfigRecorderArnT>(value);
  }
  template <typename ConfigRecorderArnT = Aws::String>
  UpdateCollectorResult& WithConfigRecorderArn(ConfigRecorderArnT&& value) {
    SetConfigRecorderArn(std::forward<ConfigRecorderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role used to collect Kubernetes cluster metadata.</p>
   */
  inline const Aws::String& GetKubernetesClusterRoleArn() const { return m_kubernetesClusterRoleArn; }
  template <typename KubernetesClusterRoleArnT = Aws::String>
  void SetKubernetesClusterRoleArn(KubernetesClusterRoleArnT&& value) {
    m_kubernetesClusterRoleArnHasBeenSet = true;
    m_kubernetesClusterRoleArn = std::forward<KubernetesClusterRoleArnT>(value);
  }
  template <typename KubernetesClusterRoleArnT = Aws::String>
  UpdateCollectorResult& WithKubernetesClusterRoleArn(KubernetesClusterRoleArnT&& value) {
    SetKubernetesClusterRoleArn(std::forward<KubernetesClusterRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Collector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateCollectorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of the last successful UpdateCollector call, returned at
   * whole-second precision in the same date-time format as createdAt.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateCollectorResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateCollectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_collectorId;

  Aws::String m_collectorArn;

  CollectorType m_type{CollectorType::NOT_SET};

  CollectorStatus m_status{CollectorStatus::NOT_SET};

  Aws::String m_configRecorderArn;

  Aws::String m_kubernetesClusterRoleArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_collectorIdHasBeenSet = false;
  bool m_collectorArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configRecorderArnHasBeenSet = false;
  bool m_kubernetesClusterRoleArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
