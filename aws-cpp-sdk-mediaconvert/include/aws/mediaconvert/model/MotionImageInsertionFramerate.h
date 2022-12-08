/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * For motion overlays that don't have a built-in frame rate, specify the frame
   * rate of the overlay in frames per second, as a fraction. For example, specify 24
   * fps as 24/1. The overlay frame rate doesn't need to match the frame rate of the
   * underlying video.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MotionImageInsertionFramerate">AWS
   * API Reference</a></p>
   */
  class MotionImageInsertionFramerate
  {
  public:
    AWS_MEDIACONVERT_API MotionImageInsertionFramerate();
    AWS_MEDIACONVERT_API MotionImageInsertionFramerate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MotionImageInsertionFramerate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The bottom of the fraction that expresses your overlay frame rate. For example,
     * if your frame rate is 24 fps, set this value to 1.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * The bottom of the fraction that expresses your overlay frame rate. For example,
     * if your frame rate is 24 fps, set this value to 1.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * The bottom of the fraction that expresses your overlay frame rate. For example,
     * if your frame rate is 24 fps, set this value to 1.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * The bottom of the fraction that expresses your overlay frame rate. For example,
     * if your frame rate is 24 fps, set this value to 1.
     */
    inline MotionImageInsertionFramerate& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * The top of the fraction that expresses your overlay frame rate. For example, if
     * your frame rate is 24 fps, set this value to 24.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * The top of the fraction that expresses your overlay frame rate. For example, if
     * your frame rate is 24 fps, set this value to 24.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * The top of the fraction that expresses your overlay frame rate. For example, if
     * your frame rate is 24 fps, set this value to 24.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * The top of the fraction that expresses your overlay frame rate. For example, if
     * your frame rate is 24 fps, set this value to 24.
     */
    inline MotionImageInsertionFramerate& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}

  private:

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
