/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/ExecutionBlockType.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class ExecutionBlockConfiguration;

  /**
   * <p>Represents a step in a Region switch plan workflow. Each step performs a
   * specific action during the Region switch process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Step">AWS
   * API Reference</a></p>
   */
  class Step
  {
  public:
    AWS_ARCREGIONSWITCH_API Step() = default;
    AWS_ARCREGIONSWITCH_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a step in a workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Step& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a step in a workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Step& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an execution block in a workflow.</p>
     */
    inline const ExecutionBlockConfiguration& GetExecutionBlockConfiguration() const{
      return *m_executionBlockConfiguration;
    }
    inline bool ExecutionBlockConfigurationHasBeenSet() const { return m_executionBlockConfigurationHasBeenSet; }
    template<typename ExecutionBlockConfigurationT = ExecutionBlockConfiguration>
    void SetExecutionBlockConfiguration(ExecutionBlockConfigurationT&& value) {
      m_executionBlockConfigurationHasBeenSet = true; 
      m_executionBlockConfiguration = Aws::MakeShared<ExecutionBlockConfiguration>("Step", std::forward<ExecutionBlockConfigurationT>(value));
    }
    template<typename ExecutionBlockConfigurationT = ExecutionBlockConfiguration>
    Step& WithExecutionBlockConfiguration(ExecutionBlockConfigurationT&& value) { SetExecutionBlockConfiguration(std::forward<ExecutionBlockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of an execution block in a workflow.</p>
     */
    inline ExecutionBlockType GetExecutionBlockType() const { return m_executionBlockType; }
    inline bool ExecutionBlockTypeHasBeenSet() const { return m_executionBlockTypeHasBeenSet; }
    inline void SetExecutionBlockType(ExecutionBlockType value) { m_executionBlockTypeHasBeenSet = true; m_executionBlockType = value; }
    inline Step& WithExecutionBlockType(ExecutionBlockType value) { SetExecutionBlockType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    std::shared_ptr<ExecutionBlockConfiguration> m_executionBlockConfiguration;
    bool m_executionBlockConfigurationHasBeenSet = false;

    ExecutionBlockType m_executionBlockType{ExecutionBlockType::NOT_SET};
    bool m_executionBlockTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
