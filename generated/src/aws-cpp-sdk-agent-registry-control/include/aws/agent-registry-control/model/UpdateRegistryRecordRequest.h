/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/Provenance.h>
#include <aws/agent-registry-control/model/RecordType.h>
#include <aws/agent-registry-control/model/UpdatedCustomMetadataMap.h>
#include <aws/agent-registry-control/model/UpdatedDescription.h>
#include <aws/agent-registry-control/model/UpdatedDescriptors.h>
#include <aws/agent-registry-control/model/UpdatedDisplayName.h>
#include <aws/agent-registry-control/model/UpdatedRegistryRecordArtifact.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 */
class UpdateRegistryRecordRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdateRegistryRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRegistryRecord"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the registry containing the record (ARN or ID)</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  UpdateRegistryRecordRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the registry record to update (ARN or ID)</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  UpdateRegistryRecordRequest& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the registry record. Omit to leave the name
   * unchanged.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRegistryRecordRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated display name of the registry record. Omit to leave the display
   * name unchanged; provide an empty wrapper to unset it.</p>
   */
  inline const UpdatedDisplayName& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = UpdatedDisplayName>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = UpdatedDisplayName>
  UpdateRegistryRecordRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the registry record. Omit to leave the description
   * unchanged; provide an empty wrapper to unset it.</p>
   */
  inline const UpdatedDescription& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = UpdatedDescription>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = UpdatedDescription>
  UpdateRegistryRecordRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated type of the registry record. Omit to leave the record type
   * unchanged.</p>
   */
  inline RecordType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RecordType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline UpdateRegistryRecordRequest& WithRecordType(RecordType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated typed descriptor content for the registry record. Omit to leave
   * the descriptors unchanged.</p>
   */
  inline const UpdatedDescriptors& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = UpdatedDescriptors>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = UpdatedDescriptors>
  UpdateRegistryRecordRequest& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The change to the record's uploaded skill package. Omit it to keep the
   * current package, specify an empty object to remove an uploaded package, or
   * specify <code>optionalValue</code> to upload a new package. An empty object
   * doesn't remove a package that the record synchronizes from a source. To stop
   * that synchronization, remove <code>skillPackage</code>. A request that changes
   * <code>skillMd.data</code> replaces the record's package with that text, even if
   * you omit this member.</p>
   */
  inline const UpdatedRegistryRecordArtifact& GetArtifact() const { return m_artifact; }
  inline bool ArtifactHasBeenSet() const { return m_artifactHasBeenSet; }
  template <typename ArtifactT = UpdatedRegistryRecordArtifact>
  void SetArtifact(ArtifactT&& value) {
    m_artifactHasBeenSet = true;
    m_artifact = std::forward<ArtifactT>(value);
  }
  template <typename ArtifactT = UpdatedRegistryRecordArtifact>
  UpdateRegistryRecordRequest& WithArtifact(ArtifactT&& value) {
    SetArtifact(std::forward<ArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated version of the registry record. Omit to leave the version
   * unchanged.</p>
   */
  inline const Aws::String& GetRecordVersion() const { return m_recordVersion; }
  inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
  template <typename RecordVersionT = Aws::String>
  void SetRecordVersion(RecordVersionT&& value) {
    m_recordVersionHasBeenSet = true;
    m_recordVersion = std::forward<RecordVersionT>(value);
  }
  template <typename RecordVersionT = Aws::String>
  UpdateRegistryRecordRequest& WithRecordVersion(RecordVersionT&& value) {
    SetRecordVersion(std::forward<RecordVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated custom metadata for the registry record. Values can be strings
   * (maximum 128 characters) or native JSON booleans (<code>true</code> or
   * <code>false</code>). Omit to leave the existing metadata unchanged. Supply the
   * wrapper with a full replacement set to update, or with a null value to clear all
   * metadata.</p>
   */
  inline const UpdatedCustomMetadataMap& GetCustomMetadata() const { return m_customMetadata; }
  inline bool CustomMetadataHasBeenSet() const { return m_customMetadataHasBeenSet; }
  template <typename CustomMetadataT = UpdatedCustomMetadataMap>
  void SetCustomMetadata(CustomMetadataT&& value) {
    m_customMetadataHasBeenSet = true;
    m_customMetadata = std::forward<CustomMetadataT>(value);
  }
  template <typename CustomMetadataT = UpdatedCustomMetadataMap>
  UpdateRegistryRecordRequest& WithCustomMetadata(CustomMetadataT&& value) {
    SetCustomMetadata(std::forward<CustomMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to synchronize the record's descriptor content from its
   * source. For a skill record, the registry reads the stored
   * <code>skillMd.source</code> or <code>skillPackage.source</code> again, because
   * it doesn't watch the source for changes. For a GitHub source, the operation also
   * returns a new authorization link when one is needed. An update that sets a
   * different skill source starts a synchronization even if you omit this
   * member.</p>
   */
  inline bool GetTriggerSynchronization() const { return m_triggerSynchronization; }
  inline bool TriggerSynchronizationHasBeenSet() const { return m_triggerSynchronizationHasBeenSet; }
  inline void SetTriggerSynchronization(bool value) {
    m_triggerSynchronizationHasBeenSet = true;
    m_triggerSynchronization = value;
  }
  inline UpdateRegistryRecordRequest& WithTriggerSynchronization(bool value) {
    SetTriggerSynchronization(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to ask a GitHub user to authorize access again, even when
   * the current authorization still works, for example to use a different GitHub
   * account. You can use it only together with <code>triggerSynchronization</code>,
   * for a GitHub source whose credential provider uses the
   * <code>AUTHORIZATION_CODE</code> grant. The new authorization also replaces the
   * one that the same IAM principal's other records in the registry use for the same
   * host, credential provider, scopes, and custom parameters.</p>
   */
  inline bool GetForceAuthentication() const { return m_forceAuthentication; }
  inline bool ForceAuthenticationHasBeenSet() const { return m_forceAuthenticationHasBeenSet; }
  inline void SetForceAuthentication(bool value) {
    m_forceAuthenticationHasBeenSet = true;
    m_forceAuthentication = value;
  }
  inline UpdateRegistryRecordRequest& WithForceAuthentication(bool value) {
    SetForceAuthentication(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provenance lineage re-assertion for the registry record. This field is
   * reserved for the Amazon Web Services Agent Registry auto-detection service
   * principal. Requests that include this field from other callers are rejected. The
   * source identity of an existing lineage is immutable; a re-assertion may only
   * refresh the source details.</p>
   */
  inline const Aws::Vector<Provenance>& GetProvenance() const { return m_provenance; }
  inline bool ProvenanceHasBeenSet() const { return m_provenanceHasBeenSet; }
  template <typename ProvenanceT = Aws::Vector<Provenance>>
  void SetProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance = std::forward<ProvenanceT>(value);
  }
  template <typename ProvenanceT = Aws::Vector<Provenance>>
  UpdateRegistryRecordRequest& WithProvenance(ProvenanceT&& value) {
    SetProvenance(std::forward<ProvenanceT>(value));
    return *this;
  }
  template <typename ProvenanceT = Provenance>
  UpdateRegistryRecordRequest& AddProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance.emplace_back(std::forward<ProvenanceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_recordId;

  Aws::String m_name;

  UpdatedDisplayName m_displayName;

  UpdatedDescription m_description;

  RecordType m_recordType{RecordType::NOT_SET};

  UpdatedDescriptors m_descriptors;

  UpdatedRegistryRecordArtifact m_artifact;

  Aws::String m_recordVersion;

  UpdatedCustomMetadataMap m_customMetadata;

  bool m_triggerSynchronization{false};

  bool m_forceAuthentication{false};

  Aws::Vector<Provenance> m_provenance;
  bool m_registryIdHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_artifactHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_customMetadataHasBeenSet = false;
  bool m_triggerSynchronizationHasBeenSet = false;
  bool m_forceAuthenticationHasBeenSet = false;
  bool m_provenanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
