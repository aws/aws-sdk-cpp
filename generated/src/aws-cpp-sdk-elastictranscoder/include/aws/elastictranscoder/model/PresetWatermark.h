/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Settings for the size, location, and opacity of graphics that you want
   * Elastic Transcoder to overlay over videos that are transcoded using this preset.
   * You can specify settings for up to four watermarks. Watermarks appear in the
   * specified size and location, and with the specified opacity for the duration of
   * the transcoded video.</p> <p>Watermarks can be in .png or .jpg format. If you
   * want to display a watermark that is not rectangular, use the .png format, which
   * supports transparency.</p> <p>When you create a job that uses this preset, you
   * specify the .png or .jpg graphics that you want Elastic Transcoder to include in
   * the transcoded videos. You can specify fewer graphics in the job than you
   * specify watermark settings in the preset, which allows you to use the same
   * preset for up to four watermarks that have different dimensions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/PresetWatermark">AWS
   * API Reference</a></p>
   */
  class PresetWatermark
  {
  public:
    AWS_ELASTICTRANSCODER_API PresetWatermark() = default;
    AWS_ELASTICTRANSCODER_API PresetWatermark(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API PresetWatermark& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the settings for one watermark. The value of
     * <code>Id</code> can be up to 40 characters long. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PresetWatermark& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum width of the watermark in one of the following formats: </p> <ul>
     * <li> <p>number of pixels (px): The minimum value is 16 pixels, and the maximum
     * value is the value of <code>MaxWidth</code>.</p> </li> <li> <p>integer
     * percentage (%): The range of valid values is 0 to 100. Use the value of
     * <code>Target</code> to specify whether you want Elastic Transcoder to include
     * the black bars that are added by Elastic Transcoder, if any, in the
     * calculation.</p> <p>If you specify the value in pixels, it must be less than or
     * equal to the value of <code>MaxWidth</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetMaxWidth() const { return m_maxWidth; }
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }
    template<typename MaxWidthT = Aws::String>
    void SetMaxWidth(MaxWidthT&& value) { m_maxWidthHasBeenSet = true; m_maxWidth = std::forward<MaxWidthT>(value); }
    template<typename MaxWidthT = Aws::String>
    PresetWatermark& WithMaxWidth(MaxWidthT&& value) { SetMaxWidth(std::forward<MaxWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum height of the watermark in one of the following formats: </p>
     * <ul> <li> <p>number of pixels (px): The minimum value is 16 pixels, and the
     * maximum value is the value of <code>MaxHeight</code>.</p> </li> <li> <p>integer
     * percentage (%): The range of valid values is 0 to 100. Use the value of
     * <code>Target</code> to specify whether you want Elastic Transcoder to include
     * the black bars that are added by Elastic Transcoder, if any, in the
     * calculation.</p> </li> </ul> <p>If you specify the value in pixels, it must be
     * less than or equal to the value of <code>MaxHeight</code>.</p>
     */
    inline const Aws::String& GetMaxHeight() const { return m_maxHeight; }
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }
    template<typename MaxHeightT = Aws::String>
    void SetMaxHeight(MaxHeightT&& value) { m_maxHeightHasBeenSet = true; m_maxHeight = std::forward<MaxHeightT>(value); }
    template<typename MaxHeightT = Aws::String>
    PresetWatermark& WithMaxHeight(MaxHeightT&& value) { SetMaxHeight(std::forward<MaxHeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that controls scaling of the watermark: </p> <ul> <li> <p>
     * <b>Fit</b>: Elastic Transcoder scales the watermark so it matches the value that
     * you specified in either <code>MaxWidth</code> or <code>MaxHeight</code> without
     * exceeding the other value.</p> </li> <li> <p> <b>Stretch</b>: Elastic Transcoder
     * stretches the watermark to match the values that you specified for
     * <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative proportions of
     * the watermark and the values of <code>MaxWidth</code> and <code>MaxHeight</code>
     * are different, the watermark will be distorted.</p> </li> <li> <p>
     * <b>ShrinkToFit</b>: Elastic Transcoder scales the watermark down so that its
     * dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the watermark
     * up.</p> </li> </ul>
     */
    inline const Aws::String& GetSizingPolicy() const { return m_sizingPolicy; }
    inline bool SizingPolicyHasBeenSet() const { return m_sizingPolicyHasBeenSet; }
    template<typename SizingPolicyT = Aws::String>
    void SetSizingPolicy(SizingPolicyT&& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = std::forward<SizingPolicyT>(value); }
    template<typename SizingPolicyT = Aws::String>
    PresetWatermark& WithSizingPolicy(SizingPolicyT&& value) { SetSizingPolicy(std::forward<SizingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The horizontal position of the watermark unless you specify a non-zero value
     * for <code>HorizontalOffset</code>: </p> <ul> <li> <p> <b>Left</b>: The left edge
     * of the watermark is aligned with the left border of the video.</p> </li> <li>
     * <p> <b>Right</b>: The right edge of the watermark is aligned with the right
     * border of the video.</p> </li> <li> <p> <b>Center</b>: The watermark is centered
     * between the left and right borders.</p> </li> </ul>
     */
    inline const Aws::String& GetHorizontalAlign() const { return m_horizontalAlign; }
    inline bool HorizontalAlignHasBeenSet() const { return m_horizontalAlignHasBeenSet; }
    template<typename HorizontalAlignT = Aws::String>
    void SetHorizontalAlign(HorizontalAlignT&& value) { m_horizontalAlignHasBeenSet = true; m_horizontalAlign = std::forward<HorizontalAlignT>(value); }
    template<typename HorizontalAlignT = Aws::String>
    PresetWatermark& WithHorizontalAlign(HorizontalAlignT&& value) { SetHorizontalAlign(std::forward<HorizontalAlignT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount by which you want the horizontal position of the watermark to be
     * offset from the position specified by HorizontalAlign: </p> <ul> <li> <p>number
     * of pixels (px): The minimum value is 0 pixels, and the maximum value is the
     * value of MaxWidth.</p> </li> <li> <p>integer percentage (%): The range of valid
     * values is 0 to 100.</p> </li> </ul> <p>For example, if you specify Left for
     * <code>HorizontalAlign</code> and 5px for <code>HorizontalOffset</code>, the left
     * side of the watermark appears 5 pixels from the left border of the output
     * video.</p> <p> <code>HorizontalOffset</code> is only valid when the value of
     * <code>HorizontalAlign</code> is <code>Left</code> or <code>Right</code>. If you
     * specify an offset that causes the watermark to extend beyond the left or right
     * border and Elastic Transcoder has not added black bars, the watermark is
     * cropped. If Elastic Transcoder has added black bars, the watermark extends into
     * the black bars. If the watermark extends beyond the black bars, it is
     * cropped.</p> <p>Use the value of <code>Target</code> to specify whether you want
     * to include the black bars that are added by Elastic Transcoder, if any, in the
     * offset calculation.</p>
     */
    inline const Aws::String& GetHorizontalOffset() const { return m_horizontalOffset; }
    inline bool HorizontalOffsetHasBeenSet() const { return m_horizontalOffsetHasBeenSet; }
    template<typename HorizontalOffsetT = Aws::String>
    void SetHorizontalOffset(HorizontalOffsetT&& value) { m_horizontalOffsetHasBeenSet = true; m_horizontalOffset = std::forward<HorizontalOffsetT>(value); }
    template<typename HorizontalOffsetT = Aws::String>
    PresetWatermark& WithHorizontalOffset(HorizontalOffsetT&& value) { SetHorizontalOffset(std::forward<HorizontalOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vertical position of the watermark unless you specify a non-zero value
     * for <code>VerticalOffset</code>: </p> <ul> <li> <p> <b>Top</b>: The top edge of
     * the watermark is aligned with the top border of the video.</p> </li> <li> <p>
     * <b>Bottom</b>: The bottom edge of the watermark is aligned with the bottom
     * border of the video.</p> </li> <li> <p> <b>Center</b>: The watermark is centered
     * between the top and bottom borders.</p> </li> </ul>
     */
    inline const Aws::String& GetVerticalAlign() const { return m_verticalAlign; }
    inline bool VerticalAlignHasBeenSet() const { return m_verticalAlignHasBeenSet; }
    template<typename VerticalAlignT = Aws::String>
    void SetVerticalAlign(VerticalAlignT&& value) { m_verticalAlignHasBeenSet = true; m_verticalAlign = std::forward<VerticalAlignT>(value); }
    template<typename VerticalAlignT = Aws::String>
    PresetWatermark& WithVerticalAlign(VerticalAlignT&& value) { SetVerticalAlign(std::forward<VerticalAlignT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>VerticalOffset</code> </p> <p>The amount by which you want the
     * vertical position of the watermark to be offset from the position specified by
     * VerticalAlign:</p> <ul> <li> <p>number of pixels (px): The minimum value is 0
     * pixels, and the maximum value is the value of <code>MaxHeight</code>.</p> </li>
     * <li> <p>integer percentage (%): The range of valid values is 0 to 100.</p> </li>
     * </ul> <p>For example, if you specify <code>Top</code> for
     * <code>VerticalAlign</code> and <code>5px</code> for <code>VerticalOffset</code>,
     * the top of the watermark appears 5 pixels from the top border of the output
     * video.</p> <p> <code>VerticalOffset</code> is only valid when the value of
     * VerticalAlign is Top or Bottom.</p> <p>If you specify an offset that causes the
     * watermark to extend beyond the top or bottom border and Elastic Transcoder has
     * not added black bars, the watermark is cropped. If Elastic Transcoder has added
     * black bars, the watermark extends into the black bars. If the watermark extends
     * beyond the black bars, it is cropped.</p> <p>Use the value of
     * <code>Target</code> to specify whether you want Elastic Transcoder to include
     * the black bars that are added by Elastic Transcoder, if any, in the offset
     * calculation.</p>
     */
    inline const Aws::String& GetVerticalOffset() const { return m_verticalOffset; }
    inline bool VerticalOffsetHasBeenSet() const { return m_verticalOffsetHasBeenSet; }
    template<typename VerticalOffsetT = Aws::String>
    void SetVerticalOffset(VerticalOffsetT&& value) { m_verticalOffsetHasBeenSet = true; m_verticalOffset = std::forward<VerticalOffsetT>(value); }
    template<typename VerticalOffsetT = Aws::String>
    PresetWatermark& WithVerticalOffset(VerticalOffsetT&& value) { SetVerticalOffset(std::forward<VerticalOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A percentage that indicates how much you want a watermark to obscure the
     * video in the location where it appears. Valid values are 0 (the watermark is
     * invisible) to 100 (the watermark completely obscures the video in the specified
     * location). The datatype of <code>Opacity</code> is float.</p> <p>Elastic
     * Transcoder supports transparent .png graphics. If you use a transparent .png,
     * the transparent portion of the video appears as if you had specified a value of
     * 0 for <code>Opacity</code>. The .jpg file format doesn't support
     * transparency.</p>
     */
    inline const Aws::String& GetOpacity() const { return m_opacity; }
    inline bool OpacityHasBeenSet() const { return m_opacityHasBeenSet; }
    template<typename OpacityT = Aws::String>
    void SetOpacity(OpacityT&& value) { m_opacityHasBeenSet = true; m_opacity = std::forward<OpacityT>(value); }
    template<typename OpacityT = Aws::String>
    PresetWatermark& WithOpacity(OpacityT&& value) { SetOpacity(std::forward<OpacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that determines how Elastic Transcoder interprets values that you
     * specified for <code>HorizontalOffset</code>, <code>VerticalOffset</code>,
     * <code>MaxWidth</code>, and <code>MaxHeight</code>:</p> <ul> <li> <p>
     * <b>Content</b>: <code>HorizontalOffset</code> and <code>VerticalOffset</code>
     * values are calculated based on the borders of the video excluding black bars
     * added by Elastic Transcoder, if any. In addition, <code>MaxWidth</code> and
     * <code>MaxHeight</code>, if specified as a percentage, are calculated based on
     * the borders of the video excluding black bars added by Elastic Transcoder, if
     * any.</p> </li> <li> <p> <b>Frame</b>: <code>HorizontalOffset</code> and
     * <code>VerticalOffset</code> values are calculated based on the borders of the
     * video including black bars added by Elastic Transcoder, if any. In addition,
     * <code>MaxWidth</code> and <code>MaxHeight</code>, if specified as a percentage,
     * are calculated based on the borders of the video including black bars added by
     * Elastic Transcoder, if any.</p> </li> </ul>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    PresetWatermark& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_maxWidth;
    bool m_maxWidthHasBeenSet = false;

    Aws::String m_maxHeight;
    bool m_maxHeightHasBeenSet = false;

    Aws::String m_sizingPolicy;
    bool m_sizingPolicyHasBeenSet = false;

    Aws::String m_horizontalAlign;
    bool m_horizontalAlignHasBeenSet = false;

    Aws::String m_horizontalOffset;
    bool m_horizontalOffsetHasBeenSet = false;

    Aws::String m_verticalAlign;
    bool m_verticalAlignHasBeenSet = false;

    Aws::String m_verticalOffset;
    bool m_verticalOffsetHasBeenSet = false;

    Aws::String m_opacity;
    bool m_opacityHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
