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
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration() = default;
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TransformationLambdaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The function's ARN identifier.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    TransformationLambdaConfiguration& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
