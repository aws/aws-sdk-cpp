/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EncryptionConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class CreateSpaceRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A name that identifies the space. Must be 3-64 characters: lowercase letters,
   * numbers, and hyphens. It must begin and end with a letter or number and cannot
   * contain consecutive hyphens.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSpaceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain to create the space in.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateSpaceRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used for data access. The role must be in the
   * caller's account.</p>
   */
  inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
  inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
  template <typename DataAccessRoleArnT = Aws::String>
  void SetDataAccessRoleArn(DataAccessRoleArnT&& value) {
    m_dataAccessRoleArnHasBeenSet = true;
    m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value);
  }
  template <typename DataAccessRoleArnT = Aws::String>
  CreateSpaceRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) {
    SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used by AgentCore online evaluation. Must be in the
   * caller's account. Omit if the space does not use AgentCore online
   * evaluation.</p>
   */
  inline const Aws::String& GetAgentCoreEvaluationRoleArn() const { return m_agentCoreEvaluationRoleArn; }
  inline bool AgentCoreEvaluationRoleArnHasBeenSet() const { return m_agentCoreEvaluationRoleArnHasBeenSet; }
  template <typename AgentCoreEvaluationRoleArnT = Aws::String>
  void SetAgentCoreEvaluationRoleArn(AgentCoreEvaluationRoleArnT&& value) {
    m_agentCoreEvaluationRoleArnHasBeenSet = true;
    m_agentCoreEvaluationRoleArn = std::forward<AgentCoreEvaluationRoleArnT>(value);
  }
  template <typename AgentCoreEvaluationRoleArnT = Aws::String>
  CreateSpaceRequest& WithAgentCoreEvaluationRoleArn(AgentCoreEvaluationRoleArnT&& value) {
    SetAgentCoreEvaluationRoleArn(std::forward<AgentCoreEvaluationRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to encrypt the space's data at rest. Omit for service owned encryption,
   * which is equivalent to passing <code>encryptionStrategy</code> AWS_OWNED.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateSpaceRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the space.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateSpaceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateSpaceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Repeated requests with the same token
   * return the original result instead of creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSpaceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_domainId;

  Aws::String m_dataAccessRoleArn;

  Aws::String m_agentCoreEvaluationRoleArn;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_dataAccessRoleArnHasBeenSet = false;
  bool m_agentCoreEvaluationRoleArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
