/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/QueryGenerationContext.h>
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
   * <p>Contains configurations for query generation. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-build-structured.html">Build
   * a knowledge base by connecting to a structured data source</a> in the Amazon
   * Bedrock User Guide..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/QueryGenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class QueryGenerationConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API QueryGenerationConfiguration() = default;
    AWS_BEDROCKAGENT_API QueryGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API QueryGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time after which query generation will time out.</p>
     */
    inline int GetExecutionTimeoutSeconds() const { return m_executionTimeoutSeconds; }
    inline bool ExecutionTimeoutSecondsHasBeenSet() const { return m_executionTimeoutSecondsHasBeenSet; }
    inline void SetExecutionTimeoutSeconds(int value) { m_executionTimeoutSecondsHasBeenSet = true; m_executionTimeoutSeconds = value; }
    inline QueryGenerationConfiguration& WithExecutionTimeoutSeconds(int value) { SetExecutionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for context to use during query generation.</p>
     */
    inline const QueryGenerationContext& GetGenerationContext() const { return m_generationContext; }
    inline bool GenerationContextHasBeenSet() const { return m_generationContextHasBeenSet; }
    template<typename GenerationContextT = QueryGenerationContext>
    void SetGenerationContext(GenerationContextT&& value) { m_generationContextHasBeenSet = true; m_generationContext = std::forward<GenerationContextT>(value); }
    template<typename GenerationContextT = QueryGenerationContext>
    QueryGenerationConfiguration& WithGenerationContext(GenerationContextT&& value) { SetGenerationContext(std::forward<GenerationContextT>(value)); return *this;}
    ///@}
  private:

    int m_executionTimeoutSeconds{0};
    bool m_executionTimeoutSecondsHasBeenSet = false;

    QueryGenerationContext m_generationContext;
    bool m_generationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
