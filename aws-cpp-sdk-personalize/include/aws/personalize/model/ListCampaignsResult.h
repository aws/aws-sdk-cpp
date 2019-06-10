/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/CampaignSummary.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API ListCampaignsResult
  {
  public:
    ListCampaignsResult();
    ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the campaigns.</p>
     */
    inline const Aws::Vector<CampaignSummary>& GetCampaigns() const{ return m_campaigns; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline void SetCampaigns(const Aws::Vector<CampaignSummary>& value) { m_campaigns = value; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline void SetCampaigns(Aws::Vector<CampaignSummary>&& value) { m_campaigns = std::move(value); }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& WithCampaigns(const Aws::Vector<CampaignSummary>& value) { SetCampaigns(value); return *this;}

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& WithCampaigns(Aws::Vector<CampaignSummary>&& value) { SetCampaigns(std::move(value)); return *this;}

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& AddCampaigns(const CampaignSummary& value) { m_campaigns.push_back(value); return *this; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& AddCampaigns(CampaignSummary&& value) { m_campaigns.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CampaignSummary> m_campaigns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
