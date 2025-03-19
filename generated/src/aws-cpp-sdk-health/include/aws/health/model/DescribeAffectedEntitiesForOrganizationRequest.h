/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/EntityAccountFilter.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeAffectedEntitiesForOrganizationRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAffectedEntitiesForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    DescribeAffectedEntitiesForOrganizationRequest& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAffectedEntitiesForOrganizationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAffectedEntitiesForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code>,
     * <code>eventArn</code> and a set of <code>statusCodes</code>.</p>
     */
    inline const Aws::Vector<EntityAccountFilter>& GetOrganizationEntityAccountFilters() const { return m_organizationEntityAccountFilters; }
    inline bool OrganizationEntityAccountFiltersHasBeenSet() const { return m_organizationEntityAccountFiltersHasBeenSet; }
    template<typename OrganizationEntityAccountFiltersT = Aws::Vector<EntityAccountFilter>>
    void SetOrganizationEntityAccountFilters(OrganizationEntityAccountFiltersT&& value) { m_organizationEntityAccountFiltersHasBeenSet = true; m_organizationEntityAccountFilters = std::forward<OrganizationEntityAccountFiltersT>(value); }
    template<typename OrganizationEntityAccountFiltersT = Aws::Vector<EntityAccountFilter>>
    DescribeAffectedEntitiesForOrganizationRequest& WithOrganizationEntityAccountFilters(OrganizationEntityAccountFiltersT&& value) { SetOrganizationEntityAccountFilters(std::forward<OrganizationEntityAccountFiltersT>(value)); return *this;}
    template<typename OrganizationEntityAccountFiltersT = EntityAccountFilter>
    DescribeAffectedEntitiesForOrganizationRequest& AddOrganizationEntityAccountFilters(OrganizationEntityAccountFiltersT&& value) { m_organizationEntityAccountFiltersHasBeenSet = true; m_organizationEntityAccountFilters.emplace_back(std::forward<OrganizationEntityAccountFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<EntityAccountFilter> m_organizationEntityAccountFilters;
    bool m_organizationEntityAccountFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
