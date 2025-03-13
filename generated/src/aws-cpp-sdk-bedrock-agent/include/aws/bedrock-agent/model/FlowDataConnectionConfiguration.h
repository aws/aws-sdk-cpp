/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration of a connection originating from a node that isn't a
   * Condition node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowDataConnectionConfiguration">AWS
   * API Reference</a></p>
   */
  class FlowDataConnectionConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration() = default;
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output in the source node that the connection begins
     * from.</p>
     */
    inline const Aws::String& GetSourceOutput() const { return m_sourceOutput; }
    inline bool SourceOutputHasBeenSet() const { return m_sourceOutputHasBeenSet; }
    template<typename SourceOutputT = Aws::String>
    void SetSourceOutput(SourceOutputT&& value) { m_sourceOutputHasBeenSet = true; m_sourceOutput = std::forward<SourceOutputT>(value); }
    template<typename SourceOutputT = Aws::String>
    FlowDataConnectionConfiguration& WithSourceOutput(SourceOutputT&& value) { SetSourceOutput(std::forward<SourceOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input in the target node that the connection ends at.</p>
     */
    inline const Aws::String& GetTargetInput() const { return m_targetInput; }
    inline bool TargetInputHasBeenSet() const { return m_targetInputHasBeenSet; }
    template<typename TargetInputT = Aws::String>
    void SetTargetInput(TargetInputT&& value) { m_targetInputHasBeenSet = true; m_targetInput = std::forward<TargetInputT>(value); }
    template<typename TargetInputT = Aws::String>
    FlowDataConnectionConfiguration& WithTargetInput(TargetInputT&& value) { SetTargetInput(std::forward<TargetInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceOutput;
    bool m_sourceOutputHasBeenSet = false;

    Aws::String m_targetInput;
    bool m_targetInputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
