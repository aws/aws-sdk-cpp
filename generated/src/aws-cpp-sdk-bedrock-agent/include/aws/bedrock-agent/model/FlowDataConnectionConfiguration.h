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
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration();
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowDataConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output in the source node that the connection begins
     * from.</p>
     */
    inline const Aws::String& GetSourceOutput() const{ return m_sourceOutput; }
    inline bool SourceOutputHasBeenSet() const { return m_sourceOutputHasBeenSet; }
    inline void SetSourceOutput(const Aws::String& value) { m_sourceOutputHasBeenSet = true; m_sourceOutput = value; }
    inline void SetSourceOutput(Aws::String&& value) { m_sourceOutputHasBeenSet = true; m_sourceOutput = std::move(value); }
    inline void SetSourceOutput(const char* value) { m_sourceOutputHasBeenSet = true; m_sourceOutput.assign(value); }
    inline FlowDataConnectionConfiguration& WithSourceOutput(const Aws::String& value) { SetSourceOutput(value); return *this;}
    inline FlowDataConnectionConfiguration& WithSourceOutput(Aws::String&& value) { SetSourceOutput(std::move(value)); return *this;}
    inline FlowDataConnectionConfiguration& WithSourceOutput(const char* value) { SetSourceOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input in the target node that the connection ends at.</p>
     */
    inline const Aws::String& GetTargetInput() const{ return m_targetInput; }
    inline bool TargetInputHasBeenSet() const { return m_targetInputHasBeenSet; }
    inline void SetTargetInput(const Aws::String& value) { m_targetInputHasBeenSet = true; m_targetInput = value; }
    inline void SetTargetInput(Aws::String&& value) { m_targetInputHasBeenSet = true; m_targetInput = std::move(value); }
    inline void SetTargetInput(const char* value) { m_targetInputHasBeenSet = true; m_targetInput.assign(value); }
    inline FlowDataConnectionConfiguration& WithTargetInput(const Aws::String& value) { SetTargetInput(value); return *this;}
    inline FlowDataConnectionConfiguration& WithTargetInput(Aws::String&& value) { SetTargetInput(std::move(value)); return *this;}
    inline FlowDataConnectionConfiguration& WithTargetInput(const char* value) { SetTargetInput(value); return *this;}
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
