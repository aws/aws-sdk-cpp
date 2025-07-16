/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/ModifyStrategyConfiguration.h>
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
   * <p>Input for modifying a memory strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyMemoryStrategyInput">AWS
   * API Reference</a></p>
   */
  class ModifyMemoryStrategyInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategyInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the memory strategy to modify.</p>
     */
    inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
    inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
    template<typename MemoryStrategyIdT = Aws::String>
    void SetMemoryStrategyId(MemoryStrategyIdT&& value) { m_memoryStrategyIdHasBeenSet = true; m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value); }
    template<typename MemoryStrategyIdT = Aws::String>
    ModifyMemoryStrategyInput& WithMemoryStrategyId(MemoryStrategyIdT&& value) { SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the memory strategy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyMemoryStrategyInput& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated namespaces for the memory strategy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
    inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    void SetNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::forward<NamespacesT>(value); }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    ModifyMemoryStrategyInput& WithNamespaces(NamespacesT&& value) { SetNamespaces(std::forward<NamespacesT>(value)); return *this;}
    template<typename NamespacesT = Aws::String>
    ModifyMemoryStrategyInput& AddNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces.emplace_back(std::forward<NamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated configuration for the memory strategy.</p>
     */
    inline const ModifyStrategyConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ModifyStrategyConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ModifyStrategyConfiguration>
    ModifyMemoryStrategyInput& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryStrategyId;
    bool m_memoryStrategyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespaces;
    bool m_namespacesHasBeenSet = false;

    ModifyStrategyConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
