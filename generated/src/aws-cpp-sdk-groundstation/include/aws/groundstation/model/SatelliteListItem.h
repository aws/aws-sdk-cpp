/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisMetaData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Item in a list of satellites.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/SatelliteListItem">AWS
   * API Reference</a></p>
   */
  class SatelliteListItem
  {
  public:
    AWS_GROUNDSTATION_API SatelliteListItem();
    AWS_GROUNDSTATION_API SatelliteListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API SatelliteListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current ephemeris being used to compute the trajectory of the
     * satellite.</p>
     */
    inline const EphemerisMetaData& GetCurrentEphemeris() const{ return m_currentEphemeris; }
    inline bool CurrentEphemerisHasBeenSet() const { return m_currentEphemerisHasBeenSet; }
    inline void SetCurrentEphemeris(const EphemerisMetaData& value) { m_currentEphemerisHasBeenSet = true; m_currentEphemeris = value; }
    inline void SetCurrentEphemeris(EphemerisMetaData&& value) { m_currentEphemerisHasBeenSet = true; m_currentEphemeris = std::move(value); }
    inline SatelliteListItem& WithCurrentEphemeris(const EphemerisMetaData& value) { SetCurrentEphemeris(value); return *this;}
    inline SatelliteListItem& WithCurrentEphemeris(EphemerisMetaData&& value) { SetCurrentEphemeris(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroundStations() const{ return m_groundStations; }
    inline bool GroundStationsHasBeenSet() const { return m_groundStationsHasBeenSet; }
    inline void SetGroundStations(const Aws::Vector<Aws::String>& value) { m_groundStationsHasBeenSet = true; m_groundStations = value; }
    inline void SetGroundStations(Aws::Vector<Aws::String>&& value) { m_groundStationsHasBeenSet = true; m_groundStations = std::move(value); }
    inline SatelliteListItem& WithGroundStations(const Aws::Vector<Aws::String>& value) { SetGroundStations(value); return *this;}
    inline SatelliteListItem& WithGroundStations(Aws::Vector<Aws::String>&& value) { SetGroundStations(std::move(value)); return *this;}
    inline SatelliteListItem& AddGroundStations(const Aws::String& value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(value); return *this; }
    inline SatelliteListItem& AddGroundStations(Aws::String&& value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(std::move(value)); return *this; }
    inline SatelliteListItem& AddGroundStations(const char* value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const{ return m_noradSatelliteID; }
    inline bool NoradSatelliteIDHasBeenSet() const { return m_noradSatelliteIDHasBeenSet; }
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteIDHasBeenSet = true; m_noradSatelliteID = value; }
    inline SatelliteListItem& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }
    inline SatelliteListItem& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}
    inline SatelliteListItem& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}
    inline SatelliteListItem& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = value; }
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::move(value); }
    inline void SetSatelliteId(const char* value) { m_satelliteIdHasBeenSet = true; m_satelliteId.assign(value); }
    inline SatelliteListItem& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}
    inline SatelliteListItem& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}
    inline SatelliteListItem& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}
    ///@}
  private:

    EphemerisMetaData m_currentEphemeris;
    bool m_currentEphemerisHasBeenSet = false;

    Aws::Vector<Aws::String> m_groundStations;
    bool m_groundStationsHasBeenSet = false;

    int m_noradSatelliteID;
    bool m_noradSatelliteIDHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
