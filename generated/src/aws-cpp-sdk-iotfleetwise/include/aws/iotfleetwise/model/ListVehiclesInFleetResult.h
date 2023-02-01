/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListVehiclesInFleetResult
  {
  public:
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult();
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVehicles() const{ return m_vehicles; }

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline void SetVehicles(const Aws::Vector<Aws::String>& value) { m_vehicles = value; }

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline void SetVehicles(Aws::Vector<Aws::String>&& value) { m_vehicles = std::move(value); }

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline ListVehiclesInFleetResult& WithVehicles(const Aws::Vector<Aws::String>& value) { SetVehicles(value); return *this;}

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline ListVehiclesInFleetResult& WithVehicles(Aws::Vector<Aws::String>&& value) { SetVehicles(std::move(value)); return *this;}

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline ListVehiclesInFleetResult& AddVehicles(const Aws::String& value) { m_vehicles.push_back(value); return *this; }

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline ListVehiclesInFleetResult& AddVehicles(Aws::String&& value) { m_vehicles.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline ListVehiclesInFleetResult& AddVehicles(const char* value) { m_vehicles.push_back(value); return *this; }


    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListVehiclesInFleetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListVehiclesInFleetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListVehiclesInFleetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_vehicles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
