/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/TransformationLambdaConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TransformationFunction">AWS
   * API Reference</a></p>
   */
  class TransformationFunction
  {
  public:
    AWS_BEDROCKAGENT_API TransformationFunction() = default;
    AWS_BEDROCKAGENT_API TransformationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TransformationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lambda function.</p>
     */
    inline const TransformationLambdaConfiguration& GetTransformationLambdaConfiguration() const { return m_transformationLambdaConfiguration; }
    inline bool TransformationLambdaConfigurationHasBeenSet() const { return m_transformationLambdaConfigurationHasBeenSet; }
    template<typename TransformationLambdaConfigurationT = TransformationLambdaConfiguration>
    void SetTransformationLambdaConfiguration(TransformationLambdaConfigurationT&& value) { m_transformationLambdaConfigurationHasBeenSet = true; m_transformationLambdaConfiguration = std::forward<TransformationLambdaConfigurationT>(value); }
    template<typename TransformationLambdaConfigurationT = TransformationLambdaConfiguration>
    TransformationFunction& WithTransformationLambdaConfiguration(TransformationLambdaConfigurationT&& value) { SetTransformationLambdaConfiguration(std::forward<TransformationLambdaConfigurationT>(value)); return *this;}
    ///@}
  private:

    TransformationLambdaConfiguration m_transformationLambdaConfiguration;
    bool m_transformationLambdaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
