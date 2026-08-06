/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ComputeConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PermissionsConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateCapacityProviderRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityProvider"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the capacity provider. The name must be unique within your
   * account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateCapacityProviderRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the capacity provider. If you don't specify a
   * description, the service creates the capacity provider without one.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCapacityProviderRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions configuration for the capacity provider. This specifies the
   * IAM role that AgentCore uses to manage the Amazon EC2 instances on your
   * behalf.</p>
   */
  inline const PermissionsConfiguration& GetPermissionsConfiguration() const { return m_permissionsConfiguration; }
  inline bool PermissionsConfigurationHasBeenSet() const { return m_permissionsConfigurationHasBeenSet; }
  template <typename PermissionsConfigurationT = PermissionsConfiguration>
  void SetPermissionsConfiguration(PermissionsConfigurationT&& value) {
    m_permissionsConfigurationHasBeenSet = true;
    m_permissionsConfiguration = std::forward<PermissionsConfigurationT>(value);
  }
  template <typename PermissionsConfigurationT = PermissionsConfiguration>
  CreateCapacityProviderRequest& WithPermissionsConfiguration(PermissionsConfigurationT&& value) {
    SetPermissionsConfiguration(std::forward<PermissionsConfigurationT>(value));
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
  CreateCapacityProviderRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to associate with the capacity provider. If you
   * don't specify tags, the capacity provider is created with no tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCapacityProviderRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCapacityProviderRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute configuration for the capacity provider. This defines the Amazon
   * EC2 compute resources used to launch instances: the operating system, allowed
   * instance types, networking, and storage.</p>
   */
  inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
  inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  CreateCapacityProviderRequest& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  PermissionsConfiguration m_permissionsConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;

  ComputeConfiguration m_computeConfiguration;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_permissionsConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
