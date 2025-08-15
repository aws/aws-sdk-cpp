/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/CustomControlMethod.h>
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
   * <p>Contains details about the Lambda function containing the business logic that
   * is carried out upon invoking the action or the custom control method for
   * handling the information elicited from the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ActionGroupExecutor">AWS
   * API Reference</a></p>
   */
  class ActionGroupExecutor
  {
  public:
    AWS_BEDROCKAGENT_API ActionGroupExecutor() = default;
    AWS_BEDROCKAGENT_API ActionGroupExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ActionGroupExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline const Aws::String& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = Aws::String>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = Aws::String>
    ActionGroupExecutor& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline CustomControlMethod GetCustomControl() const { return m_customControl; }
    inline bool CustomControlHasBeenSet() const { return m_customControlHasBeenSet; }
    inline void SetCustomControl(CustomControlMethod value) { m_customControlHasBeenSet = true; m_customControl = value; }
    inline ActionGroupExecutor& WithCustomControl(CustomControlMethod value) { SetCustomControl(value); return *this;}
    ///@}
  private:

    Aws::String m_lambda;
    bool m_lambdaHasBeenSet = false;

    CustomControlMethod m_customControl{CustomControlMethod::NOT_SET};
    bool m_customControlHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
