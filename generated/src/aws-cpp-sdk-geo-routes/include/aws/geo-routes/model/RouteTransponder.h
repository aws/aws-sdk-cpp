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
   * <p>Transponders for which this toll can be applied.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransponder">AWS
   * API Reference</a></p>
   */
  class RouteTransponder
  {
  public:
    AWS_GEOROUTES_API RouteTransponder();
    AWS_GEOROUTES_API RouteTransponder(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTransponder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Names of the toll system collecting the toll.</p>
     */
    inline const Aws::String& GetSystemName() const{ return m_systemName; }
    inline bool SystemNameHasBeenSet() const { return m_systemNameHasBeenSet; }
    inline void SetSystemName(const Aws::String& value) { m_systemNameHasBeenSet = true; m_systemName = value; }
    inline void SetSystemName(Aws::String&& value) { m_systemNameHasBeenSet = true; m_systemName = std::move(value); }
    inline void SetSystemName(const char* value) { m_systemNameHasBeenSet = true; m_systemName.assign(value); }
    inline RouteTransponder& WithSystemName(const Aws::String& value) { SetSystemName(value); return *this;}
    inline RouteTransponder& WithSystemName(Aws::String&& value) { SetSystemName(std::move(value)); return *this;}
    inline RouteTransponder& WithSystemName(const char* value) { SetSystemName(value); return *this;}
    ///@}
  private:

    Aws::String m_systemName;
    bool m_systemNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
