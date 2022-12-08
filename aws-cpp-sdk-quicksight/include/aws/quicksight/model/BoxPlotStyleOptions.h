/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BoxPlotFillStyle.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The style options of the box plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotStyleOptions">AWS
   * API Reference</a></p>
   */
  class BoxPlotStyleOptions
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotStyleOptions();
    AWS_QUICKSIGHT_API BoxPlotStyleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotStyleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline const BoxPlotFillStyle& GetFillStyle() const{ return m_fillStyle; }

    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline bool FillStyleHasBeenSet() const { return m_fillStyleHasBeenSet; }

    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline void SetFillStyle(const BoxPlotFillStyle& value) { m_fillStyleHasBeenSet = true; m_fillStyle = value; }

    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline void SetFillStyle(BoxPlotFillStyle&& value) { m_fillStyleHasBeenSet = true; m_fillStyle = std::move(value); }

    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline BoxPlotStyleOptions& WithFillStyle(const BoxPlotFillStyle& value) { SetFillStyle(value); return *this;}

    /**
     * <p>The fill styles (solid, transparent) of the box plot.</p>
     */
    inline BoxPlotStyleOptions& WithFillStyle(BoxPlotFillStyle&& value) { SetFillStyle(std::move(value)); return *this;}

  private:

    BoxPlotFillStyle m_fillStyle;
    bool m_fillStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
