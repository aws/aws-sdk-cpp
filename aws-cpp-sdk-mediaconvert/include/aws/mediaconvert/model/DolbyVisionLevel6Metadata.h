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
   * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
   * MaxCLL and MaxFALL values in your input with new values.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DolbyVisionLevel6Metadata">AWS
   * API Reference</a></p>
   */
  class DolbyVisionLevel6Metadata
  {
  public:
    AWS_MEDIACONVERT_API DolbyVisionLevel6Metadata();
    AWS_MEDIACONVERT_API DolbyVisionLevel6Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DolbyVisionLevel6Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Maximum Content Light Level. Static HDR metadata that corresponds to the
     * brightest pixel in the entire stream. Measured in nits.
     */
    inline int GetMaxCll() const{ return m_maxCll; }

    /**
     * Maximum Content Light Level. Static HDR metadata that corresponds to the
     * brightest pixel in the entire stream. Measured in nits.
     */
    inline bool MaxCllHasBeenSet() const { return m_maxCllHasBeenSet; }

    /**
     * Maximum Content Light Level. Static HDR metadata that corresponds to the
     * brightest pixel in the entire stream. Measured in nits.
     */
    inline void SetMaxCll(int value) { m_maxCllHasBeenSet = true; m_maxCll = value; }

    /**
     * Maximum Content Light Level. Static HDR metadata that corresponds to the
     * brightest pixel in the entire stream. Measured in nits.
     */
    inline DolbyVisionLevel6Metadata& WithMaxCll(int value) { SetMaxCll(value); return *this;}


    /**
     * Maximum Frame-Average Light Level. Static HDR metadata that corresponds to the
     * highest frame-average brightness in the entire stream. Measured in nits.
     */
    inline int GetMaxFall() const{ return m_maxFall; }

    /**
     * Maximum Frame-Average Light Level. Static HDR metadata that corresponds to the
     * highest frame-average brightness in the entire stream. Measured in nits.
     */
    inline bool MaxFallHasBeenSet() const { return m_maxFallHasBeenSet; }

    /**
     * Maximum Frame-Average Light Level. Static HDR metadata that corresponds to the
     * highest frame-average brightness in the entire stream. Measured in nits.
     */
    inline void SetMaxFall(int value) { m_maxFallHasBeenSet = true; m_maxFall = value; }

    /**
     * Maximum Frame-Average Light Level. Static HDR metadata that corresponds to the
     * highest frame-average brightness in the entire stream. Measured in nits.
     */
    inline DolbyVisionLevel6Metadata& WithMaxFall(int value) { SetMaxFall(value); return *this;}

  private:

    int m_maxCll;
    bool m_maxCllHasBeenSet = false;

    int m_maxFall;
    bool m_maxFallHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
