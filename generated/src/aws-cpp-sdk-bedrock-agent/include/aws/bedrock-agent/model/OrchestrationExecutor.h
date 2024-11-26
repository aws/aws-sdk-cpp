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
   * <p> Contains details about the Lambda function containing the orchestration
   * logic carried out upon invoking the custom orchestration. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/OrchestrationExecutor">AWS
   * API Reference</a></p>
   */
  class OrchestrationExecutor
  {
  public:
    AWS_BEDROCKAGENT_API OrchestrationExecutor();
    AWS_BEDROCKAGENT_API OrchestrationExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OrchestrationExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lambda function containing the
     * business logic that is carried out upon invoking the action. </p>
     */
    inline const Aws::String& GetLambda() const{ return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(const Aws::String& value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline void SetLambda(Aws::String&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }
    inline void SetLambda(const char* value) { m_lambdaHasBeenSet = true; m_lambda.assign(value); }
    inline OrchestrationExecutor& WithLambda(const Aws::String& value) { SetLambda(value); return *this;}
    inline OrchestrationExecutor& WithLambda(Aws::String&& value) { SetLambda(std::move(value)); return *this;}
    inline OrchestrationExecutor& WithLambda(const char* value) { SetLambda(value); return *this;}
    ///@}
  private:

    Aws::String m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
