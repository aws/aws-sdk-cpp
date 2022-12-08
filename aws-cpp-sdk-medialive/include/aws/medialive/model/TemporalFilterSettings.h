/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TemporalFilterPostFilterSharpening.h>
#include <aws/medialive/model/TemporalFilterStrength.h>
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
   * Temporal Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TemporalFilterSettings">AWS
   * API Reference</a></p>
   */
  class TemporalFilterSettings
  {
  public:
    AWS_MEDIALIVE_API TemporalFilterSettings();
    AWS_MEDIALIVE_API TemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline const TemporalFilterPostFilterSharpening& GetPostFilterSharpening() const{ return m_postFilterSharpening; }

    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline bool PostFilterSharpeningHasBeenSet() const { return m_postFilterSharpeningHasBeenSet; }

    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline void SetPostFilterSharpening(const TemporalFilterPostFilterSharpening& value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = value; }

    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline void SetPostFilterSharpening(TemporalFilterPostFilterSharpening&& value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = std::move(value); }

    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline TemporalFilterSettings& WithPostFilterSharpening(const TemporalFilterPostFilterSharpening& value) { SetPostFilterSharpening(value); return *this;}

    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline TemporalFilterSettings& WithPostFilterSharpening(TemporalFilterPostFilterSharpening&& value) { SetPostFilterSharpening(std::move(value)); return *this;}


    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline const TemporalFilterStrength& GetStrength() const{ return m_strength; }

    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline void SetStrength(const TemporalFilterStrength& value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline void SetStrength(TemporalFilterStrength&& value) { m_strengthHasBeenSet = true; m_strength = std::move(value); }

    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline TemporalFilterSettings& WithStrength(const TemporalFilterStrength& value) { SetStrength(value); return *this;}

    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline TemporalFilterSettings& WithStrength(TemporalFilterStrength&& value) { SetStrength(std::move(value)); return *this;}

  private:

    TemporalFilterPostFilterSharpening m_postFilterSharpening;
    bool m_postFilterSharpeningHasBeenSet = false;

    TemporalFilterStrength m_strength;
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
