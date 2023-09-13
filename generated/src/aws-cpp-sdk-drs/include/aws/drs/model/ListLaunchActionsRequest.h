/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/model/LaunchActionsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class ListLaunchActionsRequest : public DrsRequest
  {
  public:
    AWS_DRS_API ListLaunchActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLaunchActions"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline const LaunchActionsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline void SetFilters(const LaunchActionsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline void SetFilters(LaunchActionsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithFilters(const LaunchActionsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to apply when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithFilters(LaunchActionsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Maximum amount of items to return when listing resource launch actions.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum amount of items to return when listing resource launch actions.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum amount of items to return when listing resource launch actions.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum amount of items to return when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token to use when listing resource launch actions.</p>
     */
    inline ListLaunchActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    
    inline ListLaunchActionsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    
    inline ListLaunchActionsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    
    inline ListLaunchActionsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    LaunchActionsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
