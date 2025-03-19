/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AngleUnits.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Elevation angle of the satellite in the sky during a contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Elevation">AWS
   * API Reference</a></p>
   */
  class Elevation
  {
  public:
    AWS_GROUNDSTATION_API Elevation() = default;
    AWS_GROUNDSTATION_API Elevation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Elevation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Elevation angle units.</p>
     */
    inline AngleUnits GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(AngleUnits value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Elevation& WithUnit(AngleUnits value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Elevation angle value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Elevation& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    AngleUnits m_unit{AngleUnits::NOT_SET};
    bool m_unitHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
