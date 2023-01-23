/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/OEMEphemeris.h>
#include <aws/groundstation/model/TLEEphemeris.h>
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
   * <p>Ephemeris data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisData">AWS
   * API Reference</a></p>
   */
  class EphemerisData
  {
  public:
    AWS_GROUNDSTATION_API EphemerisData();
    AWS_GROUNDSTATION_API EphemerisData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OEMEphemeris& GetOem() const{ return m_oem; }

    
    inline bool OemHasBeenSet() const { return m_oemHasBeenSet; }

    
    inline void SetOem(const OEMEphemeris& value) { m_oemHasBeenSet = true; m_oem = value; }

    
    inline void SetOem(OEMEphemeris&& value) { m_oemHasBeenSet = true; m_oem = std::move(value); }

    
    inline EphemerisData& WithOem(const OEMEphemeris& value) { SetOem(value); return *this;}

    
    inline EphemerisData& WithOem(OEMEphemeris&& value) { SetOem(std::move(value)); return *this;}


    
    inline const TLEEphemeris& GetTle() const{ return m_tle; }

    
    inline bool TleHasBeenSet() const { return m_tleHasBeenSet; }

    
    inline void SetTle(const TLEEphemeris& value) { m_tleHasBeenSet = true; m_tle = value; }

    
    inline void SetTle(TLEEphemeris&& value) { m_tleHasBeenSet = true; m_tle = std::move(value); }

    
    inline EphemerisData& WithTle(const TLEEphemeris& value) { SetTle(value); return *this;}

    
    inline EphemerisData& WithTle(TLEEphemeris&& value) { SetTle(std::move(value)); return *this;}

  private:

    OEMEphemeris m_oem;
    bool m_oemHasBeenSet = false;

    TLEEphemeris m_tle;
    bool m_tleHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
