/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceUsage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetCapacityReservationUsageResponse
  {
  public:
    AWS_EC2_API GetCapacityReservationUsageResponse();
    AWS_EC2_API GetCapacityReservationUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetCapacityReservationUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetCapacityReservationUsageResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetCapacityReservationUsageResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetCapacityReservationUsageResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationId = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline GetCapacityReservationUsageResponse& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceType = value; }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceType = std::move(value); }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceType.assign(value); }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline GetCapacityReservationUsageResponse& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline GetCapacityReservationUsageResponse& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline GetCapacityReservationUsageResponse& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }

    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCount = value; }

    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline GetCapacityReservationUsageResponse& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}


    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }

    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCount = value; }

    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline GetCapacityReservationUsageResponse& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}


    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline const CapacityReservationState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline void SetState(const CapacityReservationState& value) { m_state = value; }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline void SetState(CapacityReservationState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline GetCapacityReservationUsageResponse& WithState(const CapacityReservationState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline GetCapacityReservationUsageResponse& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline const Aws::Vector<InstanceUsage>& GetInstanceUsages() const{ return m_instanceUsages; }

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline void SetInstanceUsages(const Aws::Vector<InstanceUsage>& value) { m_instanceUsages = value; }

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline void SetInstanceUsages(Aws::Vector<InstanceUsage>&& value) { m_instanceUsages = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(const Aws::Vector<InstanceUsage>& value) { SetInstanceUsages(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline GetCapacityReservationUsageResponse& WithInstanceUsages(Aws::Vector<InstanceUsage>&& value) { SetInstanceUsages(std::move(value)); return *this;}

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(const InstanceUsage& value) { m_instanceUsages.push_back(value); return *this; }

    /**
     * <p>Information about the Capacity Reservation usage.</p>
     */
    inline GetCapacityReservationUsageResponse& AddInstanceUsages(InstanceUsage&& value) { m_instanceUsages.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCapacityReservationUsageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::String m_capacityReservationId;

    Aws::String m_instanceType;

    int m_totalInstanceCount;

    int m_availableInstanceCount;

    CapacityReservationState m_state;

    Aws::Vector<InstanceUsage> m_instanceUsages;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
