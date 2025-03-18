﻿/**
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
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult() = default;
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This value is the Amazon Resource Name (ARN) that uniquely identifies the
     * stream group resource. Format example: <code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    AddStreamGroupLocationsResult& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
    inline const Aws::Vector<LocationState>& GetLocations() const { return m_locations; }
    template<typename LocationsT = Aws::Vector<LocationState>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<LocationState>>
    AddStreamGroupLocationsResult& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = LocationState>
    AddStreamGroupLocationsResult& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddStreamGroupLocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<LocationState> m_locations;
    bool m_locationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
