/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/LocationState.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class AddStreamGroupLocationsResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult();
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This value is the Amazon Resource Name (ARN) that uniquely identifies the
     * stream group resource. Format example: <code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }
    inline AddStreamGroupLocationsResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AddStreamGroupLocationsResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AddStreamGroupLocationsResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set of locations, including their name, current status, and
     * capacities. </p> <p> A location can be in one of the following states: </p> <ul>
     * <li> <p> <b>ACTIVATING</b>: Amazon GameLift Streams is preparing the location.
     * You cannot stream from, scale the capacity of, or remove this location yet. </p>
     * </li> <li> <p> <b>ACTIVE</b>: The location is provisioned with initial capacity.
     * You can now stream from, scale the capacity of, or remove this location. </p>
     * </li> <li> <p> <b>ERROR</b>: Amazon GameLift Streams failed to set up this
     * location. The StatusReason field describes the error. You can remove this
     * location and try to add it again. </p> </li> <li> <p> <b>REMOVING</b>: Amazon
     * GameLift Streams is working to remove this location. It releases all provisioned
     * capacity for this location in this stream group. </p> </li> </ul>
     */
    inline const Aws::Vector<LocationState>& GetLocations() const{ return m_locations; }
    inline void SetLocations(const Aws::Vector<LocationState>& value) { m_locations = value; }
    inline void SetLocations(Aws::Vector<LocationState>&& value) { m_locations = std::move(value); }
    inline AddStreamGroupLocationsResult& WithLocations(const Aws::Vector<LocationState>& value) { SetLocations(value); return *this;}
    inline AddStreamGroupLocationsResult& WithLocations(Aws::Vector<LocationState>&& value) { SetLocations(std::move(value)); return *this;}
    inline AddStreamGroupLocationsResult& AddLocations(const LocationState& value) { m_locations.push_back(value); return *this; }
    inline AddStreamGroupLocationsResult& AddLocations(LocationState&& value) { m_locations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddStreamGroupLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddStreamGroupLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddStreamGroupLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;

    Aws::Vector<LocationState> m_locations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
