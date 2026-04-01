/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class DeleteDaemonResult {
 public:
  AWS_ECS_API DeleteDaemonResult() = default;
  AWS_ECS_API DeleteDaemonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DeleteDaemonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  DeleteDaemonResult& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the daemon. After you call <code>DeleteDaemon</code>, the
   * status changes to <code>DELETE_IN_PROGRESS</code>.</p>
   */
  inline DaemonStatus GetStatus() const { return m_status; }
  inline void SetStatus(DaemonStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteDaemonResult& WithStatus(DaemonStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DeleteDaemonResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DeleteDaemonResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon deployment that was triggered by
   * the delete operation. This deployment drains existing daemon tasks from the
   * container instances.</p>
   */
  inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
  template <typename DeploymentArnT = Aws::String>
  void SetDeploymentArn(DeploymentArnT&& value) {
    m_deploymentArnHasBeenSet = true;
    m_deploymentArn = std::forward<DeploymentArnT>(value);
  }
  template <typename DeploymentArnT = Aws::String>
  DeleteDaemonResult& WithDeploymentArn(DeploymentArnT&& value) {
    SetDeploymentArn(std::forward<DeploymentArnT>(value));
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
  DeleteDaemonResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_daemonArn;

  DaemonStatus m_status{DaemonStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_deploymentArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_deploymentArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
