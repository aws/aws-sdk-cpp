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
    AWS_GROUNDSTATION_API GetSatelliteResult();
    AWS_GROUNDSTATION_API GetSatelliteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetSatelliteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current ephemeris being used to compute the trajectory of the
     * satellite.</p>
     */
    inline const EphemerisMetaData& GetCurrentEphemeris() const{ return m_currentEphemeris; }
    inline void SetCurrentEphemeris(const EphemerisMetaData& value) { m_currentEphemeris = value; }
    inline void SetCurrentEphemeris(EphemerisMetaData&& value) { m_currentEphemeris = std::move(value); }
    inline GetSatelliteResult& WithCurrentEphemeris(const EphemerisMetaData& value) { SetCurrentEphemeris(value); return *this;}
    inline GetSatelliteResult& WithCurrentEphemeris(EphemerisMetaData&& value) { SetCurrentEphemeris(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ground stations to which the satellite is on-boarded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroundStations() const{ return m_groundStations; }
    inline void SetGroundStations(const Aws::Vector<Aws::String>& value) { m_groundStations = value; }
    inline void SetGroundStations(Aws::Vector<Aws::String>&& value) { m_groundStations = std::move(value); }
    inline GetSatelliteResult& WithGroundStations(const Aws::Vector<Aws::String>& value) { SetGroundStations(value); return *this;}
    inline GetSatelliteResult& WithGroundStations(Aws::Vector<Aws::String>&& value) { SetGroundStations(std::move(value)); return *this;}
    inline GetSatelliteResult& AddGroundStations(const Aws::String& value) { m_groundStations.push_back(value); return *this; }
    inline GetSatelliteResult& AddGroundStations(Aws::String&& value) { m_groundStations.push_back(std::move(value)); return *this; }
    inline GetSatelliteResult& AddGroundStations(const char* value) { m_groundStations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>NORAD satellite ID number.</p>
     */
    inline int GetNoradSatelliteID() const{ return m_noradSatelliteID; }
    inline void SetNoradSatelliteID(int value) { m_noradSatelliteID = value; }
    inline GetSatelliteResult& WithNoradSatelliteID(int value) { SetNoradSatelliteID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArn = value; }
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArn = std::move(value); }
    inline void SetSatelliteArn(const char* value) { m_satelliteArn.assign(value); }
    inline GetSatelliteResult& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}
    inline GetSatelliteResult& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}
    inline GetSatelliteResult& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteId = value; }
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteId = std::move(value); }
    inline void SetSatelliteId(const char* value) { m_satelliteId.assign(value); }
    inline GetSatelliteResult& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}
    inline GetSatelliteResult& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}
    inline GetSatelliteResult& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSatelliteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSatelliteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSatelliteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EphemerisMetaData m_currentEphemeris;

    Aws::Vector<Aws::String> m_groundStations;

    int m_noradSatelliteID;

    Aws::String m_satelliteArn;

    Aws::String m_satelliteId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
