/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteZoneCategory.h>
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
   * <p>Zone categories to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAvoidanceZoneCategory">AWS
   * API Reference</a></p>
   */
  class RouteAvoidanceZoneCategory
  {
  public:
    AWS_GEOROUTES_API RouteAvoidanceZoneCategory();
    AWS_GEOROUTES_API RouteAvoidanceZoneCategory(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteAvoidanceZoneCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Zone category to be avoided.</p>
     */
    inline const RouteZoneCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const RouteZoneCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(RouteZoneCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline RouteAvoidanceZoneCategory& WithCategory(const RouteZoneCategory& value) { SetCategory(value); return *this;}
    inline RouteAvoidanceZoneCategory& WithCategory(RouteZoneCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}
  private:

    RouteZoneCategory m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
