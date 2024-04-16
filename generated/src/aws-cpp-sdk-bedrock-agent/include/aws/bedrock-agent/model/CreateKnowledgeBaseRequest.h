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
    AWS_BEDROCKAGENT_API CreateKnowledgeBaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKnowledgeBase"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateKnowledgeBaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateKnowledgeBaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateKnowledgeBaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    /**
     * <p>Contains details about the embeddings model used for the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>A name for the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    /**
     * <p>Contains details about the configuration of the vector database used for the
     * knowledge base.</p>
     */
    inline CreateKnowledgeBaseRequest& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to your
     * knowledge base in this object.</p>
     */
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
