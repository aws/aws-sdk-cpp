/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GROUNDSTATION_API Elevation
  {
  public:
    Elevation();
    Elevation(Aws::Utils::Json::JsonView jsonValue);
    Elevation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Elevation angle units.</p>
     */
    inline const AngleUnits& GetUnit() const{ return m_unit; }

    /**
     * <p>Elevation angle units.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Elevation angle units.</p>
     */
    inline void SetUnit(const AngleUnits& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Elevation angle units.</p>
     */
    inline void SetUnit(AngleUnits&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Elevation angle units.</p>
     */
    inline Elevation& WithUnit(const AngleUnits& value) { SetUnit(value); return *this;}

    /**
     * <p>Elevation angle units.</p>
     */
    inline Elevation& WithUnit(AngleUnits&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>Elevation angle value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Elevation angle value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Elevation angle value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Elevation angle value.</p>
     */
    inline Elevation& WithValue(double value) { SetValue(value); return *this;}

  private:

    AngleUnits m_unit;
    bool m_unitHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
