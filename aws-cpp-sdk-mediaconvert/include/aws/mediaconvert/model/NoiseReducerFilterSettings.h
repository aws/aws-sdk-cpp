/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MEDIACONVERT_API NoiseReducerFilterSettings
  {
  public:
    NoiseReducerFilterSettings();
    NoiseReducerFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    NoiseReducerFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_strengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
