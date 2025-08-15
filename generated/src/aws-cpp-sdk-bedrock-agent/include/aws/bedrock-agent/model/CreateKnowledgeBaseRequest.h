/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/StorageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class CreateKnowledgeBaseRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API CreateKnowledgeBaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKnowledgeBase"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateKnowledgeBaseRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the knowledge base.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateKnowledgeBaseRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateKnowledgeBaseRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateKnowledgeBaseRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
    void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value); }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
    CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
    template<typename StorageConfigurationT = StorageConfiguration>
    void SetStorageConfiguration(StorageConfigurationT&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::forward<StorageConfigurationT>(value); }
    template<typename StorageConfigurationT = StorageConfiguration>
    CreateKnowledgeBaseRequest& WithStorageConfiguration(StorageConfigurationT&& value) { SetStorageConfiguration(std::forward<StorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateKnowledgeBaseRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateKnowledgeBaseRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
