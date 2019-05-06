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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/discovery/model/ConfigurationItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/Filter.h>
#include <aws/discovery/model/OrderByElement.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ListConfigurationsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    ListConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline const ConfigurationItemType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline void SetConfigurationType(const ConfigurationItemType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline void SetConfigurationType(ConfigurationItemType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline ListConfigurationsRequest& WithConfigurationType(const ConfigurationItemType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline ListConfigurationsRequest& WithConfigurationType(ConfigurationItemType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline ListConfigurationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline ListConfigurationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline ListConfigurationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Querying
     * Discovered Configuration Items</a>. </p>
     */
    inline ListConfigurationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of items to return. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return. The maximum value is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return. The maximum value is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return. The maximum value is 100.</p>
     */
    inline ListConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline const Aws::Vector<OrderByElement>& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline void SetOrderBy(const Aws::Vector<OrderByElement>& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline void SetOrderBy(Aws::Vector<OrderByElement>&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline ListConfigurationsRequest& WithOrderBy(const Aws::Vector<OrderByElement>& value) { SetOrderBy(value); return *this;}

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline ListConfigurationsRequest& WithOrderBy(Aws::Vector<OrderByElement>&& value) { SetOrderBy(std::move(value)); return *this;}

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline ListConfigurationsRequest& AddOrderBy(const OrderByElement& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(value); return *this; }

    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a>.</p>
     */
    inline ListConfigurationsRequest& AddOrderBy(OrderByElement&& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(std::move(value)); return *this; }

  private:

    ConfigurationItemType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<OrderByElement> m_orderBy;
    bool m_orderByHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
