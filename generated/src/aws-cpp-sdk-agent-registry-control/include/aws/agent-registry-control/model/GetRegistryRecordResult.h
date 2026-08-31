/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/Descriptors.h>
#include <aws/agent-registry-control/model/Provenance.h>
#include <aws/agent-registry-control/model/RecordType.h>
#include <aws/agent-registry-control/model/RegistryRecordStatus.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>Response structure for retrieving a registry record</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/GetRegistryRecordResponse">AWS
 * API Reference</a></p>
 */
class GetRegistryRecordResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API GetRegistryRecordResult() = default;
  AWS_AGENTREGISTRYCONTROL_API GetRegistryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API GetRegistryRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the parent registry that owns the
   * record.</p>
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
   * <p>The name of the registry record. Names are unique within a registry.</p>
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
   * <p>The human-readable display name of the registry record.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetRegistryRecordResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the registry record.</p>
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
   * <p>The type of the registry record, such as MCP, AGENT, SKILL, or CUSTOM.</p>
   */
  inline RecordType GetRecordType() const { return m_recordType; }
  inline void SetRecordType(RecordType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline GetRegistryRecordResult& WithRecordType(RecordType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typed descriptors that define the content of the registry record.</p>
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
   * <p>The version identifier of the registry record.</p>
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
   * <p>The lifecycle status of the registry record.</p>
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
  GetRegistryRecordResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Provenance>& GetProvenance() const { return m_provenance; }
  template <typename ProvenanceT = Aws::Vector<Provenance>>
  void SetProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance = std::forward<ProvenanceT>(value);
  }
  template <typename ProvenanceT = Aws::Vector<Provenance>>
  GetRegistryRecordResult& WithProvenance(ProvenanceT&& value) {
    SetProvenance(std::forward<ProvenanceT>(value));
    return *this;
  }
  template <typename ProvenanceT = Provenance>
  GetRegistryRecordResult& AddProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance.emplace_back(std::forward<ProvenanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the registry record was created by auto-detection.
   * <code>true</code> indicates the record was automatically created by the service
   * based on the registry's auto-detection configuration; <code>false</code>
   * indicates the record was created through a control-plane API call.</p>
   */
  inline bool GetCreatedByAutoDetection() const { return m_createdByAutoDetection; }
  inline void SetCreatedByAutoDetection(bool value) {
    m_createdByAutoDetectionHasBeenSet = true;
    m_createdByAutoDetection = value;
  }
  inline GetRegistryRecordResult& WithCreatedByAutoDetection(bool value) {
    SetCreatedByAutoDetection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that created the registry
   * record.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetRegistryRecordResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
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

  Aws::String m_displayName;

  Aws::String m_description;

  RecordType m_recordType{RecordType::NOT_SET};

  Descriptors m_descriptors;

  Aws::String m_recordVersion;

  RegistryRecordStatus m_status{RegistryRecordStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_statusReason;

  Aws::Vector<Provenance> m_provenance;

  bool m_createdByAutoDetection{false};

  Aws::String m_createdBy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryArnHasBeenSet = false;
  bool m_recordArnHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_provenanceHasBeenSet = false;
  bool m_createdByAutoDetectionHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
