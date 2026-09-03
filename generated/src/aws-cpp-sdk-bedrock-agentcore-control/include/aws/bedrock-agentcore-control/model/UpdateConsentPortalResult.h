/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalIdpConfig.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalSource.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class UpdateConsentPortalResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateConsentPortalResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdateConsentPortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdateConsentPortalResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The resources served by the consent portal.</p>
   */
  inline const Aws::Vector<ConsentPortalSource>& GetSources() const { return m_sources; }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  UpdateConsentPortalResult& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = ConsentPortalSource>
  UpdateConsentPortalResult& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the consent portal.</p>
   */
  inline const Aws::String& GetConsentPortalArn() const { return m_consentPortalArn; }
  template <typename ConsentPortalArnT = Aws::String>
  void SetConsentPortalArn(ConsentPortalArnT&& value) {
    m_consentPortalArnHasBeenSet = true;
    m_consentPortalArn = std::forward<ConsentPortalArnT>(value);
  }
  template <typename ConsentPortalArnT = Aws::String>
  UpdateConsentPortalResult& WithConsentPortalArn(ConsentPortalArnT&& value) {
    SetConsentPortalArn(std::forward<ConsentPortalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the consent portal.</p>
   */
  inline const Aws::String& GetConsentPortalId() const { return m_consentPortalId; }
  template <typename ConsentPortalIdT = Aws::String>
  void SetConsentPortalId(ConsentPortalIdT&& value) {
    m_consentPortalIdHasBeenSet = true;
    m_consentPortalId = std::forward<ConsentPortalIdT>(value);
  }
  template <typename ConsentPortalIdT = Aws::String>
  UpdateConsentPortalResult& WithConsentPortalId(ConsentPortalIdT&& value) {
    SetConsentPortalId(std::forward<ConsentPortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the consent portal was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateConsentPortalResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the consent portal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateConsentPortalResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the consent portal
   * assumes to access the resources defined in its sources.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateConsentPortalResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration that the consent portal uses to
   * authenticate end users.</p>
   */
  inline const ConsentPortalIdpConfig& GetIdpConfig() const { return m_idpConfig; }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  void SetIdpConfig(IdpConfigT&& value) {
    m_idpConfigHasBeenSet = true;
    m_idpConfig = std::forward<IdpConfigT>(value);
  }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  UpdateConsentPortalResult& WithIdpConfig(IdpConfigT&& value) {
    SetIdpConfig(std::forward<IdpConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the consent portal.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateConsentPortalResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL used to access the consent portal.</p>
   */
  inline const Aws::String& GetPortalUrl() const { return m_portalUrl; }
  template <typename PortalUrlT = Aws::String>
  void SetPortalUrl(PortalUrlT&& value) {
    m_portalUrlHasBeenSet = true;
    m_portalUrl = std::forward<PortalUrlT>(value);
  }
  template <typename PortalUrlT = Aws::String>
  UpdateConsentPortalResult& WithPortalUrl(PortalUrlT&& value) {
    SetPortalUrl(std::forward<PortalUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the consent portal.</p>
   */
  inline ConsentPortalStatus GetStatus() const { return m_status; }
  inline void SetStatus(ConsentPortalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateConsentPortalResult& WithStatus(ConsentPortalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that provides additional information about the current status of
   * the consent portal.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  UpdateConsentPortalResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the consent portal was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateConsentPortalResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  UpdateConsentPortalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ConsentPortalSource> m_sources;

  Aws::String m_consentPortalArn;

  Aws::String m_consentPortalId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  Aws::String m_executionRoleArn;

  ConsentPortalIdpConfig m_idpConfig;

  Aws::String m_name;

  Aws::String m_portalUrl;

  ConsentPortalStatus m_status{ConsentPortalStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourcesHasBeenSet = false;
  bool m_consentPortalArnHasBeenSet = false;
  bool m_consentPortalIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_idpConfigHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_portalUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
