/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Caption Rectangle<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionRectangle">AWS
   * API Reference</a></p>
   */
  class CaptionRectangle
  {
  public:
    AWS_MEDIALIVE_API CaptionRectangle();
    AWS_MEDIALIVE_API CaptionRectangle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionRectangle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * See the description in leftOffset.
For height, specify the entire height of the
     * rectangle as a percentage of the underlying frame height. For example, \"80\"
     * means the rectangle height is 80% of the underlying frame height. The topOffset
     * and rectangleHeight must add up to 100% or less.
This field corresponds to
     * tts:extent - Y in the TTML standard.
     */
    inline double GetHeight() const{ return m_height; }

    /**
     * See the description in leftOffset.
For height, specify the entire height of the
     * rectangle as a percentage of the underlying frame height. For example, \"80\"
     * means the rectangle height is 80% of the underlying frame height. The topOffset
     * and rectangleHeight must add up to 100% or less.
This field corresponds to
     * tts:extent - Y in the TTML standard.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * See the description in leftOffset.
For height, specify the entire height of the
     * rectangle as a percentage of the underlying frame height. For example, \"80\"
     * means the rectangle height is 80% of the underlying frame height. The topOffset
     * and rectangleHeight must add up to 100% or less.
This field corresponds to
     * tts:extent - Y in the TTML standard.
     */
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * See the description in leftOffset.
For height, specify the entire height of the
     * rectangle as a percentage of the underlying frame height. For example, \"80\"
     * means the rectangle height is 80% of the underlying frame height. The topOffset
     * and rectangleHeight must add up to 100% or less.
This field corresponds to
     * tts:extent - Y in the TTML standard.
     */
    inline CaptionRectangle& WithHeight(double value) { SetHeight(value); return *this;}


    /**
     * Applies only if you plan to convert these source captions to EBU-TT-D or TTML in
     * an output. (Make sure to leave the default if you don't have either of these
     * formats in the output.) You can define a display rectangle for the captions that
     * is smaller than the underlying video frame. You define the rectangle by
     * specifying the position of the left edge, top edge, bottom edge, and right edge
     * of the rectangle, all within the underlying video frame. The units for the
     * measurements are percentages.
If you specify a value for one of these fields,
     * you must specify a value for all of them.
For leftOffset, specify the position
     * of the left edge of the rectangle, as a percentage of the underlying frame
     * width, and relative to the left edge of the frame. For example, \"10\" means the
     * measurement is 10% of the underlying frame width. The rectangle left edge starts
     * at that position from the left edge of the frame.
This field corresponds to
     * tts:origin - X in the TTML standard.
     */
    inline double GetLeftOffset() const{ return m_leftOffset; }

    /**
     * Applies only if you plan to convert these source captions to EBU-TT-D or TTML in
     * an output. (Make sure to leave the default if you don't have either of these
     * formats in the output.) You can define a display rectangle for the captions that
     * is smaller than the underlying video frame. You define the rectangle by
     * specifying the position of the left edge, top edge, bottom edge, and right edge
     * of the rectangle, all within the underlying video frame. The units for the
     * measurements are percentages.
If you specify a value for one of these fields,
     * you must specify a value for all of them.
For leftOffset, specify the position
     * of the left edge of the rectangle, as a percentage of the underlying frame
     * width, and relative to the left edge of the frame. For example, \"10\" means the
     * measurement is 10% of the underlying frame width. The rectangle left edge starts
     * at that position from the left edge of the frame.
This field corresponds to
     * tts:origin - X in the TTML standard.
     */
    inline bool LeftOffsetHasBeenSet() const { return m_leftOffsetHasBeenSet; }

    /**
     * Applies only if you plan to convert these source captions to EBU-TT-D or TTML in
     * an output. (Make sure to leave the default if you don't have either of these
     * formats in the output.) You can define a display rectangle for the captions that
     * is smaller than the underlying video frame. You define the rectangle by
     * specifying the position of the left edge, top edge, bottom edge, and right edge
     * of the rectangle, all within the underlying video frame. The units for the
     * measurements are percentages.
If you specify a value for one of these fields,
     * you must specify a value for all of them.
For leftOffset, specify the position
     * of the left edge of the rectangle, as a percentage of the underlying frame
     * width, and relative to the left edge of the frame. For example, \"10\" means the
     * measurement is 10% of the underlying frame width. The rectangle left edge starts
     * at that position from the left edge of the frame.
This field corresponds to
     * tts:origin - X in the TTML standard.
     */
    inline void SetLeftOffset(double value) { m_leftOffsetHasBeenSet = true; m_leftOffset = value; }

    /**
     * Applies only if you plan to convert these source captions to EBU-TT-D or TTML in
     * an output. (Make sure to leave the default if you don't have either of these
     * formats in the output.) You can define a display rectangle for the captions that
     * is smaller than the underlying video frame. You define the rectangle by
     * specifying the position of the left edge, top edge, bottom edge, and right edge
     * of the rectangle, all within the underlying video frame. The units for the
     * measurements are percentages.
If you specify a value for one of these fields,
     * you must specify a value for all of them.
For leftOffset, specify the position
     * of the left edge of the rectangle, as a percentage of the underlying frame
     * width, and relative to the left edge of the frame. For example, \"10\" means the
     * measurement is 10% of the underlying frame width. The rectangle left edge starts
     * at that position from the left edge of the frame.
This field corresponds to
     * tts:origin - X in the TTML standard.
     */
    inline CaptionRectangle& WithLeftOffset(double value) { SetLeftOffset(value); return *this;}


    /**
     * See the description in leftOffset.
For topOffset, specify the position of the
     * top edge of the rectangle, as a percentage of the underlying frame height, and
     * relative to the top edge of the frame. For example, \"10\" means the measurement
     * is 10% of the underlying frame height. The rectangle top edge starts at that
     * position from the top edge of the frame.
This field corresponds to tts:origin -
     * Y in the TTML standard.
     */
    inline double GetTopOffset() const{ return m_topOffset; }

    /**
     * See the description in leftOffset.
For topOffset, specify the position of the
     * top edge of the rectangle, as a percentage of the underlying frame height, and
     * relative to the top edge of the frame. For example, \"10\" means the measurement
     * is 10% of the underlying frame height. The rectangle top edge starts at that
     * position from the top edge of the frame.
This field corresponds to tts:origin -
     * Y in the TTML standard.
     */
    inline bool TopOffsetHasBeenSet() const { return m_topOffsetHasBeenSet; }

    /**
     * See the description in leftOffset.
For topOffset, specify the position of the
     * top edge of the rectangle, as a percentage of the underlying frame height, and
     * relative to the top edge of the frame. For example, \"10\" means the measurement
     * is 10% of the underlying frame height. The rectangle top edge starts at that
     * position from the top edge of the frame.
This field corresponds to tts:origin -
     * Y in the TTML standard.
     */
    inline void SetTopOffset(double value) { m_topOffsetHasBeenSet = true; m_topOffset = value; }

    /**
     * See the description in leftOffset.
For topOffset, specify the position of the
     * top edge of the rectangle, as a percentage of the underlying frame height, and
     * relative to the top edge of the frame. For example, \"10\" means the measurement
     * is 10% of the underlying frame height. The rectangle top edge starts at that
     * position from the top edge of the frame.
This field corresponds to tts:origin -
     * Y in the TTML standard.
     */
    inline CaptionRectangle& WithTopOffset(double value) { SetTopOffset(value); return *this;}


    /**
     * See the description in leftOffset.
For width, specify the entire width of the
     * rectangle as a percentage of the underlying frame width. For example, \"80\"
     * means the rectangle width is 80% of the underlying frame width. The leftOffset
     * and rectangleWidth must add up to 100% or less.
This field corresponds to
     * tts:extent - X in the TTML standard.
     */
    inline double GetWidth() const{ return m_width; }

    /**
     * See the description in leftOffset.
For width, specify the entire width of the
     * rectangle as a percentage of the underlying frame width. For example, \"80\"
     * means the rectangle width is 80% of the underlying frame width. The leftOffset
     * and rectangleWidth must add up to 100% or less.
This field corresponds to
     * tts:extent - X in the TTML standard.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * See the description in leftOffset.
For width, specify the entire width of the
     * rectangle as a percentage of the underlying frame width. For example, \"80\"
     * means the rectangle width is 80% of the underlying frame width. The leftOffset
     * and rectangleWidth must add up to 100% or less.
This field corresponds to
     * tts:extent - X in the TTML standard.
     */
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * See the description in leftOffset.
For width, specify the entire width of the
     * rectangle as a percentage of the underlying frame width. For example, \"80\"
     * means the rectangle width is 80% of the underlying frame width. The leftOffset
     * and rectangleWidth must add up to 100% or less.
This field corresponds to
     * tts:extent - X in the TTML standard.
     */
    inline CaptionRectangle& WithWidth(double value) { SetWidth(value); return *this;}

  private:

    double m_height;
    bool m_heightHasBeenSet = false;

    double m_leftOffset;
    bool m_leftOffsetHasBeenSet = false;

    double m_topOffset;
    bool m_topOffsetHasBeenSet = false;

    double m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
