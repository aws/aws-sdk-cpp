/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/SpeakerLabelingConfiguration.h>
#include <aws/bedrock-data-automation/model/ChannelLabelingConfiguration.h>
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
   * <p>Configuration for transcript related features</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/TranscriptConfiguration">AWS
   * API Reference</a></p>
   */
  class TranscriptConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API TranscriptConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API TranscriptConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API TranscriptConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SpeakerLabelingConfiguration& GetSpeakerLabeling() const { return m_speakerLabeling; }
    inline bool SpeakerLabelingHasBeenSet() const { return m_speakerLabelingHasBeenSet; }
    template<typename SpeakerLabelingT = SpeakerLabelingConfiguration>
    void SetSpeakerLabeling(SpeakerLabelingT&& value) { m_speakerLabelingHasBeenSet = true; m_speakerLabeling = std::forward<SpeakerLabelingT>(value); }
    template<typename SpeakerLabelingT = SpeakerLabelingConfiguration>
    TranscriptConfiguration& WithSpeakerLabeling(SpeakerLabelingT&& value) { SetSpeakerLabeling(std::forward<SpeakerLabelingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChannelLabelingConfiguration& GetChannelLabeling() const { return m_channelLabeling; }
    inline bool ChannelLabelingHasBeenSet() const { return m_channelLabelingHasBeenSet; }
    template<typename ChannelLabelingT = ChannelLabelingConfiguration>
    void SetChannelLabeling(ChannelLabelingT&& value) { m_channelLabelingHasBeenSet = true; m_channelLabeling = std::forward<ChannelLabelingT>(value); }
    template<typename ChannelLabelingT = ChannelLabelingConfiguration>
    TranscriptConfiguration& WithChannelLabeling(ChannelLabelingT&& value) { SetChannelLabeling(std::forward<ChannelLabelingT>(value)); return *this;}
    ///@}
  private:

    SpeakerLabelingConfiguration m_speakerLabeling;
    bool m_speakerLabelingHasBeenSet = false;

    ChannelLabelingConfiguration m_channelLabeling;
    bool m_channelLabelingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
