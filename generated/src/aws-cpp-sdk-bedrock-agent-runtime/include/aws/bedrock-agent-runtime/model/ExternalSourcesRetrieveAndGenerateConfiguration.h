/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ExternalSourcesGenerationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/ExternalSource.h>
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
   * <p>The configurations of the external source wrapper object in the
   * <code>retrieveAndGenerate</code> function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ExternalSourcesRetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourcesRetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesRetrieveAndGenerateConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ExternalSourcesRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The prompt used with the external source wrapper object with the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const ExternalSourcesGenerationConfiguration& GetGenerationConfiguration() const{ return m_generationConfiguration; }
    inline bool GenerationConfigurationHasBeenSet() const { return m_generationConfigurationHasBeenSet; }
    inline void SetGenerationConfiguration(const ExternalSourcesGenerationConfiguration& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = value; }
    inline void SetGenerationConfiguration(ExternalSourcesGenerationConfiguration&& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = std::move(value); }
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithGenerationConfiguration(const ExternalSourcesGenerationConfiguration& value) { SetGenerationConfiguration(value); return *this;}
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithGenerationConfiguration(ExternalSourcesGenerationConfiguration&& value) { SetGenerationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model Amazon Resource Name (ARN) for the external source wrapper object
     * in the <code>retrieveAndGenerate</code> function.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document for the external source wrapper object in the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const Aws::Vector<ExternalSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<ExternalSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<ExternalSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithSources(const Aws::Vector<ExternalSource>& value) { SetSources(value); return *this;}
    inline ExternalSourcesRetrieveAndGenerateConfiguration& WithSources(Aws::Vector<ExternalSource>&& value) { SetSources(std::move(value)); return *this;}
    inline ExternalSourcesRetrieveAndGenerateConfiguration& AddSources(const ExternalSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline ExternalSourcesRetrieveAndGenerateConfiguration& AddSources(ExternalSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ExternalSourcesGenerationConfiguration m_generationConfiguration;
    bool m_generationConfigurationHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Vector<ExternalSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
