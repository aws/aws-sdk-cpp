/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CustomControlMethod.h>
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
   * <p>Contains details about the Lambda function containing the business logic that
   * is carried out upon invoking the action or the custom control method for
   * handling the information elicited from the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ActionGroupExecutor">AWS
   * API Reference</a></p>
   */
  class ActionGroupExecutor
  {
  public:
    AWS_BEDROCKAGENT_API ActionGroupExecutor();
    AWS_BEDROCKAGENT_API ActionGroupExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ActionGroupExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline const CustomControlMethod& GetCustomControl() const{ return m_customControl; }

    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline bool CustomControlHasBeenSet() const { return m_customControlHasBeenSet; }

    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline void SetCustomControl(const CustomControlMethod& value) { m_customControlHasBeenSet = true; m_customControl = value; }

    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline void SetCustomControl(CustomControlMethod&& value) { m_customControlHasBeenSet = true; m_customControl = std::move(value); }

    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline ActionGroupExecutor& WithCustomControl(const CustomControlMethod& value) { SetCustomControl(value); return *this;}

    /**
     * <p>To return the action group invocation results directly in the
     * <code>InvokeAgent</code> response, specify <code>RETURN_CONTROL</code>.</p>
     */
    inline ActionGroupExecutor& WithCustomControl(CustomControlMethod&& value) { SetCustomControl(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline const Aws::String& GetLambda() const{ return m_lambda; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline void SetLambda(const Aws::String& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline void SetLambda(Aws::String&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline void SetLambda(const char* value) { m_lambdaHasBeenSet = true; m_lambda.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline ActionGroupExecutor& WithLambda(const Aws::String& value) { SetLambda(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline ActionGroupExecutor& WithLambda(Aws::String&& value) { SetLambda(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline ActionGroupExecutor& WithLambda(const char* value) { SetLambda(value); return *this;}

  private:

    CustomControlMethod m_customControl;
    bool m_customControlHasBeenSet = false;

    Aws::String m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
