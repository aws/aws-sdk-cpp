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
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult();
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API ListConnectInstanceIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConnectInstanceIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectInstanceIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectInstanceIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaryList() const{ return m_integrationSummaryList; }
    inline void SetIntegrationSummaryList(const Aws::Vector<IntegrationSummary>& value) { m_integrationSummaryList = value; }
    inline void SetIntegrationSummaryList(Aws::Vector<IntegrationSummary>&& value) { m_integrationSummaryList = std::move(value); }
    inline ListConnectInstanceIntegrationsResult& WithIntegrationSummaryList(const Aws::Vector<IntegrationSummary>& value) { SetIntegrationSummaryList(value); return *this;}
    inline ListConnectInstanceIntegrationsResult& WithIntegrationSummaryList(Aws::Vector<IntegrationSummary>&& value) { SetIntegrationSummaryList(std::move(value)); return *this;}
    inline ListConnectInstanceIntegrationsResult& AddIntegrationSummaryList(const IntegrationSummary& value) { m_integrationSummaryList.push_back(value); return *this; }
    inline ListConnectInstanceIntegrationsResult& AddIntegrationSummaryList(IntegrationSummary&& value) { m_integrationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConnectInstanceIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConnectInstanceIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConnectInstanceIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<IntegrationSummary> m_integrationSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
