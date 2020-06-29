/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/TtmlStylePassthrough.h>
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
   * Settings specific to TTML caption outputs, including Pass style information
   * (TtmlStylePassthrough).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TtmlDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TtmlDestinationSettings
  {
  public:
    TtmlDestinationSettings();
    TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline const TtmlStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline void SetStylePassthrough(const TtmlStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline void SetStylePassthrough(TtmlStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline TtmlDestinationSettings& WithStylePassthrough(const TtmlStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Pass through style and position information from a TTML-like input source (TTML,
     * SMPTE-TT) to the TTML output.
     */
    inline TtmlDestinationSettings& WithStylePassthrough(TtmlStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    TtmlStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
