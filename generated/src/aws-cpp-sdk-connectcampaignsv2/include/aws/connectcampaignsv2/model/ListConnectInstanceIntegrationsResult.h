/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/IntegrationSummary.h>
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
   * <p>The response for ListConnectInstanceIntegrations API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListConnectInstanceIntegrationsResponse">AWS
   * API Reference</a></p>
   */
  class ListConnectInstanceIntegrationsResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult() = default;
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectInstanceIntegrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaryList() const { return m_integrationSummaryList; }
    template<typename IntegrationSummaryListT = Aws::Vector<IntegrationSummary>>
    void SetIntegrationSummaryList(IntegrationSummaryListT&& value) { m_integrationSummaryListHasBeenSet = true; m_integrationSummaryList = std::forward<IntegrationSummaryListT>(value); }
    template<typename IntegrationSummaryListT = Aws::Vector<IntegrationSummary>>
    ListConnectInstanceIntegrationsResult& WithIntegrationSummaryList(IntegrationSummaryListT&& value) { SetIntegrationSummaryList(std::forward<IntegrationSummaryListT>(value)); return *this;}
    template<typename IntegrationSummaryListT = IntegrationSummary>
    ListConnectInstanceIntegrationsResult& AddIntegrationSummaryList(IntegrationSummaryListT&& value) { m_integrationSummaryListHasBeenSet = true; m_integrationSummaryList.emplace_back(std::forward<IntegrationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectInstanceIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IntegrationSummary> m_integrationSummaryList;
    bool m_integrationSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
