/*
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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioNormalizationAlgorithm.h>
#include <aws/medialive/model/AudioNormalizationAlgorithmControl.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Audio Normalization Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioNormalizationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioNormalizationSettings
  {
  public:
    AudioNormalizationSettings();
    AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
    AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline const AudioNormalizationAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline void SetAlgorithm(const AudioNormalizationAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline void SetAlgorithm(AudioNormalizationAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline AudioNormalizationSettings& WithAlgorithm(const AudioNormalizationAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline const AudioNormalizationAlgorithmControl& GetAlgorithmControl() const{ return m_algorithmControl; }

    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline bool AlgorithmControlHasBeenSet() const { return m_algorithmControlHasBeenSet; }

    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline void SetAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = value; }

    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = std::move(value); }

    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationSettings& WithAlgorithmControl(const AudioNormalizationAlgorithmControl& value) { SetAlgorithmControl(value); return *this;}

    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl&& value) { SetAlgorithmControl(std::move(value)); return *this;}


    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm.  The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline double GetTargetLkfs() const{ return m_targetLkfs; }

    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm.  The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline bool TargetLkfsHasBeenSet() const { return m_targetLkfsHasBeenSet; }

    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm.  The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline void SetTargetLkfs(double value) { m_targetLkfsHasBeenSet = true; m_targetLkfs = value; }

    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm.  The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline AudioNormalizationSettings& WithTargetLkfs(double value) { SetTargetLkfs(value); return *this;}

  private:

    AudioNormalizationAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    AudioNormalizationAlgorithmControl m_algorithmControl;
    bool m_algorithmControlHasBeenSet;

    double m_targetLkfs;
    bool m_targetLkfsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
