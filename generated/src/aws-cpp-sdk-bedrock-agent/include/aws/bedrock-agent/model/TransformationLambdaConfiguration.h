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
   * <p>A Lambda function that processes documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TransformationLambdaConfiguration">AWS
   * API Reference</a></p>
   */
  class TransformationLambdaConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration();
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The function's ARN identifier.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }
    inline TransformationLambdaConfiguration& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}
    inline TransformationLambdaConfiguration& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}
    inline TransformationLambdaConfiguration& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
