/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioNormalizationAlgorithm.h>
#include <aws/mediaconvert/model/AudioNormalizationAlgorithmControl.h>
#include <aws/mediaconvert/model/AudioNormalizationLoudnessLogging.h>
#include <aws/mediaconvert/model/AudioNormalizationPeakCalculation.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Advanced audio normalization settings. Ignore these settings unless you need to
   * comply with a loudness standard.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioNormalizationSettings">AWS
   * API Reference</a></p>
   */
  class AudioNormalizationSettings
  {
  public:
    AWS_MEDIACONVERT_API AudioNormalizationSettings();
    AWS_MEDIACONVERT_API AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline const AudioNormalizationAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline void SetAlgorithm(const AudioNormalizationAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline void SetAlgorithm(AudioNormalizationAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline AudioNormalizationSettings& WithAlgorithm(const AudioNormalizationAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline const AudioNormalizationAlgorithmControl& GetAlgorithmControl() const{ return m_algorithmControl; }

    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline bool AlgorithmControlHasBeenSet() const { return m_algorithmControlHasBeenSet; }

    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline void SetAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = value; }

    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = std::move(value); }

    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationSettings& WithAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { SetAlgorithmControl(value); return *this;}

    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { SetAlgorithmControl(std::move(value)); return *this;}


    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected.
     */
    inline int GetCorrectionGateLevel() const{ return m_correctionGateLevel; }

    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected.
     */
    inline bool CorrectionGateLevelHasBeenSet() const { return m_correctionGateLevelHasBeenSet; }

    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected.
     */
    inline void SetCorrectionGateLevel(int value) { m_correctionGateLevelHasBeenSet = true; m_correctionGateLevel = value; }

    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected.
     */
    inline AudioNormalizationSettings& WithCorrectionGateLevel(int value) { SetCorrectionGateLevel(value); return *this;}


    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline const AudioNormalizationLoudnessLogging& GetLoudnessLogging() const{ return m_loudnessLogging; }

    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline bool LoudnessLoggingHasBeenSet() const { return m_loudnessLoggingHasBeenSet; }

    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline void SetLoudnessLogging(const AudioNormalizationLoudnessLogging& value) { m_loudnessLoggingHasBeenSet = true; m_loudnessLogging = value; }

    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline void SetLoudnessLogging(AudioNormalizationLoudnessLogging&& value) { m_loudnessLoggingHasBeenSet = true; m_loudnessLogging = std::move(value); }

    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline AudioNormalizationSettings& WithLoudnessLogging(const AudioNormalizationLoudnessLogging& value) { SetLoudnessLogging(value); return *this;}

    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline AudioNormalizationSettings& WithLoudnessLogging(AudioNormalizationLoudnessLogging&& value) { SetLoudnessLogging(std::move(value)); return *this;}


    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline const AudioNormalizationPeakCalculation& GetPeakCalculation() const{ return m_peakCalculation; }

    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline bool PeakCalculationHasBeenSet() const { return m_peakCalculationHasBeenSet; }

    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline void SetPeakCalculation(const AudioNormalizationPeakCalculation& value) { m_peakCalculationHasBeenSet = true; m_peakCalculation = value; }

    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline void SetPeakCalculation(AudioNormalizationPeakCalculation&& value) { m_peakCalculationHasBeenSet = true; m_peakCalculation = std::move(value); }

    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline AudioNormalizationSettings& WithPeakCalculation(const AudioNormalizationPeakCalculation& value) { SetPeakCalculation(value); return *this;}

    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline AudioNormalizationSettings& WithPeakCalculation(AudioNormalizationPeakCalculation&& value) { SetPeakCalculation(std::move(value)); return *this;}


    /**
     * When you use Audio normalization (AudioNormalizationSettings), optionally use
     * this setting to specify a target loudness. If you don't specify a value here,
     * the encoder chooses a value for you, based on the algorithm that you choose for
     * Algorithm (algorithm). If you choose algorithm 1770-1, the encoder will choose
     * -24 LKFS; otherwise, the encoder will choose -23 LKFS.
     */
    inline double GetTargetLkfs() const{ return m_targetLkfs; }

    /**
     * When you use Audio normalization (AudioNormalizationSettings), optionally use
     * this setting to specify a target loudness. If you don't specify a value here,
     * the encoder chooses a value for you, based on the algorithm that you choose for
     * Algorithm (algorithm). If you choose algorithm 1770-1, the encoder will choose
     * -24 LKFS; otherwise, the encoder will choose -23 LKFS.
     */
    inline bool TargetLkfsHasBeenSet() const { return m_targetLkfsHasBeenSet; }

    /**
     * When you use Audio normalization (AudioNormalizationSettings), optionally use
     * this setting to specify a target loudness. If you don't specify a value here,
     * the encoder chooses a value for you, based on the algorithm that you choose for
     * Algorithm (algorithm). If you choose algorithm 1770-1, the encoder will choose
     * -24 LKFS; otherwise, the encoder will choose -23 LKFS.
     */
    inline void SetTargetLkfs(double value) { m_targetLkfsHasBeenSet = true; m_targetLkfs = value; }

    /**
     * When you use Audio normalization (AudioNormalizationSettings), optionally use
     * this setting to specify a target loudness. If you don't specify a value here,
     * the encoder chooses a value for you, based on the algorithm that you choose for
     * Algorithm (algorithm). If you choose algorithm 1770-1, the encoder will choose
     * -24 LKFS; otherwise, the encoder will choose -23 LKFS.
     */
    inline AudioNormalizationSettings& WithTargetLkfs(double value) { SetTargetLkfs(value); return *this;}

  private:

    AudioNormalizationAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    AudioNormalizationAlgorithmControl m_algorithmControl;
    bool m_algorithmControlHasBeenSet = false;

    int m_correctionGateLevel;
    bool m_correctionGateLevelHasBeenSet = false;

    AudioNormalizationLoudnessLogging m_loudnessLogging;
    bool m_loudnessLoggingHasBeenSet = false;

    AudioNormalizationPeakCalculation m_peakCalculation;
    bool m_peakCalculationHasBeenSet = false;

    double m_targetLkfs;
    bool m_targetLkfsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
