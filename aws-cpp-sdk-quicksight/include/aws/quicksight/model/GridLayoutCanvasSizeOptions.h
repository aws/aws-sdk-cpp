/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GridLayoutScreenCanvasSizeOptions.h>
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
   * <p>Configuration options for the canvas of a grid layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class GridLayoutCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API GridLayoutCanvasSizeOptions();
    AWS_QUICKSIGHT_API GridLayoutCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GridLayoutCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline const GridLayoutScreenCanvasSizeOptions& GetScreenCanvasSizeOptions() const{ return m_screenCanvasSizeOptions; }

    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline bool ScreenCanvasSizeOptionsHasBeenSet() const { return m_screenCanvasSizeOptionsHasBeenSet; }

    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline void SetScreenCanvasSizeOptions(const GridLayoutScreenCanvasSizeOptions& value) { m_screenCanvasSizeOptionsHasBeenSet = true; m_screenCanvasSizeOptions = value; }

    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline void SetScreenCanvasSizeOptions(GridLayoutScreenCanvasSizeOptions&& value) { m_screenCanvasSizeOptionsHasBeenSet = true; m_screenCanvasSizeOptions = std::move(value); }

    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline GridLayoutCanvasSizeOptions& WithScreenCanvasSizeOptions(const GridLayoutScreenCanvasSizeOptions& value) { SetScreenCanvasSizeOptions(value); return *this;}

    /**
     * <p>The options that determine the sizing of the canvas used in a grid
     * layout.</p>
     */
    inline GridLayoutCanvasSizeOptions& WithScreenCanvasSizeOptions(GridLayoutScreenCanvasSizeOptions&& value) { SetScreenCanvasSizeOptions(std::move(value)); return *this;}

  private:

    GridLayoutScreenCanvasSizeOptions m_screenCanvasSizeOptions;
    bool m_screenCanvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
