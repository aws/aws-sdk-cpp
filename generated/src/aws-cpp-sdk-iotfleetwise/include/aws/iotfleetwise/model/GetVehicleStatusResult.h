﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/VehicleStatus.h>
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
  class GetVehicleStatusResult
  {
  public:
    AWS_IOTFLEETWISE_API GetVehicleStatusResult();
    AWS_IOTFLEETWISE_API GetVehicleStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetVehicleStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Lists information about the state of the vehicle with deployed campaigns.
     * </p>
     */
    inline const Aws::Vector<VehicleStatus>& GetCampaigns() const{ return m_campaigns; }
    inline void SetCampaigns(const Aws::Vector<VehicleStatus>& value) { m_campaigns = value; }
    inline void SetCampaigns(Aws::Vector<VehicleStatus>&& value) { m_campaigns = std::move(value); }
    inline GetVehicleStatusResult& WithCampaigns(const Aws::Vector<VehicleStatus>& value) { SetCampaigns(value); return *this;}
    inline GetVehicleStatusResult& WithCampaigns(Aws::Vector<VehicleStatus>&& value) { SetCampaigns(std::move(value)); return *this;}
    inline GetVehicleStatusResult& AddCampaigns(const VehicleStatus& value) { m_campaigns.push_back(value); return *this; }
    inline GetVehicleStatusResult& AddCampaigns(VehicleStatus&& value) { m_campaigns.push_back(std::move(value)); return *this; }
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
    inline GetVehicleStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetVehicleStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetVehicleStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVehicleStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVehicleStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVehicleStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VehicleStatus> m_campaigns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
