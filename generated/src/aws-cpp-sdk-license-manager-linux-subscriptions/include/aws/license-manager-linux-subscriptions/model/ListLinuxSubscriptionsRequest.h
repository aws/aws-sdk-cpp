/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/model/Filter.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>NextToken length limit is half of ddb accepted limit. Increase this limit if
   * parameters in request increases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptionsRequest">AWS
   * API Reference</a></p>
   */
  class ListLinuxSubscriptionsRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLinuxSubscriptions"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListLinuxSubscriptionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListLinuxSubscriptionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLinuxSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLinuxSubscriptionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
