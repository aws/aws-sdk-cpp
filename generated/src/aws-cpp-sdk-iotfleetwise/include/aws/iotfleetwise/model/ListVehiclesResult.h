﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/VehicleSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListVehiclesResult
  {
  public:
    AWS_IOTFLEETWISE_API ListVehiclesResult();
    AWS_IOTFLEETWISE_API ListVehiclesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListVehiclesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of vehicles and information about them. </p>
     */
    inline const Aws::Vector<VehicleSummary>& GetVehicleSummaries() const{ return m_vehicleSummaries; }
    inline void SetVehicleSummaries(const Aws::Vector<VehicleSummary>& value) { m_vehicleSummaries = value; }
    inline void SetVehicleSummaries(Aws::Vector<VehicleSummary>&& value) { m_vehicleSummaries = std::move(value); }
    inline ListVehiclesResult& WithVehicleSummaries(const Aws::Vector<VehicleSummary>& value) { SetVehicleSummaries(value); return *this;}
    inline ListVehiclesResult& WithVehicleSummaries(Aws::Vector<VehicleSummary>&& value) { SetVehicleSummaries(std::move(value)); return *this;}
    inline ListVehiclesResult& AddVehicleSummaries(const VehicleSummary& value) { m_vehicleSummaries.push_back(value); return *this; }
    inline ListVehiclesResult& AddVehicleSummaries(VehicleSummary&& value) { m_vehicleSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVehiclesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVehiclesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVehiclesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVehiclesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVehiclesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVehiclesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VehicleSummary> m_vehicleSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
