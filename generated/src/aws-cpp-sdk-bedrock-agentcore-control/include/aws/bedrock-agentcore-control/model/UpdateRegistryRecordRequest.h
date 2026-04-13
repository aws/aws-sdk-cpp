/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DescriptorType.h>
#include <aws/bedrock-agentcore-control/model/UpdatedDescription.h>
#include <aws/bedrock-agentcore-control/model/UpdatedDescriptors.h>
#include <aws/bedrock-agentcore-control/model/UpdatedSynchronizationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/UpdatedSynchronizationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateRegistryRecordRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateRegistryRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRegistryRecord"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the registry containing the record. You can specify either
   * the Amazon Resource Name (ARN) or the ID of the registry.</p>
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
   * <p>The identifier of the registry record to update. You can specify either the
   * Amazon Resource Name (ARN) or the ID of the record.</p>
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
   * <p>The updated name for the registry record.</p>
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
   * <p>The updated description for the registry record. To clear the description,
   * include the <code>UpdatedDescription</code> wrapper with
   * <code>optionalValue</code> not specified.</p>
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
   * <p>The updated descriptor type for the registry record. Changing the descriptor
   * type may require updating the <code>descriptors</code> field to match the new
   * type's schema requirements.</p>
   */
  inline DescriptorType GetDescriptorType() const { return m_descriptorType; }
  inline bool DescriptorTypeHasBeenSet() const { return m_descriptorTypeHasBeenSet; }
  inline void SetDescriptorType(DescriptorType value) {
    m_descriptorTypeHasBeenSet = true;
    m_descriptorType = value;
  }
  inline UpdateRegistryRecordRequest& WithDescriptorType(DescriptorType value) {
    SetDescriptorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated descriptor-type-specific configuration containing the resource
   * schema and metadata. Uses PATCH semantics where individual descriptor fields can
   * be updated independently.</p>
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
   * <p>The version of the registry record for optimistic locking. If provided, it
   * must match the current version of the record. The service automatically
   * increments the version after a successful update.</p>
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
   * <p>The updated synchronization type for the registry record.</p>
   */
  inline const UpdatedSynchronizationType& GetSynchronizationType() const { return m_synchronizationType; }
  inline bool SynchronizationTypeHasBeenSet() const { return m_synchronizationTypeHasBeenSet; }
  template <typename SynchronizationTypeT = UpdatedSynchronizationType>
  void SetSynchronizationType(SynchronizationTypeT&& value) {
    m_synchronizationTypeHasBeenSet = true;
    m_synchronizationType = std::forward<SynchronizationTypeT>(value);
  }
  template <typename SynchronizationTypeT = UpdatedSynchronizationType>
  UpdateRegistryRecordRequest& WithSynchronizationType(SynchronizationTypeT&& value) {
    SetSynchronizationType(std::forward<SynchronizationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated synchronization configuration for the registry record.</p>
   */
  inline const UpdatedSynchronizationConfiguration& GetSynchronizationConfiguration() const { return m_synchronizationConfiguration; }
  inline bool SynchronizationConfigurationHasBeenSet() const { return m_synchronizationConfigurationHasBeenSet; }
  template <typename SynchronizationConfigurationT = UpdatedSynchronizationConfiguration>
  void SetSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    m_synchronizationConfigurationHasBeenSet = true;
    m_synchronizationConfiguration = std::forward<SynchronizationConfigurationT>(value);
  }
  template <typename SynchronizationConfigurationT = UpdatedSynchronizationConfiguration>
  UpdateRegistryRecordRequest& WithSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    SetSynchronizationConfiguration(std::forward<SynchronizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to trigger synchronization using the stored or provided
   * configuration. When set to <code>true</code>, the service will synchronize the
   * record metadata from the configured external source.</p>
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
 private:
  Aws::String m_registryId;

  Aws::String m_recordId;

  Aws::String m_name;

  UpdatedDescription m_description;

  DescriptorType m_descriptorType{DescriptorType::NOT_SET};

  UpdatedDescriptors m_descriptors;

  Aws::String m_recordVersion;

  UpdatedSynchronizationType m_synchronizationType;

  UpdatedSynchronizationConfiguration m_synchronizationConfiguration;

  bool m_triggerSynchronization{false};
  bool m_registryIdHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_descriptorTypeHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_synchronizationTypeHasBeenSet = false;
  bool m_synchronizationConfigurationHasBeenSet = false;
  bool m_triggerSynchronizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
