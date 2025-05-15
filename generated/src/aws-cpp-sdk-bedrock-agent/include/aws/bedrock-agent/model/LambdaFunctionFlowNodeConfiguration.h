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
   * <p>Contains configurations for a Lambda function node in the flow. You specify
   * the Lambda function to invoke and the inputs into the function. The output is
   * the response that is defined in the Lambda function. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in a flow</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LambdaFunctionFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LambdaFunctionFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API LambdaFunctionFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LambdaFunctionFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to invoke.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    LambdaFunctionFlowNodeConfiguration& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
