/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FreeFormLayoutCanvasSizeOptions.h>
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
   * <p>The options that determine the default settings of a free-form layout
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFreeFormLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultFreeFormLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultFreeFormLayoutConfiguration();
    AWS_QUICKSIGHT_API DefaultFreeFormLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFreeFormLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline const FreeFormLayoutCanvasSizeOptions& GetCanvasSizeOptions() const{ return m_canvasSizeOptions; }

    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }

    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline void SetCanvasSizeOptions(const FreeFormLayoutCanvasSizeOptions& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = value; }

    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline void SetCanvasSizeOptions(FreeFormLayoutCanvasSizeOptions&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::move(value); }

    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline DefaultFreeFormLayoutConfiguration& WithCanvasSizeOptions(const FreeFormLayoutCanvasSizeOptions& value) { SetCanvasSizeOptions(value); return *this;}

    /**
     * <p>Determines the screen canvas size options for a free-form layout.</p>
     */
    inline DefaultFreeFormLayoutConfiguration& WithCanvasSizeOptions(FreeFormLayoutCanvasSizeOptions&& value) { SetCanvasSizeOptions(std::move(value)); return *this;}

  private:

    FreeFormLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
