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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API GetRightsizingRecommendationRequest : public CostExplorerRequest
  {
  public:
    GetRightsizingRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRightsizingRecommendation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Expression& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline GetRightsizingRecommendationRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    
    inline GetRightsizingRecommendationRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline GetRightsizingRecommendationRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline GetRightsizingRecommendationRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The specific service that you want recommendations for. The only valid value
     * for <code>GetRightsizingRecommendation</code> is "<code>AmazonEC2</code>".</p>
     */
    inline GetRightsizingRecommendationRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline GetRightsizingRecommendationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetRightsizingRecommendationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetRightsizingRecommendationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline GetRightsizingRecommendationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Expression m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
