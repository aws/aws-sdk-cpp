/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/KnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseStatus.h>
#include <aws/bedrock-agent/model/StorageConfiguration.h>
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
   * <p>Contains information about a knowledge base.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline KnowledgeBase& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the knowledge base was created.</p>
     */
    inline KnowledgeBase& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBase& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBase& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBase& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline KnowledgeBase& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline KnowledgeBase& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline KnowledgeBase& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline KnowledgeBase& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline KnowledgeBase& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}


    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }

    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }

    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }

    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseConfiguration(const KnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}

    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseConfiguration(KnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBase& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBase& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBase& WithName(const char* value) { SetName(value); return *this;}


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
    inline KnowledgeBase& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline KnowledgeBase& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to invoke API
     * operations on the knowledge base.</p>
     */
    inline KnowledgeBase& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline const KnowledgeBaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline void SetStatus(const KnowledgeBaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline void SetStatus(KnowledgeBaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline KnowledgeBase& WithStatus(const KnowledgeBaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline KnowledgeBase& WithStatus(KnowledgeBaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }

    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }

    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline KnowledgeBase& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline KnowledgeBase& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline KnowledgeBase& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline KnowledgeBase& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    KnowledgeBaseStatus m_status;
    bool m_statusHasBeenSet = false;

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
