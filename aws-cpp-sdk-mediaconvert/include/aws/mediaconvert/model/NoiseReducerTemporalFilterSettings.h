/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NoiseFilterPostTemporalSharpening.h>
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
   * Noise reducer filter settings for temporal filter.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducerTemporalFilterSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API NoiseReducerTemporalFilterSettings
  {
  public:
    NoiseReducerTemporalFilterSettings();
    NoiseReducerTemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    NoiseReducerTemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline int GetAggressiveMode() const{ return m_aggressiveMode; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline bool AggressiveModeHasBeenSet() const { return m_aggressiveModeHasBeenSet; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline void SetAggressiveMode(int value) { m_aggressiveModeHasBeenSet = true; m_aggressiveMode = value; }

    /**
     * Use Aggressive mode for content that has complex motion. Higher values produce
     * stronger temporal filtering. This filters highly complex scenes more
     * aggressively and creates better VQ for low bitrate outputs.
     */
    inline NoiseReducerTemporalFilterSettings& WithAggressiveMode(int value) { SetAggressiveMode(value); return *this;}


    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline const NoiseFilterPostTemporalSharpening& GetPostTemporalSharpening() const{ return m_postTemporalSharpening; }

    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline bool PostTemporalSharpeningHasBeenSet() const { return m_postTemporalSharpeningHasBeenSet; }

    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline void SetPostTemporalSharpening(const NoiseFilterPostTemporalSharpening& value) { m_postTemporalSharpeningHasBeenSet = true; m_postTemporalSharpening = value; }

    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline void SetPostTemporalSharpening(NoiseFilterPostTemporalSharpening&& value) { m_postTemporalSharpeningHasBeenSet = true; m_postTemporalSharpening = std::move(value); }

    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpening(const NoiseFilterPostTemporalSharpening& value) { SetPostTemporalSharpening(value); return *this;}

    /**
     * Optional. When you set Noise reducer (noiseReducer) to Temporal (TEMPORAL), you
     * can use this setting to apply sharpening. The default behavior, Auto (AUTO),
     * allows the transcoder to determine whether to apply filtering, depending on
     * input type and quality. When you set Noise reducer to Temporal, your output
     * bandwidth is reduced. When Post temporal sharpening is also enabled, that
     * bandwidth reduction is smaller.
     */
    inline NoiseReducerTemporalFilterSettings& WithPostTemporalSharpening(NoiseFilterPostTemporalSharpening&& value) { SetPostTemporalSharpening(std::move(value)); return *this;}


    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline int GetSpeed() const{ return m_speed; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline void SetSpeed(int value) { m_speedHasBeenSet = true; m_speed = value; }

    /**
     * The speed of the filter (higher number is faster). Low setting reduces bit rate
     * at the cost of transcode time, high setting improves transcode time at the cost
     * of bit rate.
     */
    inline NoiseReducerTemporalFilterSettings& WithSpeed(int value) { SetSpeed(value); return *this;}


    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline int GetStrength() const{ return m_strength; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Specify the strength of the noise reducing filter on this output. Higher values
     * produce stronger filtering. We recommend the following value ranges, depending
     * on the result that you want: * 0-2 for complexity reduction with minimal
     * sharpness loss * 2-8 for complexity reduction with image preservation * 8-16 for
     * a high level of complexity reduction
     */
    inline NoiseReducerTemporalFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}

  private:

    int m_aggressiveMode;
    bool m_aggressiveModeHasBeenSet;

    NoiseFilterPostTemporalSharpening m_postTemporalSharpening;
    bool m_postTemporalSharpeningHasBeenSet;

    int m_speed;
    bool m_speedHasBeenSet;

    int m_strength;
    bool m_strengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
