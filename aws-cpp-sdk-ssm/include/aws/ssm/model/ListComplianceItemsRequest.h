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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API ListComplianceItemsRequest : public SSMRequest
  {
  public:
    ListComplianceItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComplianceItems"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline const Aws::Vector<ComplianceStringFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline void SetFilters(const Aws::Vector<ComplianceStringFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline void SetFilters(Aws::Vector<ComplianceStringFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline ListComplianceItemsRequest& WithFilters(const Aws::Vector<ComplianceStringFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline ListComplianceItemsRequest& WithFilters(Aws::Vector<ComplianceStringFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline ListComplianceItemsRequest& AddFilters(const ComplianceStringFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more compliance filters. Use a filter to return a more specific list
     * of results.</p>
     */
    inline ListComplianceItemsRequest& AddFilters(ComplianceStringFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline ListComplianceItemsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline ListComplianceItemsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline ListComplianceItemsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline ListComplianceItemsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID for the resources from which to get compliance information. Currently,
     * you can only specify one resource ID.</p>
     */
    inline ListComplianceItemsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline ListComplianceItemsRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline ListComplianceItemsRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline ListComplianceItemsRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline ListComplianceItemsRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The type of resource from which to get compliance information. Currently, the
     * only supported resource type is <code>ManagedInstance</code>.</p>
     */
    inline ListComplianceItemsRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }


    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListComplianceItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListComplianceItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListComplianceItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListComplianceItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<ComplianceStringFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
