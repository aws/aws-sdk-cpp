/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PromptTemplate.h>
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
   * <p>Contains the generation configuration of the external source wrapper
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ExternalSourcesGenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourcesGenerationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesGenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const{ return m_promptTemplate; }

    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }

    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline void SetPromptTemplate(const PromptTemplate& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = value; }

    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline void SetPromptTemplate(PromptTemplate&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::move(value); }

    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline ExternalSourcesGenerationConfiguration& WithPromptTemplate(const PromptTemplate& value) { SetPromptTemplate(value); return *this;}

    /**
     * <p>Contain the textPromptTemplate string for the external source wrapper
     * object.</p>
     */
    inline ExternalSourcesGenerationConfiguration& WithPromptTemplate(PromptTemplate&& value) { SetPromptTemplate(std::move(value)); return *this;}

  private:

    PromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
