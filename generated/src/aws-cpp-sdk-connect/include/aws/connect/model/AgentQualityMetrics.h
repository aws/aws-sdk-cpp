/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AudioQualityMetricsInfo.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the quality of the Agent's media connection</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentQualityMetrics">AWS
   * API Reference</a></p>
   */
  class AgentQualityMetrics
  {
  public:
    AWS_CONNECT_API AgentQualityMetrics() = default;
    AWS_CONNECT_API AgentQualityMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentQualityMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the audio quality of the Agent</p>
     */
    inline const AudioQualityMetricsInfo& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioQualityMetricsInfo>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioQualityMetricsInfo>
    AgentQualityMetrics& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}
  private:

    AudioQualityMetricsInfo m_audio;
    bool m_audioHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
