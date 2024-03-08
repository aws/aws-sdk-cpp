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
    AWS_LEXMODELSV2_API BuildtimeSettings();
    AWS_LEXMODELSV2_API BuildtimeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuildtimeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline const DescriptiveBotBuilderSpecification& GetDescriptiveBotBuilder() const{ return m_descriptiveBotBuilder; }

    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline bool DescriptiveBotBuilderHasBeenSet() const { return m_descriptiveBotBuilderHasBeenSet; }

    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline void SetDescriptiveBotBuilder(const DescriptiveBotBuilderSpecification& value) { m_descriptiveBotBuilderHasBeenSet = true; m_descriptiveBotBuilder = value; }

    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline void SetDescriptiveBotBuilder(DescriptiveBotBuilderSpecification&& value) { m_descriptiveBotBuilderHasBeenSet = true; m_descriptiveBotBuilder = std::move(value); }

    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline BuildtimeSettings& WithDescriptiveBotBuilder(const DescriptiveBotBuilderSpecification& value) { SetDescriptiveBotBuilder(value); return *this;}

    /**
     * <p>An object containing specifications for the descriptive bot building
     * feature.</p>
     */
    inline BuildtimeSettings& WithDescriptiveBotBuilder(DescriptiveBotBuilderSpecification&& value) { SetDescriptiveBotBuilder(std::move(value)); return *this;}


    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline const SampleUtteranceGenerationSpecification& GetSampleUtteranceGeneration() const{ return m_sampleUtteranceGeneration; }

    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline bool SampleUtteranceGenerationHasBeenSet() const { return m_sampleUtteranceGenerationHasBeenSet; }

    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline void SetSampleUtteranceGeneration(const SampleUtteranceGenerationSpecification& value) { m_sampleUtteranceGenerationHasBeenSet = true; m_sampleUtteranceGeneration = value; }

    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline void SetSampleUtteranceGeneration(SampleUtteranceGenerationSpecification&& value) { m_sampleUtteranceGenerationHasBeenSet = true; m_sampleUtteranceGeneration = std::move(value); }

    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline BuildtimeSettings& WithSampleUtteranceGeneration(const SampleUtteranceGenerationSpecification& value) { SetSampleUtteranceGeneration(value); return *this;}

    /**
     * <p>Contains specifications for the sample utterance generation feature.</p>
     */
    inline BuildtimeSettings& WithSampleUtteranceGeneration(SampleUtteranceGenerationSpecification&& value) { SetSampleUtteranceGeneration(std::move(value)); return *this;}

  private:

    DescriptiveBotBuilderSpecification m_descriptiveBotBuilder;
    bool m_descriptiveBotBuilderHasBeenSet = false;

    SampleUtteranceGenerationSpecification m_sampleUtteranceGeneration;
    bool m_sampleUtteranceGenerationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
