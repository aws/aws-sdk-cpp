/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CapacityProviderStatus.h>
#include <aws/bedrock-agentcore-control/model/CapacityProviderStatusCode.h>
#include <aws/bedrock-agentcore-control/model/ComputeConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PermissionsConfiguration.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class GetCapacityProviderResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetCapacityProviderResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetCapacityProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderId() const { return m_capacityProviderId; }
  template <typename CapacityProviderIdT = Aws::String>
  void SetCapacityProviderId(CapacityProviderIdT&& value) {
    m_capacityProviderIdHasBeenSet = true;
    m_capacityProviderId = std::forward<CapacityProviderIdT>(value);
  }
  template <typename CapacityProviderIdT = Aws::String>
  GetCapacityProviderResult& WithCapacityProviderId(CapacityProviderIdT&& value) {
    SetCapacityProviderId(std::forward<CapacityProviderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  GetCapacityProviderResult& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the capacity provider.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetCapacityProviderResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capacity provider. For possible values, see
   * <code>CapacityProviderStatus</code>.</p>
   */
  inline CapacityProviderStatus GetStatus() const { return m_status; }
  inline void SetStatus(CapacityProviderStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCapacityProviderResult& WithStatus(CapacityProviderStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the capacity provider, if one was provided.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetCapacityProviderResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reason code for a capacity provider that is not in the <code>READY</code>
   * state. Use this code for programmatic error handling.</p>
   */
  inline CapacityProviderStatusCode GetStatusCode() const { return m_statusCode; }
  inline void SetStatusCode(CapacityProviderStatusCode value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline GetCapacityProviderResult& WithStatusCode(CapacityProviderStatusCode value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message that describes why the capacity provider is not in
   * the <code>READY</code> state. Because these messages can change, use
   * <code>statusCode</code> for programmatic error handling.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetCapacityProviderResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions configuration for the capacity provider.</p>
   */
  inline const PermissionsConfiguration& GetPermissionsConfiguration() const { return m_permissionsConfiguration; }
  template <typename PermissionsConfigurationT = PermissionsConfiguration>
  void SetPermissionsConfiguration(PermissionsConfigurationT&& value) {
    m_permissionsConfigurationHasBeenSet = true;
    m_permissionsConfiguration = std::forward<PermissionsConfigurationT>(value);
  }
  template <typename PermissionsConfigurationT = PermissionsConfiguration>
  GetCapacityProviderResult& WithPermissionsConfiguration(PermissionsConfigurationT&& value) {
    SetPermissionsConfiguration(std::forward<PermissionsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute configuration for the capacity provider.</p>
   */
  inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  GetCapacityProviderResult& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the capacity provider was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCapacityProviderResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the capacity provider was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetCapacityProviderResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  GetCapacityProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_capacityProviderId;

  Aws::String m_capacityProviderArn;

  Aws::String m_name;

  CapacityProviderStatus m_status{CapacityProviderStatus::NOT_SET};

  Aws::String m_description;

  CapacityProviderStatusCode m_statusCode{CapacityProviderStatusCode::NOT_SET};

  Aws::String m_statusReason;

  PermissionsConfiguration m_permissionsConfiguration;

  ComputeConfiguration m_computeConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityProviderIdHasBeenSet = false;
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_permissionsConfigurationHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
