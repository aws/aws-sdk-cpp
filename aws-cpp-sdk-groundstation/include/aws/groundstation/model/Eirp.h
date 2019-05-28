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
#include <aws/groundstation/model/EirpUnits.h>
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
   * <p>Object that represents EIRP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Eirp">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API Eirp
  {
  public:
    Eirp();
    Eirp(Aws::Utils::Json::JsonView jsonValue);
    Eirp& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Units of an EIRP.</p>
     */
    inline const EirpUnits& GetUnits() const{ return m_units; }

    /**
     * <p>Units of an EIRP.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>Units of an EIRP.</p>
     */
    inline void SetUnits(const EirpUnits& value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>Units of an EIRP.</p>
     */
    inline void SetUnits(EirpUnits&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }

    /**
     * <p>Units of an EIRP.</p>
     */
    inline Eirp& WithUnits(const EirpUnits& value) { SetUnits(value); return *this;}

    /**
     * <p>Units of an EIRP.</p>
     */
    inline Eirp& WithUnits(EirpUnits&& value) { SetUnits(std::move(value)); return *this;}


    /**
     * <p>Value of an EIRP.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Value of an EIRP.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value of an EIRP.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value of an EIRP.</p>
     */
    inline Eirp& WithValue(double value) { SetValue(value); return *this;}

  private:

    EirpUnits m_units;
    bool m_unitsHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
