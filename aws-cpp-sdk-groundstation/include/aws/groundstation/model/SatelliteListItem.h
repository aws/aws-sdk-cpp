/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
  class AWS_GROUNDSTATION_API SatelliteListItem
  {
  public:
    SatelliteListItem();
    SatelliteListItem(Aws::Utils::Json::JsonView jsonValue);
    SatelliteListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroundStations() const{ return m_groundStations; }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline bool GroundStationsHasBeenSet() const { return m_groundStationsHasBeenSet; }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline void SetGroundStations(const Aws::Vector<Aws::String>& value) { m_groundStationsHasBeenSet = true; m_groundStations = value; }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline void SetGroundStations(Aws::Vector<Aws::String>&& value) { m_groundStationsHasBeenSet = true; m_groundStations = std::move(value); }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline SatelliteListItem& WithGroundStations(const Aws::Vector<Aws::String>& value) { SetGroundStations(value); return *this;}

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline SatelliteListItem& WithGroundStations(Aws::Vector<Aws::String>&& value) { SetGroundStations(std::move(value)); return *this;}

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline SatelliteListItem& AddGroundStations(const Aws::String& value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(value); return *this; }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline SatelliteListItem& AddGroundStations(Aws::String&& value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline SatelliteListItem& AddGroundStations(const char* value) { m_groundStationsHasBeenSet = true; m_groundStations.push_back(value); return *this; }


    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const{ return m_noradSatelliteID; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline bool NoradSatelliteIDHasBeenSet() const { return m_noradSatelliteIDHasBeenSet; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteIDHasBeenSet = true; m_noradSatelliteID = value; }

    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline SatelliteListItem& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}


    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}


    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = value; }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::move(value); }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline void SetSatelliteId(const char* value) { m_satelliteIdHasBeenSet = true; m_satelliteId.assign(value); }

    /**
     * <p>UUID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}

    /**
     * <p>UUID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}

    /**
     * <p>UUID of a satellite.</p>
     */
    inline SatelliteListItem& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_groundStations;
    bool m_groundStationsHasBeenSet;

    int m_noradSatelliteID;
    bool m_noradSatelliteIDHasBeenSet;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
