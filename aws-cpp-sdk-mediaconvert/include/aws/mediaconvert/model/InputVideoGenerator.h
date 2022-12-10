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
   * When you include Video generator, MediaConvert creates a video input with black
   * frames. Use this setting if you do not have a video input or if you want to add
   * black video frames before, or after, other inputs. You can specify Video
   * generator, or you can specify an Input file, but you cannot specify both. For
   * more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-generator.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputVideoGenerator">AWS
   * API Reference</a></p>
   */
  class InputVideoGenerator
  {
  public:
    AWS_MEDIACONVERT_API InputVideoGenerator();
    AWS_MEDIACONVERT_API InputVideoGenerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputVideoGenerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify an integer value for Black video duration from 50 to 86400000 to
     * generate a black video input for that many milliseconds. Required when you
     * include Video generator.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * Specify an integer value for Black video duration from 50 to 86400000 to
     * generate a black video input for that many milliseconds. Required when you
     * include Video generator.
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * Specify an integer value for Black video duration from 50 to 86400000 to
     * generate a black video input for that many milliseconds. Required when you
     * include Video generator.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * Specify an integer value for Black video duration from 50 to 86400000 to
     * generate a black video input for that many milliseconds. Required when you
     * include Video generator.
     */
    inline InputVideoGenerator& WithDuration(int value) { SetDuration(value); return *this;}

  private:

    int m_duration;
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
