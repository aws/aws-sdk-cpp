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
   * <p>License plate information of the vehicle. Currently, only the last character
   * is used where license plate based controlled access is enforced.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleLicensePlate">AWS
   * API Reference</a></p>
   */
  class RouteVehicleLicensePlate
  {
  public:
    AWS_GEOROUTES_API RouteVehicleLicensePlate();
    AWS_GEOROUTES_API RouteVehicleLicensePlate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleLicensePlate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last character of the License Plate.</p>
     */
    inline const Aws::String& GetLastCharacter() const{ return m_lastCharacter; }
    inline bool LastCharacterHasBeenSet() const { return m_lastCharacterHasBeenSet; }
    inline void SetLastCharacter(const Aws::String& value) { m_lastCharacterHasBeenSet = true; m_lastCharacter = value; }
    inline void SetLastCharacter(Aws::String&& value) { m_lastCharacterHasBeenSet = true; m_lastCharacter = std::move(value); }
    inline void SetLastCharacter(const char* value) { m_lastCharacterHasBeenSet = true; m_lastCharacter.assign(value); }
    inline RouteVehicleLicensePlate& WithLastCharacter(const Aws::String& value) { SetLastCharacter(value); return *this;}
    inline RouteVehicleLicensePlate& WithLastCharacter(Aws::String&& value) { SetLastCharacter(std::move(value)); return *this;}
    inline RouteVehicleLicensePlate& WithLastCharacter(const char* value) { SetLastCharacter(value); return *this;}
    ///@}
  private:

    Aws::String m_lastCharacter;
    bool m_lastCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
