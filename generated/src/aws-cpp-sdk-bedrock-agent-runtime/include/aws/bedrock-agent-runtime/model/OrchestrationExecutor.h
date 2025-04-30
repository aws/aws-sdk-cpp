/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The structure of the executor invoking the actions in custom
   * orchestration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OrchestrationExecutor">AWS
   * API Reference</a></p>
   */
  class OrchestrationExecutor
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationExecutor() = default;
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action. </p>
     */
    inline const Aws::String& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = Aws::String>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = Aws::String>
    OrchestrationExecutor& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
