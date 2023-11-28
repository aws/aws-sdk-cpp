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


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateKnowledgeBaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateKnowledgeBaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    
    inline CreateKnowledgeBaseRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    
    inline CreateKnowledgeBaseRequest& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateKnowledgeBaseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateKnowledgeBaseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
