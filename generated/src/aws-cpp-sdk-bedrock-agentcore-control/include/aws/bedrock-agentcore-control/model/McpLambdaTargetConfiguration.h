/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/ToolSchema.h>
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
   * <p>The Lambda configuration for a Model Context Protocol target. This structure
   * defines how the gateway uses a Lambda function to communicate with the
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/McpLambdaTargetConfiguration">AWS
   * API Reference</a></p>
   */
  class McpLambdaTargetConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API McpLambdaTargetConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API McpLambdaTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API McpLambdaTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function. This function is
     * invoked by the gateway to communicate with the target.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    McpLambdaTargetConfiguration& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tool schema for the Lambda function. This schema defines the structure of
     * the tools that the Lambda function provides.</p>
     */
    inline const ToolSchema& GetToolSchema() const { return m_toolSchema; }
    inline bool ToolSchemaHasBeenSet() const { return m_toolSchemaHasBeenSet; }
    template<typename ToolSchemaT = ToolSchema>
    void SetToolSchema(ToolSchemaT&& value) { m_toolSchemaHasBeenSet = true; m_toolSchema = std::forward<ToolSchemaT>(value); }
    template<typename ToolSchemaT = ToolSchema>
    McpLambdaTargetConfiguration& WithToolSchema(ToolSchemaT&& value) { SetToolSchema(std::forward<ToolSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;

    ToolSchema m_toolSchema;
    bool m_toolSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
