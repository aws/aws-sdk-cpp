/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/SrtStylePassthrough.h>
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
   * SRT Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SrtDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API SrtDestinationSettings
  {
  public:
    SrtDestinationSettings();
    SrtDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    SrtDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline const SrtStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline void SetStylePassthrough(const SrtStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline void SetStylePassthrough(SrtStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline SrtDestinationSettings& WithStylePassthrough(const SrtStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Choose Enabled (ENABLED) to have MediaConvert use the font style, color, and
     * position information from the captions source in the input. Keep the default
     * value, Disabled (DISABLED), for simplified output captions.
     */
    inline SrtDestinationSettings& WithStylePassthrough(SrtStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    SrtStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
