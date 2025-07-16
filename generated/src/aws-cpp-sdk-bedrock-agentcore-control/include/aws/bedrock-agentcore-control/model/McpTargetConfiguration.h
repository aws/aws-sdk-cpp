/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ApiSchemaConfiguration.h>
#include <aws/bedrock-agentcore-control/model/McpLambdaTargetConfiguration.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The Model Context Protocol (MCP) configuration for a target. This structure
   * defines how the gateway uses MCP to communicate with the target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/McpTargetConfiguration">AWS
   * API Reference</a></p>
   */
  class McpTargetConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API McpTargetConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API McpTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API McpTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OpenAPI schema for the Model Context Protocol target. This schema defines
     * the API structure of the target.</p>
     */
    inline const ApiSchemaConfiguration& GetOpenApiSchema() const { return m_openApiSchema; }
    inline bool OpenApiSchemaHasBeenSet() const { return m_openApiSchemaHasBeenSet; }
    template<typename OpenApiSchemaT = ApiSchemaConfiguration>
    void SetOpenApiSchema(OpenApiSchemaT&& value) { m_openApiSchemaHasBeenSet = true; m_openApiSchema = std::forward<OpenApiSchemaT>(value); }
    template<typename OpenApiSchemaT = ApiSchemaConfiguration>
    McpTargetConfiguration& WithOpenApiSchema(OpenApiSchemaT&& value) { SetOpenApiSchema(std::forward<OpenApiSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Smithy model for the Model Context Protocol target. This model defines
     * the API structure of the target using the Smithy specification.</p>
     */
    inline const ApiSchemaConfiguration& GetSmithyModel() const { return m_smithyModel; }
    inline bool SmithyModelHasBeenSet() const { return m_smithyModelHasBeenSet; }
    template<typename SmithyModelT = ApiSchemaConfiguration>
    void SetSmithyModel(SmithyModelT&& value) { m_smithyModelHasBeenSet = true; m_smithyModel = std::forward<SmithyModelT>(value); }
    template<typename SmithyModelT = ApiSchemaConfiguration>
    McpTargetConfiguration& WithSmithyModel(SmithyModelT&& value) { SetSmithyModel(std::forward<SmithyModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lambda configuration for the Model Context Protocol target. This
     * configuration defines how the gateway uses a Lambda function to communicate with
     * the target.</p>
     */
    inline const McpLambdaTargetConfiguration& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = McpLambdaTargetConfiguration>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = McpLambdaTargetConfiguration>
    McpTargetConfiguration& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}
  private:

    ApiSchemaConfiguration m_openApiSchema;
    bool m_openApiSchemaHasBeenSet = false;

    ApiSchemaConfiguration m_smithyModel;
    bool m_smithyModelHasBeenSet = false;

    McpLambdaTargetConfiguration m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
