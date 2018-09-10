﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * Advanced audio normalization settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioNormalizationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AudioNormalizationSettings
  {
  public:
    AudioNormalizationSettings();
    AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
    AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioNormalizationAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    
    inline void SetAlgorithm(const AudioNormalizationAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    
    inline void SetAlgorithm(AudioNormalizationAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    
    inline AudioNormalizationSettings& WithAlgorithm(const AudioNormalizationAlgorithm& value) { SetAlgorithm(value); return *this;}

    
    inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    
    inline const AudioNormalizationAlgorithmControl& GetAlgorithmControl() const{ return m_algorithmControl; }

    
    inline void SetAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = value; }

    
    inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = std::move(value); }

    
    inline AudioNormalizationSettings& WithAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { SetAlgorithmControl(value); return *this;}

    
    inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { SetAlgorithmControl(std::move(value)); return *this;}


    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected. Gating only applies
     * when not using real_time_correction.
     */
    inline int GetCorrectionGateLevel() const{ return m_correctionGateLevel; }

    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected. Gating only applies
     * when not using real_time_correction.
     */
    inline void SetCorrectionGateLevel(int value) { m_correctionGateLevelHasBeenSet = true; m_correctionGateLevel = value; }

    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected. Gating only applies
     * when not using real_time_correction.
     */
    inline AudioNormalizationSettings& WithCorrectionGateLevel(int value) { SetCorrectionGateLevel(value); return *this;}


    
    inline const AudioNormalizationLoudnessLogging& GetLoudnessLogging() const{ return m_loudnessLogging; }

    
    inline void SetLoudnessLogging(const AudioNormalizationLoudnessLogging& value) { m_loudnessLoggingHasBeenSet = true; m_loudnessLogging = value; }

    
    inline void SetLoudnessLogging(AudioNormalizationLoudnessLogging&& value) { m_loudnessLoggingHasBeenSet = true; m_loudnessLogging = std::move(value); }

    
    inline AudioNormalizationSettings& WithLoudnessLogging(const AudioNormalizationLoudnessLogging& value) { SetLoudnessLogging(value); return *this;}

    
    inline AudioNormalizationSettings& WithLoudnessLogging(AudioNormalizationLoudnessLogging&& value) { SetLoudnessLogging(std::move(value)); return *this;}


    
    inline const AudioNormalizationPeakCalculation& GetPeakCalculation() const{ return m_peakCalculation; }

    
    inline void SetPeakCalculation(const AudioNormalizationPeakCalculation& value) { m_peakCalculationHasBeenSet = true; m_peakCalculation = value; }

    
    inline void SetPeakCalculation(AudioNormalizationPeakCalculation&& value) { m_peakCalculationHasBeenSet = true; m_peakCalculation = std::move(value); }

    
    inline AudioNormalizationSettings& WithPeakCalculation(const AudioNormalizationPeakCalculation& value) { SetPeakCalculation(value); return *this;}

    
    inline AudioNormalizationSettings& WithPeakCalculation(AudioNormalizationPeakCalculation&& value) { SetPeakCalculation(std::move(value)); return *this;}


    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm. The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline double GetTargetLkfs() const{ return m_targetLkfs; }

    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm. The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline void SetTargetLkfs(double value) { m_targetLkfsHasBeenSet = true; m_targetLkfs = value; }

    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm. The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline AudioNormalizationSettings& WithTargetLkfs(double value) { SetTargetLkfs(value); return *this;}

  private:

    AudioNormalizationAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    AudioNormalizationAlgorithmControl m_algorithmControl;
    bool m_algorithmControlHasBeenSet;

    int m_correctionGateLevel;
    bool m_correctionGateLevelHasBeenSet;

    AudioNormalizationLoudnessLogging m_loudnessLogging;
    bool m_loudnessLoggingHasBeenSet;

    AudioNormalizationPeakCalculation m_peakCalculation;
    bool m_peakCalculationHasBeenSet;

    double m_targetLkfs;
    bool m_targetLkfsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
