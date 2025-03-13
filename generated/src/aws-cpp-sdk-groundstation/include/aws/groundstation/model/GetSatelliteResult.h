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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatelliteResponse">AWS
   * API Reference</a></p>
   */
  class GetSatelliteResult
  {
  public:
    AWS_GROUNDSTATION_API GetSatelliteResult() = default;
    AWS_GROUNDSTATION_API GetSatelliteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetSatelliteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current ephemeris being used to compute the trajectory of the
     * satellite.</p>
     */
    inline const EphemerisMetaData& GetCurrentEphemeris() const { return m_currentEphemeris; }
    template<typename CurrentEphemerisT = EphemerisMetaData>
    void SetCurrentEphemeris(CurrentEphemerisT&& value) { m_currentEphemerisHasBeenSet = true; m_currentEphemeris = std::forward<CurrentEphemerisT>(value); }
    template<typename CurrentEphemerisT = EphemerisMetaData>
    GetSatelliteResult& WithCurrentEphemeris(CurrentEphemerisT&& value) { SetCurrentEphemeris(std::forward<CurrentEphemerisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroundStations() const { return m_groundStations; }
    template<typename GroundStationsT = Aws::Vector<Aws::String>>
    void SetGroundStations(GroundStationsT&& value) { m_groundStationsHasBeenSet = true; m_groundStations = std::forward<GroundStationsT>(value); }
    template<typename GroundStationsT = Aws::Vector<Aws::String>>
    GetSatelliteResult& WithGroundStations(GroundStationsT&& value) { SetGroundStations(std::forward<GroundStationsT>(value)); return *this;}
    template<typename GroundStationsT = Aws::String>
    GetSatelliteResult& AddGroundStations(GroundStationsT&& value) { m_groundStationsHasBeenSet = true; m_groundStations.emplace_back(std::forward<GroundStationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const { return m_noradSatelliteID; }
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteIDHasBeenSet = true; m_noradSatelliteID = value; }
    inline GetSatelliteResult& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const { return m_satelliteArn; }
    template<typename SatelliteArnT = Aws::String>
    void SetSatelliteArn(SatelliteArnT&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::forward<SatelliteArnT>(value); }
    template<typename SatelliteArnT = Aws::String>
    GetSatelliteResult& WithSatelliteArn(SatelliteArnT&& value) { SetSatelliteArn(std::forward<SatelliteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const { return m_satelliteId; }
    template<typename SatelliteIdT = Aws::String>
    void SetSatelliteId(SatelliteIdT&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::forward<SatelliteIdT>(value); }
    template<typename SatelliteIdT = Aws::String>
    GetSatelliteResult& WithSatelliteId(SatelliteIdT&& value) { SetSatelliteId(std::forward<SatelliteIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSatelliteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EphemerisMetaData m_currentEphemeris;
    bool m_currentEphemerisHasBeenSet = false;

    Aws::Vector<Aws::String> m_groundStations;
    bool m_groundStationsHasBeenSet = false;

    int m_noradSatelliteID{0};
    bool m_noradSatelliteIDHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
