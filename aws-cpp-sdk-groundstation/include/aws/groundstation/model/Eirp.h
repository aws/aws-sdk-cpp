/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Eirp
  {
  public:
    AWS_GROUNDSTATION_API Eirp();
    AWS_GROUNDSTATION_API Eirp(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Eirp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Value of an EIRP. Valid values are between 20.0 to 50.0 dBW.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Value of an EIRP. Valid values are between 20.0 to 50.0 dBW.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value of an EIRP. Valid values are between 20.0 to 50.0 dBW.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value of an EIRP. Valid values are between 20.0 to 50.0 dBW.</p>
     */
    inline Eirp& WithValue(double value) { SetValue(value); return *this;}

  private:

    EirpUnits m_units;
    bool m_unitsHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
