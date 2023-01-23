/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/connectcampaigns/model/CampaignFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>ListCampaignsRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListCampaignsRequest">AWS
   * API Reference</a></p>
   */
  class ListCampaignsRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API ListCampaignsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCampaigns"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const CampaignFilters& GetFilters() const{ return m_filters; }

    
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    
    inline void SetFilters(const CampaignFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    
    inline void SetFilters(CampaignFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    
    inline ListCampaignsRequest& WithFilters(const CampaignFilters& value) { SetFilters(value); return *this;}

    
    inline ListCampaignsRequest& WithFilters(CampaignFilters&& value) { SetFilters(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListCampaignsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListCampaignsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCampaignsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCampaignsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    CampaignFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
