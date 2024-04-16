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
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateKnowledgeBaseRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateKnowledgeBaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKnowledgeBase"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies a new description for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration for the embeddings model used for the knowledge
     * base. You must use the same configuration as when the knowledge base was
     * created.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to update.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies a new name for the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies a different Amazon Resource Name (ARN) of the IAM role with
     * permissions to invoke API operations on the knowledge base.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration for the vector store used for the knowledge base.
     * You must use the same configuration as when the knowledge base was created.</p>
     */
    inline UpdateKnowledgeBaseRequest& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
