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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TemporalFilterPostFilterSharpening.h>
#include <aws/medialive/model/TemporalFilterStrength.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Temporal Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TemporalFilterSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API TemporalFilterSettings
  {
  public:
    TemporalFilterSettings();
    TemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    TemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline const TemporalFilterPostFilterSharpening& GetPostFilterSharpening() const{ return m_postFilterSharpening; }

    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline bool PostFilterSharpeningHasBeenSet() const { return m_postFilterSharpeningHasBeenSet; }

    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline void SetPostFilterSharpening(const TemporalFilterPostFilterSharpening& value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = value; }

    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline void SetPostFilterSharpening(TemporalFilterPostFilterSharpening&& value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = std::move(value); }

    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline TemporalFilterSettings& WithPostFilterSharpening(const TemporalFilterPostFilterSharpening& value) { SetPostFilterSharpening(value); return *this;}

    /**
     * If set to "ENABLED," applies post-filter sharpening to improve visual quality.
     * This is most beneficial when using a noisy or compressed input source and low
     * output bitrates.
     */
    inline TemporalFilterSettings& WithPostFilterSharpening(TemporalFilterPostFilterSharpening&& value) { SetPostFilterSharpening(std::move(value)); return *this;}


    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline const TemporalFilterStrength& GetStrength() const{ return m_strength; }

    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline void SetStrength(const TemporalFilterStrength& value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline void SetStrength(TemporalFilterStrength&& value) { m_strengthHasBeenSet = true; m_strength = std::move(value); }

    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline TemporalFilterSettings& WithStrength(const TemporalFilterStrength& value) { SetStrength(value); return *this;}

    /**
     * Filter strength. A higher value produces stronger filtering.
     */
    inline TemporalFilterSettings& WithStrength(TemporalFilterStrength&& value) { SetStrength(std::move(value)); return *this;}

  private:

    TemporalFilterPostFilterSharpening m_postFilterSharpening;
    bool m_postFilterSharpeningHasBeenSet;

    TemporalFilterStrength m_strength;
    bool m_strengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
