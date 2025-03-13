/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/CampaignSummary.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for ListCampaigns API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListCampaignsResponse">AWS
   * API Reference</a></p>
   */
  class ListCampaignsResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult() = default;
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCampaignsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<CampaignSummary>& GetCampaignSummaryList() const { return m_campaignSummaryList; }
    template<typename CampaignSummaryListT = Aws::Vector<CampaignSummary>>
    void SetCampaignSummaryList(CampaignSummaryListT&& value) { m_campaignSummaryListHasBeenSet = true; m_campaignSummaryList = std::forward<CampaignSummaryListT>(value); }
    template<typename CampaignSummaryListT = Aws::Vector<CampaignSummary>>
    ListCampaignsResult& WithCampaignSummaryList(CampaignSummaryListT&& value) { SetCampaignSummaryList(std::forward<CampaignSummaryListT>(value)); return *this;}
    template<typename CampaignSummaryListT = CampaignSummary>
    ListCampaignsResult& AddCampaignSummaryList(CampaignSummaryListT&& value) { m_campaignSummaryListHasBeenSet = true; m_campaignSummaryList.emplace_back(std::forward<CampaignSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCampaignsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CampaignSummary> m_campaignSummaryList;
    bool m_campaignSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
