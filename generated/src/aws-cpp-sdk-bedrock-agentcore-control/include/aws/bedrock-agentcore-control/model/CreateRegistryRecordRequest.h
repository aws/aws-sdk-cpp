/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DescriptorType.h>
#include <aws/bedrock-agentcore-control/model/Descriptors.h>
#include <aws/bedrock-agentcore-control/model/SynchronizationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/SynchronizationType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateRegistryRecordRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateRegistryRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRegistryRecord"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the registry where the record will be created. You can
   * specify either the Amazon Resource Name (ARN) or the ID of the registry.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  CreateRegistryRecordRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the registry record.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRegistryRecordRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the registry record.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRegistryRecordRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptor type of the registry record.</p> <ul> <li> <p>
   * <code>MCP</code> - Model Context Protocol descriptor for MCP-compatible servers
   * and tools.</p> </li> <li> <p> <code>A2A</code> - Agent-to-Agent protocol
   * descriptor.</p> </li> <li> <p> <code>CUSTOM</code> - Custom descriptor type for
   * resources such as APIs, Lambda functions, or servers not conforming to a
   * standard protocol.</p> </li> <li> <p> <code>AGENT_SKILLS</code> - Agent skills
   * descriptor for defining agent skill definitions.</p> </li> </ul>
   */
  inline DescriptorType GetDescriptorType() const { return m_descriptorType; }
  inline bool DescriptorTypeHasBeenSet() const { return m_descriptorTypeHasBeenSet; }
  inline void SetDescriptorType(DescriptorType value) {
    m_descriptorTypeHasBeenSet = true;
    m_descriptorType = value;
  }
  inline CreateRegistryRecordRequest& WithDescriptorType(DescriptorType value) {
    SetDescriptorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptor-type-specific configuration containing the resource schema and
   * metadata. The structure of this field depends on the <code>descriptorType</code>
   * you specify.</p>
   */
  inline const Descriptors& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = Descriptors>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Descriptors>
  CreateRegistryRecordRequest& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the registry record. Use this to track different versions of
   * the record's content.</p>
   */
  inline const Aws::String& GetRecordVersion() const { return m_recordVersion; }
  inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
  template <typename RecordVersionT = Aws::String>
  void SetRecordVersion(RecordVersionT&& value) {
    m_recordVersionHasBeenSet = true;
    m_recordVersion = std::forward<RecordVersionT>(value);
  }
  template <typename RecordVersionT = Aws::String>
  CreateRegistryRecordRequest& WithRecordVersion(RecordVersionT&& value) {
    SetRecordVersion(std::forward<RecordVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of synchronization to use for keeping the record metadata up to date
   * from an external source. Possible values include <code>FROM_URL</code> and
   * <code>NONE</code>.</p>
   */
  inline SynchronizationType GetSynchronizationType() const { return m_synchronizationType; }
  inline bool SynchronizationTypeHasBeenSet() const { return m_synchronizationTypeHasBeenSet; }
  inline void SetSynchronizationType(SynchronizationType value) {
    m_synchronizationTypeHasBeenSet = true;
    m_synchronizationType = value;
  }
  inline CreateRegistryRecordRequest& WithSynchronizationType(SynchronizationType value) {
    SetSynchronizationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for synchronizing registry record metadata from an external
   * source, such as a URL-based MCP server.</p>
   */
  inline const SynchronizationConfiguration& GetSynchronizationConfiguration() const { return m_synchronizationConfiguration; }
  inline bool SynchronizationConfigurationHasBeenSet() const { return m_synchronizationConfigurationHasBeenSet; }
  template <typename SynchronizationConfigurationT = SynchronizationConfiguration>
  void SetSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    m_synchronizationConfigurationHasBeenSet = true;
    m_synchronizationConfiguration = std::forward<SynchronizationConfigurationT>(value);
  }
  template <typename SynchronizationConfigurationT = SynchronizationConfiguration>
  CreateRegistryRecordRequest& WithSynchronizationConfiguration(SynchronizationConfigurationT&& value) {
    SetSynchronizationConfiguration(std::forward<SynchronizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRegistryRecordRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_name;

  Aws::String m_description;

  DescriptorType m_descriptorType{DescriptorType::NOT_SET};

  Descriptors m_descriptors;

  Aws::String m_recordVersion;

  SynchronizationType m_synchronizationType{SynchronizationType::NOT_SET};

  SynchronizationConfiguration m_synchronizationConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_registryIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_descriptorTypeHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_synchronizationTypeHasBeenSet = false;
  bool m_synchronizationConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
