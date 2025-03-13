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
   * <p>The vehicle License Plate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixVehicleLicensePlate">AWS
   * API Reference</a></p>
   */
  class RouteMatrixVehicleLicensePlate
  {
  public:
    AWS_GEOROUTES_API RouteMatrixVehicleLicensePlate() = default;
    AWS_GEOROUTES_API RouteMatrixVehicleLicensePlate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixVehicleLicensePlate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last character of the License Plate.</p>
     */
    inline const Aws::String& GetLastCharacter() const { return m_lastCharacter; }
    inline bool LastCharacterHasBeenSet() const { return m_lastCharacterHasBeenSet; }
    template<typename LastCharacterT = Aws::String>
    void SetLastCharacter(LastCharacterT&& value) { m_lastCharacterHasBeenSet = true; m_lastCharacter = std::forward<LastCharacterT>(value); }
    template<typename LastCharacterT = Aws::String>
    RouteMatrixVehicleLicensePlate& WithLastCharacter(LastCharacterT&& value) { SetLastCharacter(std::forward<LastCharacterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lastCharacter;
    bool m_lastCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
