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
#include <aws/groundstation/model/FrequencyUnits.h>
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
   * <p>Object that describes the frequency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Frequency">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API Frequency
  {
  public:
    Frequency();
    Frequency(Aws::Utils::Json::JsonView jsonValue);
    Frequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Frequency units.</p>
     */
    inline const FrequencyUnits& GetUnits() const{ return m_units; }

    /**
     * <p>Frequency units.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>Frequency units.</p>
     */
    inline void SetUnits(const FrequencyUnits& value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>Frequency units.</p>
     */
    inline void SetUnits(FrequencyUnits&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }

    /**
     * <p>Frequency units.</p>
     */
    inline Frequency& WithUnits(const FrequencyUnits& value) { SetUnits(value); return *this;}

    /**
     * <p>Frequency units.</p>
     */
    inline Frequency& WithUnits(FrequencyUnits&& value) { SetUnits(std::move(value)); return *this;}


    /**
     * <p>Frequency value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Frequency value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Frequency value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Frequency value.</p>
     */
    inline Frequency& WithValue(double value) { SetValue(value); return *this;}

  private:

    FrequencyUnits m_units;
    bool m_unitsHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
