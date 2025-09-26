/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/TranscriptConfiguration.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Configuration for different audio extraction category types</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/AudioExtractionCategoryTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioExtractionCategoryTypeConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API AudioExtractionCategoryTypeConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API AudioExtractionCategoryTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API AudioExtractionCategoryTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TranscriptConfiguration& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = TranscriptConfiguration>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = TranscriptConfiguration>
    AudioExtractionCategoryTypeConfiguration& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}
  private:

    TranscriptConfiguration m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
