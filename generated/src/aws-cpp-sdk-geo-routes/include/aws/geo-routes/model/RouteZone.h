/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteZoneCategory.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteZone">AWS
   * API Reference</a></p>
   */
  class RouteZone
  {
  public:
    AWS_GEOROUTES_API RouteZone();
    AWS_GEOROUTES_API RouteZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zone category.</p>
     */
    inline const RouteZoneCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const RouteZoneCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(RouteZoneCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline RouteZone& WithCategory(const RouteZoneCategory& value) { SetCategory(value); return *this;}
    inline RouteZone& WithCategory(RouteZoneCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zone.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RouteZone& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RouteZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RouteZone& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    RouteZoneCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
