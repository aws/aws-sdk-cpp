/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/MemoryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/MemoryStrategy.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Contains information about a memory resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Memory">AWS
   * API Reference</a></p>
   */
  class Memory
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Memory() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Memory(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Memory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the memory.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Memory& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the memory.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Memory& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the memory.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Memory& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the memory.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Memory& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key used to encrypt the memory.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    Memory& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides permissions for the memory.</p>
     */
    inline const Aws::String& GetMemoryExecutionRoleArn() const { return m_memoryExecutionRoleArn; }
    inline bool MemoryExecutionRoleArnHasBeenSet() const { return m_memoryExecutionRoleArnHasBeenSet; }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    void SetMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { m_memoryExecutionRoleArnHasBeenSet = true; m_memoryExecutionRoleArn = std::forward<MemoryExecutionRoleArnT>(value); }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    Memory& WithMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { SetMemoryExecutionRoleArn(std::forward<MemoryExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after which memory events will expire.</p>
     */
    inline int GetEventExpiryDuration() const { return m_eventExpiryDuration; }
    inline bool EventExpiryDurationHasBeenSet() const { return m_eventExpiryDurationHasBeenSet; }
    inline void SetEventExpiryDuration(int value) { m_eventExpiryDurationHasBeenSet = true; m_eventExpiryDuration = value; }
    inline Memory& WithEventExpiryDuration(int value) { SetEventExpiryDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the memory.</p>
     */
    inline MemoryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemoryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Memory& WithStatus(MemoryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure if the memory is in a failed state.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Memory& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the memory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Memory& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the memory was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Memory& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of memory strategies associated with this memory.</p>
     */
    inline const Aws::Vector<MemoryStrategy>& GetStrategies() const { return m_strategies; }
    inline bool StrategiesHasBeenSet() const { return m_strategiesHasBeenSet; }
    template<typename StrategiesT = Aws::Vector<MemoryStrategy>>
    void SetStrategies(StrategiesT&& value) { m_strategiesHasBeenSet = true; m_strategies = std::forward<StrategiesT>(value); }
    template<typename StrategiesT = Aws::Vector<MemoryStrategy>>
    Memory& WithStrategies(StrategiesT&& value) { SetStrategies(std::forward<StrategiesT>(value)); return *this;}
    template<typename StrategiesT = MemoryStrategy>
    Memory& AddStrategies(StrategiesT&& value) { m_strategiesHasBeenSet = true; m_strategies.emplace_back(std::forward<StrategiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_memoryExecutionRoleArn;
    bool m_memoryExecutionRoleArnHasBeenSet = false;

    int m_eventExpiryDuration{0};
    bool m_eventExpiryDurationHasBeenSet = false;

    MemoryStatus m_status{MemoryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<MemoryStrategy> m_strategies;
    bool m_strategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
