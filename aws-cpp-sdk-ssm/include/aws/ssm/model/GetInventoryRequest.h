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
#include <aws/ssm/model/InventoryFilter.h>
#include <aws/ssm/model/InventoryAggregator.h>
#include <aws/ssm/model/ResultAttribute.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetInventoryRequest : public SSMRequest
  {
  public:
    GetInventoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInventory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline const Aws::Vector<InventoryFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline void SetFilters(const Aws::Vector<InventoryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline void SetFilters(Aws::Vector<InventoryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline GetInventoryRequest& WithFilters(const Aws::Vector<InventoryFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline GetInventoryRequest& WithFilters(Aws::Vector<InventoryFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline GetInventoryRequest& AddFilters(const InventoryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline GetInventoryRequest& AddFilters(InventoryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline const Aws::Vector<InventoryAggregator>& GetAggregators() const{ return m_aggregators; }

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline void SetAggregators(const Aws::Vector<InventoryAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline void SetAggregators(Aws::Vector<InventoryAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline GetInventoryRequest& WithAggregators(const Aws::Vector<InventoryAggregator>& value) { SetAggregators(value); return *this;}

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline GetInventoryRequest& WithAggregators(Aws::Vector<InventoryAggregator>&& value) { SetAggregators(std::move(value)); return *this;}

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline GetInventoryRequest& AddAggregators(const InventoryAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }

    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux instances exist in your inventoried fleet.</p>
     */
    inline GetInventoryRequest& AddAggregators(InventoryAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline const Aws::Vector<ResultAttribute>& GetResultAttributes() const{ return m_resultAttributes; }

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline bool ResultAttributesHasBeenSet() const { return m_resultAttributesHasBeenSet; }

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline void SetResultAttributes(const Aws::Vector<ResultAttribute>& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = value; }

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline void SetResultAttributes(Aws::Vector<ResultAttribute>&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = std::move(value); }

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline GetInventoryRequest& WithResultAttributes(const Aws::Vector<ResultAttribute>& value) { SetResultAttributes(value); return *this;}

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline GetInventoryRequest& WithResultAttributes(Aws::Vector<ResultAttribute>&& value) { SetResultAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline GetInventoryRequest& AddResultAttributes(const ResultAttribute& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(value); return *this; }

    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline GetInventoryRequest& AddResultAttributes(ResultAttribute&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline GetInventoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetInventoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<InventoryFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<InventoryAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet;

    Aws::Vector<ResultAttribute> m_resultAttributes;
    bool m_resultAttributesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
