/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NegativeValueDisplayMode.h>
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
   * <p>The options that determine the negative value configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NegativeValueConfiguration">AWS
   * API Reference</a></p>
   */
  class NegativeValueConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NegativeValueConfiguration();
    AWS_QUICKSIGHT_API NegativeValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NegativeValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline const NegativeValueDisplayMode& GetDisplayMode() const{ return m_displayMode; }

    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline bool DisplayModeHasBeenSet() const { return m_displayModeHasBeenSet; }

    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline void SetDisplayMode(const NegativeValueDisplayMode& value) { m_displayModeHasBeenSet = true; m_displayMode = value; }

    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline void SetDisplayMode(NegativeValueDisplayMode&& value) { m_displayModeHasBeenSet = true; m_displayMode = std::move(value); }

    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline NegativeValueConfiguration& WithDisplayMode(const NegativeValueDisplayMode& value) { SetDisplayMode(value); return *this;}

    /**
     * <p>Determines the display mode of the negative value configuration.</p>
     */
    inline NegativeValueConfiguration& WithDisplayMode(NegativeValueDisplayMode&& value) { SetDisplayMode(std::move(value)); return *this;}

  private:

    NegativeValueDisplayMode m_displayMode;
    bool m_displayModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
