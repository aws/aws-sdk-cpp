/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardUIState.h>
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
   * <p>Sheet controls option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetControlsOption">AWS
   * API Reference</a></p>
   */
  class SheetControlsOption
  {
  public:
    AWS_QUICKSIGHT_API SheetControlsOption();
    AWS_QUICKSIGHT_API SheetControlsOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlsOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Visibility state.</p>
     */
    inline const DashboardUIState& GetVisibilityState() const{ return m_visibilityState; }

    /**
     * <p>Visibility state.</p>
     */
    inline bool VisibilityStateHasBeenSet() const { return m_visibilityStateHasBeenSet; }

    /**
     * <p>Visibility state.</p>
     */
    inline void SetVisibilityState(const DashboardUIState& value) { m_visibilityStateHasBeenSet = true; m_visibilityState = value; }

    /**
     * <p>Visibility state.</p>
     */
    inline void SetVisibilityState(DashboardUIState&& value) { m_visibilityStateHasBeenSet = true; m_visibilityState = std::move(value); }

    /**
     * <p>Visibility state.</p>
     */
    inline SheetControlsOption& WithVisibilityState(const DashboardUIState& value) { SetVisibilityState(value); return *this;}

    /**
     * <p>Visibility state.</p>
     */
    inline SheetControlsOption& WithVisibilityState(DashboardUIState&& value) { SetVisibilityState(std::move(value)); return *this;}

  private:

    DashboardUIState m_visibilityState;
    bool m_visibilityStateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
