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
   * Settings for a noise reducer filter<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducerFilterSettings">AWS
   * API Reference</a></p>
   */
  class NoiseReducerFilterSettings
  {
  public:
    AWS_MEDIACONVERT_API NoiseReducerFilterSettings();
    AWS_MEDIACONVERT_API NoiseReducerFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NoiseReducerFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline int GetStrength() const{ return m_strength; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline NoiseReducerFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}

  private:

    int m_strength;
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
