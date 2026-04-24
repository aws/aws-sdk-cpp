/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace PrometheusService {
namespace Model {

/**
 */
class DeleteAnomalyDetectorRequest : public PrometheusServiceRequest {
 public:
  AWS_PROMETHEUSSERVICE_API DeleteAnomalyDetectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAnomalyDetector"; }

  AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

  AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the workspace containing the anomaly detector to
   * delete.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  DeleteAnomalyDetectorRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the anomaly detector to delete.</p>
   */
  inline const Aws::String& GetAnomalyDetectorId() const { return m_anomalyDetectorId; }
  inline bool AnomalyDetectorIdHasBeenSet() const { return m_anomalyDetectorIdHasBeenSet; }
  template <typename AnomalyDetectorIdT = Aws::String>
  void SetAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    m_anomalyDetectorIdHasBeenSet = true;
    m_anomalyDetectorId = std::forward<AnomalyDetectorIdT>(value);
  }
  template <typename AnomalyDetectorIdT = Aws::String>
  DeleteAnomalyDetectorRequest& WithAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    SetAnomalyDetectorId(std::forward<AnomalyDetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteAnomalyDetectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  Aws::String m_anomalyDetectorId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_workspaceIdHasBeenSet = false;
  bool m_anomalyDetectorIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
