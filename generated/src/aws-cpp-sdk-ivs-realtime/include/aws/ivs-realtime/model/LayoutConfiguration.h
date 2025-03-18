/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/GridConfiguration.h>
#include <aws/ivs-realtime/model/PipConfiguration.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Configuration information of supported layouts for server-side
   * composition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/LayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class LayoutConfiguration
  {
  public:
    AWS_IVSREALTIME_API LayoutConfiguration() = default;
    AWS_IVSREALTIME_API LayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API LayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration related to grid layout. Default: Grid layout.</p>
     */
    inline const GridConfiguration& GetGrid() const { return m_grid; }
    inline bool GridHasBeenSet() const { return m_gridHasBeenSet; }
    template<typename GridT = GridConfiguration>
    void SetGrid(GridT&& value) { m_gridHasBeenSet = true; m_grid = std::forward<GridT>(value); }
    template<typename GridT = GridConfiguration>
    LayoutConfiguration& WithGrid(GridT&& value) { SetGrid(std::forward<GridT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration related to PiP layout.</p>
     */
    inline const PipConfiguration& GetPip() const { return m_pip; }
    inline bool PipHasBeenSet() const { return m_pipHasBeenSet; }
    template<typename PipT = PipConfiguration>
    void SetPip(PipT&& value) { m_pipHasBeenSet = true; m_pip = std::forward<PipT>(value); }
    template<typename PipT = PipConfiguration>
    LayoutConfiguration& WithPip(PipT&& value) { SetPip(std::forward<PipT>(value)); return *this;}
    ///@}
  private:

    GridConfiguration m_grid;
    bool m_gridHasBeenSet = false;

    PipConfiguration m_pip;
    bool m_pipHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
