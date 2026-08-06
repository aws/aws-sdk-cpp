/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ApprovalConfiguration.h>
#include <aws/agent-registry-control/model/DiscoveryConfiguration.h>
#include <aws/agent-registry-control/model/RegistryStatus.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>Response structure for getting a registry</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GetRegistryResponse">AWS
 * API Reference</a></p>
 */
class GetRegistryResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API GetRegistryResult() = default;
  AWS_AGENTREGISTRYCONTROL_API GetRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API GetRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the registry</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRegistryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the registry</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRegistryResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the registry</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  GetRegistryResult& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the registry</p>
   */
  inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
  template <typename RegistryArnT = Aws::String>
  void SetRegistryArn(RegistryArnT&& value) {
    m_registryArnHasBeenSet = true;
    m_registryArn = std::forward<RegistryArnT>(value);
  }
  template <typename RegistryArnT = Aws::String>
  GetRegistryResult& WithRegistryArn(RegistryArnT&& value) {
    SetRegistryArn(std::forward<RegistryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Discovery configuration for the registry</p>
   */
  inline const DiscoveryConfiguration& GetDiscoveryConfiguration() const { return m_discoveryConfiguration; }
  template <typename DiscoveryConfigurationT = DiscoveryConfiguration>
  void SetDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    m_discoveryConfigurationHasBeenSet = true;
    m_discoveryConfiguration = std::forward<DiscoveryConfigurationT>(value);
  }
  template <typename DiscoveryConfigurationT = DiscoveryConfiguration>
  GetRegistryResult& WithDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    SetDiscoveryConfiguration(std::forward<DiscoveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Approval configuration for registry records</p>
   */
  inline const ApprovalConfiguration& GetApprovalConfiguration() const { return m_approvalConfiguration; }
  template <typename ApprovalConfigurationT = ApprovalConfiguration>
  void SetApprovalConfiguration(ApprovalConfigurationT&& value) {
    m_approvalConfigurationHasBeenSet = true;
    m_approvalConfiguration = std::forward<ApprovalConfigurationT>(value);
  }
  template <typename ApprovalConfigurationT = ApprovalConfiguration>
  GetRegistryResult& WithApprovalConfiguration(ApprovalConfigurationT&& value) {
    SetApprovalConfiguration(std::forward<ApprovalConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the registry</p>
   */
  inline RegistryStatus GetStatus() const { return m_status; }
  inline void SetStatus(RegistryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRegistryResult& WithStatus(RegistryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current status. Typically populated when the status
   * indicates a failure state.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetRegistryResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRegistryResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetRegistryResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  GetRegistryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_registryId;

  Aws::String m_registryArn;

  DiscoveryConfiguration m_discoveryConfiguration;

  ApprovalConfiguration m_approvalConfiguration;

  RegistryStatus m_status{RegistryStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_registryIdHasBeenSet = false;
  bool m_registryArnHasBeenSet = false;
  bool m_discoveryConfigurationHasBeenSet = false;
  bool m_approvalConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
