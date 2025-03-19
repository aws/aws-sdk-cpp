/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CampaignSummary.h>
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
  class ListCampaignsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListCampaignsResult() = default;
    AWS_IOTFLEETWISE_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline const Aws::Vector<CampaignSummary>& GetCampaignSummaries() const { return m_campaignSummaries; }
    template<typename CampaignSummariesT = Aws::Vector<CampaignSummary>>
    void SetCampaignSummaries(CampaignSummariesT&& value) { m_campaignSummariesHasBeenSet = true; m_campaignSummaries = std::forward<CampaignSummariesT>(value); }
    template<typename CampaignSummariesT = Aws::Vector<CampaignSummary>>
    ListCampaignsResult& WithCampaignSummaries(CampaignSummariesT&& value) { SetCampaignSummaries(std::forward<CampaignSummariesT>(value)); return *this;}
    template<typename CampaignSummariesT = CampaignSummary>
    ListCampaignsResult& AddCampaignSummaries(CampaignSummariesT&& value) { m_campaignSummariesHasBeenSet = true; m_campaignSummaries.emplace_back(std::forward<CampaignSummariesT>(value)); return *this; }
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
    ListCampaignsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCampaignsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CampaignSummary> m_campaignSummaries;
    bool m_campaignSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
