/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the pixels in an anomaly mask. For more information, see
   * <a>Anomaly</a>. <code>PixelAnomaly</code> is only returned by image segmentation
   * models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/PixelAnomaly">AWS
   * API Reference</a></p>
   */
  class PixelAnomaly
  {
  public:
    AWS_LOOKOUTFORVISION_API PixelAnomaly() = default;
    AWS_LOOKOUTFORVISION_API PixelAnomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API PixelAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage area of the image that the anomaly type covers.</p>
     */
    inline double GetTotalPercentageArea() const { return m_totalPercentageArea; }
    inline bool TotalPercentageAreaHasBeenSet() const { return m_totalPercentageAreaHasBeenSet; }
    inline void SetTotalPercentageArea(double value) { m_totalPercentageAreaHasBeenSet = true; m_totalPercentageArea = value; }
    inline PixelAnomaly& WithTotalPercentageArea(double value) { SetTotalPercentageArea(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A hex color value for the mask that covers an anomaly type. Each anomaly type
     * has a different mask color. The color maps to the color of the anomaly type used
     * in the training dataset. </p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    PixelAnomaly& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}
  private:

    double m_totalPercentageArea{0.0};
    bool m_totalPercentageAreaHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
