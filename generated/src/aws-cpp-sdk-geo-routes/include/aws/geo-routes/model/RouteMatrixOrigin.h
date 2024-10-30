/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixOriginOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The start position for the route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixOrigin">AWS
   * API Reference</a></p>
   */
  class RouteMatrixOrigin
  {
  public:
    AWS_GEOROUTES_API RouteMatrixOrigin();
    AWS_GEOROUTES_API RouteMatrixOrigin(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixOrigin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const RouteMatrixOriginOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const RouteMatrixOriginOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(RouteMatrixOriginOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline RouteMatrixOrigin& WithOptions(const RouteMatrixOriginOptions& value) { SetOptions(value); return *this;}
    inline RouteMatrixOrigin& WithOptions(RouteMatrixOriginOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline RouteMatrixOrigin& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline RouteMatrixOrigin& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline RouteMatrixOrigin& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}
  private:

    RouteMatrixOriginOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
