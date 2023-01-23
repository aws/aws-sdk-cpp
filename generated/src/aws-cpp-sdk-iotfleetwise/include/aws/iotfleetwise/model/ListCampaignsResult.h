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
    AWS_IOTFLEETWISE_API ListCampaignsResult();
    AWS_IOTFLEETWISE_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline const Aws::Vector<CampaignSummary>& GetCampaignSummaries() const{ return m_campaignSummaries; }

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline void SetCampaignSummaries(const Aws::Vector<CampaignSummary>& value) { m_campaignSummaries = value; }

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline void SetCampaignSummaries(Aws::Vector<CampaignSummary>&& value) { m_campaignSummaries = std::move(value); }

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline ListCampaignsResult& WithCampaignSummaries(const Aws::Vector<CampaignSummary>& value) { SetCampaignSummaries(value); return *this;}

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline ListCampaignsResult& WithCampaignSummaries(Aws::Vector<CampaignSummary>&& value) { SetCampaignSummaries(std::move(value)); return *this;}

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline ListCampaignsResult& AddCampaignSummaries(const CampaignSummary& value) { m_campaignSummaries.push_back(value); return *this; }

    /**
     * <p> A summary of information about each campaign. </p>
     */
    inline ListCampaignsResult& AddCampaignSummaries(CampaignSummary&& value) { m_campaignSummaries.push_back(std::move(value)); return *this; }


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
    inline ListCampaignsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListCampaignsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListCampaignsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CampaignSummary> m_campaignSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
