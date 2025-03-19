/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListConfigurationsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ListConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurations"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid configuration identified by Application Discovery Service. </p>
     */
    inline ConfigurationItemType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(ConfigurationItemType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline ListConfigurationsRequest& WithConfigurationType(ConfigurationItemType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "serverType", "value": "webServer"}</code> </p> <p>For a complete list of filter
     * options and guidance about using them with this action, see <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a> in the <i>Amazon Web Services Application
     * Discovery Service User Guide</i>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListConfigurationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListConfigurationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of items to return. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token to retrieve the next set of results. For example, if a previous call to
     * ListConfigurations returned 100 items, but you set
     * <code>ListConfigurationsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Certain filter criteria return output that can be sorted in ascending or
     * descending order. For a list of output characteristics for each filter, see <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-api-queries.html#ListConfigurations">Using
     * the ListConfigurations Action</a> in the <i>Amazon Web Services Application
     * Discovery Service User Guide</i>.</p>
     */
    inline const Aws::Vector<OrderByElement>& GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    template<typename OrderByT = Aws::Vector<OrderByElement>>
    void SetOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy = std::forward<OrderByT>(value); }
    template<typename OrderByT = Aws::Vector<OrderByElement>>
    ListConfigurationsRequest& WithOrderBy(OrderByT&& value) { SetOrderBy(std::forward<OrderByT>(value)); return *this;}
    template<typename OrderByT = OrderByElement>
    ListConfigurationsRequest& AddOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy.emplace_back(std::forward<OrderByT>(value)); return *this; }
    ///@}
  private:

    ConfigurationItemType m_configurationType{ConfigurationItemType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OrderByElement> m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
