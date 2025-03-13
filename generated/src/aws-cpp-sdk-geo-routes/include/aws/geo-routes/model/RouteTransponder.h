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
    AWS_GEOROUTES_API RouteTransponder() = default;
    AWS_GEOROUTES_API RouteTransponder(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTransponder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Names of the toll system collecting the toll.</p>
     */
    inline const Aws::String& GetSystemName() const { return m_systemName; }
    inline bool SystemNameHasBeenSet() const { return m_systemNameHasBeenSet; }
    template<typename SystemNameT = Aws::String>
    void SetSystemName(SystemNameT&& value) { m_systemNameHasBeenSet = true; m_systemName = std::forward<SystemNameT>(value); }
    template<typename SystemNameT = Aws::String>
    RouteTransponder& WithSystemName(SystemNameT&& value) { SetSystemName(std::forward<SystemNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_systemName;
    bool m_systemNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
