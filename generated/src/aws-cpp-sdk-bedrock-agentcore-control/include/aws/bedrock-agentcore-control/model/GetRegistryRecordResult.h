/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DescriptorType.h>
#include <aws/bedrock-agentcore-control/model/Descriptors.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordStatus.h>
#include <aws/bedrock-agentcore-control/model/SynchronizationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/SynchronizationType.h>
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
class GetRegistryRecordResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetRegistryRecordResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetRegistryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetRegistryRecordResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the registry that contains the record.</p>
   */
  inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
  template <typename RegistryArnT = Aws::String>
  void SetRegistryArn(RegistryArnT&& value) {
    m_registryArnHasBeenSet = true;
    m_registryArn = std::forward<RegistryArnT>(value);
  }
  template <typename RegistryArnT = Aws::String>
  GetRegistryRecordResult& WithRegistryArn(RegistryArnT&& value) {
    SetRegistryArn(std::forward<RegistryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the registry record.</p>
   */
  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  GetRegistryRecordResult& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the registry record.</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  GetRegistryRecordResult& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the registry record.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRegistryRecordResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the registry record.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRegistryRecordResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptor type of the registry record. Possible values are
   * <code>MCP</code>, <code>A2A</code>, <code>CUSTOM</code>, and
   * <code>AGENT_SKILLS</code>.</p>
   */
  inline DescriptorType GetDescriptorType() const { return m_descriptorType; }
  inline void SetDescriptorType(DescriptorType value) {
    m_descriptorTypeHasBeenSet = true;
    m_descriptorType = value;
  }
  inline GetRegistryRecordResult& WithDescriptorType(DescriptorType value) {
    SetDescriptorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptor-type-specific configuration containing the resource schema and
   * metadata. For details, see the <code>Descriptors</code> data type.</p>
   */
  inline const Descriptors& GetDescriptors() const { return m_descriptors; }
  template <typename DescriptorsT = Descriptors>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Descriptors>
  GetRegistryRecordResult& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the registry record.</p>
   */
  inline const Aws::String& GetRecordVersion() const { return m_recordVersion; }
  template <typename RecordVersionT = Aws::String>
  void SetRecordVersion(RecordVersionT&& value) {
    m_recordVersionHasBeenSet = true;
    m_recordVersion = std::forward<RecordVersionT>(value);
  }
  template <typename RecordVersionT = Aws::String>
  GetRegistryRecordResult& WithRecordVersion(RecordVersionT&& value) {
    SetRecordVersion(std::forward<RecordVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the registry record. Possible values include
   * <code>CREATING</code>, <code>DRAFT</code>, <code>APPROVED</code>,
   * <code>PENDING_APPROVAL</code>, <code>REJECTED</code>, <code>DEPRECATED</code>,
   * <code>UPDATING</code>, <code>CREATE_FAILED</code>, and
   * <code>UPDATE_FAILED</code>. A record transitions from <code>CREATING</code> to
   * <code>DRAFT</code>, then to <code>PENDING_APPROVAL</code> (via
   * <code>SubmitRegistryRecordForApproval</code>), and finally to
   * <code>APPROVED</code> upon approval.</p>
   */
  inline RegistryRecordStatus GetStatus() const { return m_status; }
  inline void SetStatus(RegistryRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRegistryRecordResult& WithStatus(RegistryRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry record was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRegistryRecordResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry record was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetRegistryRecordResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current status, typically set when the status is a failure
   * state.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetRegistryRecordResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of synchronization used for this record.</p>
   */
  inline SynchronizationType GetSynchronizationType() const { return m_synchronizationType; }
  inline void SetSynchronizationType(SynchronizationType value) {
    m_synchronizationTypeHasBeenSet = true;
    m_synchronizationType = value;
  }
  inline GetRegistryRecordResult& WithSynchronizationType(SynchronizationType value) {
    SetSynchronizationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for synchronizing registry record metadata from an external
   * source.</p>
   */
  inline const SynchronizationConfiguration& GetSynchronizationConfiguration() const { return m_synchronizationConfiguration; }
  template <typename SynchronizationConfigurationT = SynchronizationConfiguration>
  void SetSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    m_synchronizationConfigurationHasBeenSet = true;
    m_synchronizationConfiguration = std::forward<SynchronizationConfigurationT>(value);
  }
  template <typename SynchronizationConfigurationT = SynchronizationConfiguration>
  GetRegistryRecordResult& WithSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    SetSynchronizationConfiguration(std::forward<SynchronizationConfigurationT>(value));
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
  GetRegistryRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_registryArn;

  Aws::String m_recordArn;

  Aws::String m_recordId;

  Aws::String m_name;

  Aws::String m_description;

  DescriptorType m_descriptorType{DescriptorType::NOT_SET};

  Descriptors m_descriptors;

  Aws::String m_recordVersion;

  RegistryRecordStatus m_status{RegistryRecordStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_statusReason;

  SynchronizationType m_synchronizationType{SynchronizationType::NOT_SET};

  SynchronizationConfiguration m_synchronizationConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryArnHasBeenSet = false;
  bool m_recordArnHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_descriptorTypeHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_synchronizationTypeHasBeenSet = false;
  bool m_synchronizationConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
