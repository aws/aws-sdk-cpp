/**
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
    AWS_IOTFLEETWISE_API GetVehicleStatusResult() = default;
    AWS_IOTFLEETWISE_API GetVehicleStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetVehicleStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Lists information about the state of the vehicle with deployed campaigns.
     * </p>
     */
    inline const Aws::Vector<VehicleStatus>& GetCampaigns() const { return m_campaigns; }
    template<typename CampaignsT = Aws::Vector<VehicleStatus>>
    void SetCampaigns(CampaignsT&& value) { m_campaignsHasBeenSet = true; m_campaigns = std::forward<CampaignsT>(value); }
    template<typename CampaignsT = Aws::Vector<VehicleStatus>>
    GetVehicleStatusResult& WithCampaigns(CampaignsT&& value) { SetCampaigns(std::forward<CampaignsT>(value)); return *this;}
    template<typename CampaignsT = VehicleStatus>
    GetVehicleStatusResult& AddCampaigns(CampaignsT&& value) { m_campaignsHasBeenSet = true; m_campaigns.emplace_back(std::forward<CampaignsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetVehicleStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVehicleStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VehicleStatus> m_campaigns;
    bool m_campaignsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
