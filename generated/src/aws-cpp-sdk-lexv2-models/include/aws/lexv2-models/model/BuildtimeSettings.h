/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DescriptiveBotBuilderSpecification.h>
#include <aws/lexv2-models/model/SampleUtteranceGenerationSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains specifications about the Amazon Lex build time generative AI
   * capabilities from Amazon Bedrock that you can turn on for your
   * bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildtimeSettings">AWS
   * API Reference</a></p>
   */
  class BuildtimeSettings
  {
  public:
    AWS_LEXMODELSV2_API BuildtimeSettings() = default;
    AWS_LEXMODELSV2_API BuildtimeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuildtimeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline const DescriptiveBotBuilderSpecification& GetDescriptiveBotBuilder() const { return m_descriptiveBotBuilder; }
    inline bool DescriptiveBotBuilderHasBeenSet() const { return m_descriptiveBotBuilderHasBeenSet; }
    template<typename DescriptiveBotBuilderT = DescriptiveBotBuilderSpecification>
    void SetDescriptiveBotBuilder(DescriptiveBotBuilderT&& value) { m_descriptiveBotBuilderHasBeenSet = true; m_descriptiveBotBuilder = std::forward<DescriptiveBotBuilderT>(value); }
    template<typename DescriptiveBotBuilderT = DescriptiveBotBuilderSpecification>
    BuildtimeSettings& WithDescriptiveBotBuilder(DescriptiveBotBuilderT&& value) { SetDescriptiveBotBuilder(std::forward<DescriptiveBotBuilderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline const SampleUtteranceGenerationSpecification& GetSampleUtteranceGeneration() const { return m_sampleUtteranceGeneration; }
    inline bool SampleUtteranceGenerationHasBeenSet() const { return m_sampleUtteranceGenerationHasBeenSet; }
    template<typename SampleUtteranceGenerationT = SampleUtteranceGenerationSpecification>
    void SetSampleUtteranceGeneration(SampleUtteranceGenerationT&& value) { m_sampleUtteranceGenerationHasBeenSet = true; m_sampleUtteranceGeneration = std::forward<SampleUtteranceGenerationT>(value); }
    template<typename SampleUtteranceGenerationT = SampleUtteranceGenerationSpecification>
    BuildtimeSettings& WithSampleUtteranceGeneration(SampleUtteranceGenerationT&& value) { SetSampleUtteranceGeneration(std::forward<SampleUtteranceGenerationT>(value)); return *this;}
    ///@}
  private:

    DescriptiveBotBuilderSpecification m_descriptiveBotBuilder;
    bool m_descriptiveBotBuilderHasBeenSet = false;

    SampleUtteranceGenerationSpecification m_sampleUtteranceGeneration;
    bool m_sampleUtteranceGenerationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
