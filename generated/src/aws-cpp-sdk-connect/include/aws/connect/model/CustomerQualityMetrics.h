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
   * <p>Information about the quality of the Customer's media
   * connection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CustomerQualityMetrics">AWS
   * API Reference</a></p>
   */
  class CustomerQualityMetrics
  {
  public:
    AWS_CONNECT_API CustomerQualityMetrics();
    AWS_CONNECT_API CustomerQualityMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CustomerQualityMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the audio quality of the Customer</p>
     */
    inline const AudioQualityMetricsInfo& GetAudio() const{ return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    inline void SetAudio(const AudioQualityMetricsInfo& value) { m_audioHasBeenSet = true; m_audio = value; }
    inline void SetAudio(AudioQualityMetricsInfo&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }
    inline CustomerQualityMetrics& WithAudio(const AudioQualityMetricsInfo& value) { SetAudio(value); return *this;}
    inline CustomerQualityMetrics& WithAudio(AudioQualityMetricsInfo&& value) { SetAudio(std::move(value)); return *this;}
    ///@}
  private:

    AudioQualityMetricsInfo m_audio;
    bool m_audioHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
