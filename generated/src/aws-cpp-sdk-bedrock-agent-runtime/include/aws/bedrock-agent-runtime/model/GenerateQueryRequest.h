/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/QueryGenerationInput.h>
#include <aws/bedrock-agent-runtime/model/TransformationConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class GenerateQueryRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateQuery"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies information about a natural language query to transform into
     * SQL.</p>
     */
    inline const QueryGenerationInput& GetQueryGenerationInput() const{ return m_queryGenerationInput; }
    inline bool QueryGenerationInputHasBeenSet() const { return m_queryGenerationInputHasBeenSet; }
    inline void SetQueryGenerationInput(const QueryGenerationInput& value) { m_queryGenerationInputHasBeenSet = true; m_queryGenerationInput = value; }
    inline void SetQueryGenerationInput(QueryGenerationInput&& value) { m_queryGenerationInputHasBeenSet = true; m_queryGenerationInput = std::move(value); }
    inline GenerateQueryRequest& WithQueryGenerationInput(const QueryGenerationInput& value) { SetQueryGenerationInput(value); return *this;}
    inline GenerateQueryRequest& WithQueryGenerationInput(QueryGenerationInput&& value) { SetQueryGenerationInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for transforming the natural language query into
     * SQL.</p>
     */
    inline const TransformationConfiguration& GetTransformationConfiguration() const{ return m_transformationConfiguration; }
    inline bool TransformationConfigurationHasBeenSet() const { return m_transformationConfigurationHasBeenSet; }
    inline void SetTransformationConfiguration(const TransformationConfiguration& value) { m_transformationConfigurationHasBeenSet = true; m_transformationConfiguration = value; }
    inline void SetTransformationConfiguration(TransformationConfiguration&& value) { m_transformationConfigurationHasBeenSet = true; m_transformationConfiguration = std::move(value); }
    inline GenerateQueryRequest& WithTransformationConfiguration(const TransformationConfiguration& value) { SetTransformationConfiguration(value); return *this;}
    inline GenerateQueryRequest& WithTransformationConfiguration(TransformationConfiguration&& value) { SetTransformationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    QueryGenerationInput m_queryGenerationInput;
    bool m_queryGenerationInputHasBeenSet = false;

    TransformationConfiguration m_transformationConfiguration;
    bool m_transformationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
