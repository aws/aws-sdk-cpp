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
    AWS_IVSREALTIME_API LayoutConfiguration();
    AWS_IVSREALTIME_API LayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API LayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration related to grid layout. Default: Grid layout.</p>
     */
    inline const GridConfiguration& GetGrid() const{ return m_grid; }
    inline bool GridHasBeenSet() const { return m_gridHasBeenSet; }
    inline void SetGrid(const GridConfiguration& value) { m_gridHasBeenSet = true; m_grid = value; }
    inline void SetGrid(GridConfiguration&& value) { m_gridHasBeenSet = true; m_grid = std::move(value); }
    inline LayoutConfiguration& WithGrid(const GridConfiguration& value) { SetGrid(value); return *this;}
    inline LayoutConfiguration& WithGrid(GridConfiguration&& value) { SetGrid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration related to PiP layout.</p>
     */
    inline const PipConfiguration& GetPip() const{ return m_pip; }
    inline bool PipHasBeenSet() const { return m_pipHasBeenSet; }
    inline void SetPip(const PipConfiguration& value) { m_pipHasBeenSet = true; m_pip = value; }
    inline void SetPip(PipConfiguration&& value) { m_pipHasBeenSet = true; m_pip = std::move(value); }
    inline LayoutConfiguration& WithPip(const PipConfiguration& value) { SetPip(value); return *this;}
    inline LayoutConfiguration& WithPip(PipConfiguration&& value) { SetPip(std::move(value)); return *this;}
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
