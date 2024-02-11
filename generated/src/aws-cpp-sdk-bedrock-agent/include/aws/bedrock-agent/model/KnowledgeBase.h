/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/StorageConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the information of a knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBase">AWS
   * API Reference</a></p>
   */
  class KnowledgeBase
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBase();
    AWS_BEDROCKAGENT_API KnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline KnowledgeBase& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline KnowledgeBase& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline KnowledgeBase& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline KnowledgeBase& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline KnowledgeBase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline KnowledgeBase& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }

    
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }

    
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }

    
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }

    
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }

    
    inline KnowledgeBase& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}

    
    inline KnowledgeBase& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}

    
    inline KnowledgeBase& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline KnowledgeBase& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline KnowledgeBase& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline KnowledgeBase& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    
    inline KnowledgeBase& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    
    inline KnowledgeBase& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    
    inline KnowledgeBase& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    
    inline KnowledgeBase& WithKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    
    inline KnowledgeBase& WithKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    
    inline KnowledgeBase& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    
    inline KnowledgeBase& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}


    
    inline const KnowledgeBaseStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const KnowledgeBaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(KnowledgeBaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline KnowledgeBase& WithStatus(const KnowledgeBaseStatus& value) { SetStatus(value); return *this;}

    
    inline KnowledgeBase& WithStatus(KnowledgeBaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline KnowledgeBase& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline KnowledgeBase& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline KnowledgeBase& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline KnowledgeBase& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    
    inline KnowledgeBase& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    
    inline KnowledgeBase& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    
    inline KnowledgeBase& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    
    inline KnowledgeBase& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    
    inline KnowledgeBase& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    KnowledgeBaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
