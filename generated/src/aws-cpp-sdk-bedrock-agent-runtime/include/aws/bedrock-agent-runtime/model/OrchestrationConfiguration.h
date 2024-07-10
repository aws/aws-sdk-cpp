/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/QueryTransformationConfiguration.h>
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
   * <p>Settings for how the model processes the prompt prior to retrieval and
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OrchestrationConfiguration">AWS
   * API Reference</a></p>
   */
  class OrchestrationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OrchestrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To split up the prompt and retrieve multiple sources, set the transformation
     * type to <code>QUERY_DECOMPOSITION</code>.</p>
     */
    inline const QueryTransformationConfiguration& GetQueryTransformationConfiguration() const{ return m_queryTransformationConfiguration; }
    inline bool QueryTransformationConfigurationHasBeenSet() const { return m_queryTransformationConfigurationHasBeenSet; }
    inline void SetQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = value; }
    inline void SetQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = std::move(value); }
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { SetQueryTransformationConfiguration(value); return *this;}
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { SetQueryTransformationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    QueryTransformationConfiguration m_queryTransformationConfiguration;
    bool m_queryTransformationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
