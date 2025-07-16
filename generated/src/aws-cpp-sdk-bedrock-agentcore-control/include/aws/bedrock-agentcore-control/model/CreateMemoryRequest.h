/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/MemoryStrategyInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class CreateMemoryRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateMemoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMemory"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request but does not return an error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMemoryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the memory. The name must be unique within your account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMemoryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateMemoryRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the memory
     * data.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    CreateMemoryRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the memory to access Amazon Web Services services.</p>
     */
    inline const Aws::String& GetMemoryExecutionRoleArn() const { return m_memoryExecutionRoleArn; }
    inline bool MemoryExecutionRoleArnHasBeenSet() const { return m_memoryExecutionRoleArnHasBeenSet; }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    void SetMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { m_memoryExecutionRoleArnHasBeenSet = true; m_memoryExecutionRoleArn = std::forward<MemoryExecutionRoleArnT>(value); }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    CreateMemoryRequest& WithMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { SetMemoryExecutionRoleArn(std::forward<MemoryExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration after which memory events expire. Specified as an ISO 8601
     * duration.</p>
     */
    inline int GetEventExpiryDuration() const { return m_eventExpiryDuration; }
    inline bool EventExpiryDurationHasBeenSet() const { return m_eventExpiryDurationHasBeenSet; }
    inline void SetEventExpiryDuration(int value) { m_eventExpiryDurationHasBeenSet = true; m_eventExpiryDuration = value; }
    inline CreateMemoryRequest& WithEventExpiryDuration(int value) { SetEventExpiryDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory strategies to use for this memory. Strategies define how
     * information is extracted, processed, and consolidated.</p>
     */
    inline const Aws::Vector<MemoryStrategyInput>& GetMemoryStrategies() const { return m_memoryStrategies; }
    inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
    template<typename MemoryStrategiesT = Aws::Vector<MemoryStrategyInput>>
    void SetMemoryStrategies(MemoryStrategiesT&& value) { m_memoryStrategiesHasBeenSet = true; m_memoryStrategies = std::forward<MemoryStrategiesT>(value); }
    template<typename MemoryStrategiesT = Aws::Vector<MemoryStrategyInput>>
    CreateMemoryRequest& WithMemoryStrategies(MemoryStrategiesT&& value) { SetMemoryStrategies(std::forward<MemoryStrategiesT>(value)); return *this;}
    template<typename MemoryStrategiesT = MemoryStrategyInput>
    CreateMemoryRequest& AddMemoryStrategies(MemoryStrategiesT&& value) { m_memoryStrategiesHasBeenSet = true; m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

    Aws::Vector<MemoryStrategyInput> m_memoryStrategies;
    bool m_memoryStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
