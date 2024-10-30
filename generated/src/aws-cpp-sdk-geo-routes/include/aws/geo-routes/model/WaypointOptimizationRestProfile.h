/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
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
   * <p>Pre defined rest profiles for a driver schedule. The only currently supported
   * profile is EU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationRestProfile">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationRestProfile
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationRestProfile();
    AWS_GEOROUTES_API WaypointOptimizationRestProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationRestProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Pre defined rest profiles for a driver schedule. The only currently supported
     * profile is EU.</p>
     */
    inline const Aws::String& GetProfile() const{ return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(const Aws::String& value) { m_profileHasBeenSet = true; m_profile = value; }
    inline void SetProfile(Aws::String&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }
    inline void SetProfile(const char* value) { m_profileHasBeenSet = true; m_profile.assign(value); }
    inline WaypointOptimizationRestProfile& WithProfile(const Aws::String& value) { SetProfile(value); return *this;}
    inline WaypointOptimizationRestProfile& WithProfile(Aws::String&& value) { SetProfile(std::move(value)); return *this;}
    inline WaypointOptimizationRestProfile& WithProfile(const char* value) { SetProfile(value); return *this;}
    ///@}
  private:

    Aws::String m_profile;
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
