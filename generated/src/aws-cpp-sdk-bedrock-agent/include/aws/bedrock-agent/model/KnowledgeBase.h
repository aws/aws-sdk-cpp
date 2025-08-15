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
   * <p>Contains information about a knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBase">AWS
   * API Reference</a></p>
   */
  class KnowledgeBase
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBase() = default;
    AWS_BEDROCKAGENT_API KnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBase& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KnowledgeBase& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    KnowledgeBase& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    KnowledgeBase& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    KnowledgeBase& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the embeddings configuration of the knowledge
     * base.</p>
     */
    inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
    void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value); }
    template<typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
    KnowledgeBase& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) { SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the storage configuration of the knowledge base.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
    template<typename StorageConfigurationT = StorageConfiguration>
    void SetStorageConfiguration(StorageConfigurationT&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::forward<StorageConfigurationT>(value); }
    template<typename StorageConfigurationT = StorageConfiguration>
    KnowledgeBase& WithStorageConfiguration(StorageConfigurationT&& value) { SetStorageConfiguration(std::forward<StorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the knowledge base. The following statuses are possible:</p>
     * <ul> <li> <p>CREATING – The knowledge base is being created.</p> </li> <li>
     * <p>ACTIVE – The knowledge base is ready to be queried.</p> </li> <li>
     * <p>DELETING – The knowledge base is being deleted.</p> </li> <li> <p>UPDATING –
     * The knowledge base is being updated.</p> </li> <li> <p>FAILED – The knowledge
     * base API operation failed.</p> </li> </ul>
     */
    inline KnowledgeBaseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(KnowledgeBaseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KnowledgeBase& WithStatus(KnowledgeBaseStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the knowledge base was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    KnowledgeBase& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the knowledge base was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    KnowledgeBase& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons that the API operation on the knowledge base failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    KnowledgeBase& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    KnowledgeBase& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}
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

    KnowledgeBaseStatus m_status{KnowledgeBaseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
