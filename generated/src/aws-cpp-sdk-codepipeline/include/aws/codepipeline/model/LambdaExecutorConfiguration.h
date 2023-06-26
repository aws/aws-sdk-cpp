/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Details about the configuration for the <code>Lambda</code> action engine, or
   * executor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/LambdaExecutorConfiguration">AWS
   * API Reference</a></p>
   */
  class LambdaExecutorConfiguration
  {
  public:
    AWS_CODEPIPELINE_API LambdaExecutorConfiguration();
    AWS_CODEPIPELINE_API LambdaExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API LambdaExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline LambdaExecutorConfiguration& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline LambdaExecutorConfiguration& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function used by the action engine.</p>
     */
    inline LambdaExecutorConfiguration& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

  private:

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
