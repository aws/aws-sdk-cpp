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
#include <aws/groundstation/model/BandwidthUnits.h>
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
   * <p>Object that describes the frequency bandwidth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/FrequencyBandwidth">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API FrequencyBandwidth
  {
  public:
    FrequencyBandwidth();
    FrequencyBandwidth(Aws::Utils::Json::JsonView jsonValue);
    FrequencyBandwidth& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline const BandwidthUnits& GetUnits() const{ return m_units; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline void SetUnits(const BandwidthUnits& value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline void SetUnits(BandwidthUnits&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline FrequencyBandwidth& WithUnits(const BandwidthUnits& value) { SetUnits(value); return *this;}

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline FrequencyBandwidth& WithUnits(BandwidthUnits&& value) { SetUnits(std::move(value)); return *this;}


    /**
     * <p>Frequency bandwidth value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Frequency bandwidth value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Frequency bandwidth value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Frequency bandwidth value.</p>
     */
    inline FrequencyBandwidth& WithValue(double value) { SetValue(value); return *this;}

  private:

    BandwidthUnits m_units;
    bool m_unitsHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
