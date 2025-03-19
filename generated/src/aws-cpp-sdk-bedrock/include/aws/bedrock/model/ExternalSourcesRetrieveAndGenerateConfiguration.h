/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ExternalSourcesGenerationConfiguration.h>
#include <aws/bedrock/model/ExternalSource.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration of the external source wrapper object in the
   * <code>retrieveAndGenerate</code> function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ExternalSourcesRetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourcesRetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCK_API ExternalSourcesRetrieveAndGenerateConfiguration() = default;
    AWS_BEDROCK_API ExternalSourcesRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ExternalSourcesRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the foundation model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> used to generate responses. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ExternalSourcesRetrieveAndGenerateConfiguration& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document for the external source wrapper object in the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const Aws::Vector<ExternalSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<ExternalSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<ExternalSource>>
    ExternalSourcesRetrieveAndGenerateConfiguration& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = ExternalSource>
    ExternalSourcesRetrieveAndGenerateConfiguration& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains configurations details for response generation based on retrieved
     * text chunks.</p>
     */
    inline const ExternalSourcesGenerationConfiguration& GetGenerationConfiguration() const { return m_generationConfiguration; }
    inline bool GenerationConfigurationHasBeenSet() const { return m_generationConfigurationHasBeenSet; }
    template<typename GenerationConfigurationT = ExternalSourcesGenerationConfiguration>
    void SetGenerationConfiguration(GenerationConfigurationT&& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = std::forward<GenerationConfigurationT>(value); }
    template<typename GenerationConfigurationT = ExternalSourcesGenerationConfiguration>
    ExternalSourcesRetrieveAndGenerateConfiguration& WithGenerationConfiguration(GenerationConfigurationT&& value) { SetGenerationConfiguration(std::forward<GenerationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Vector<ExternalSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    ExternalSourcesGenerationConfiguration m_generationConfiguration;
    bool m_generationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
