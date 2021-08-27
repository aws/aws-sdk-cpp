/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ImscStylePassthrough.h>
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
   * Settings specific to IMSC caption outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImscDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ImscDestinationSettings
  {
  public:
    ImscDestinationSettings();
    ImscDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    ImscDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline const ImscStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(const ImscStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(ImscStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(const ImscStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(ImscStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    ImscStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
