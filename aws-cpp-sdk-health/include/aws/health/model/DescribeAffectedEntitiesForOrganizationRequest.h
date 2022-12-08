/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventAccountFilter.h>
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
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAffectedEntitiesForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<EventAccountFilter>& GetOrganizationEntityFilters() const{ return m_organizationEntityFilters; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline bool OrganizationEntityFiltersHasBeenSet() const { return m_organizationEntityFiltersHasBeenSet; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline void SetOrganizationEntityFilters(const Aws::Vector<EventAccountFilter>& value) { m_organizationEntityFiltersHasBeenSet = true; m_organizationEntityFilters = value; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline void SetOrganizationEntityFilters(Aws::Vector<EventAccountFilter>&& value) { m_organizationEntityFiltersHasBeenSet = true; m_organizationEntityFilters = std::move(value); }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithOrganizationEntityFilters(const Aws::Vector<EventAccountFilter>& value) { SetOrganizationEntityFilters(value); return *this;}

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithOrganizationEntityFilters(Aws::Vector<EventAccountFilter>&& value) { SetOrganizationEntityFilters(std::move(value)); return *this;}

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& AddOrganizationEntityFilters(const EventAccountFilter& value) { m_organizationEntityFiltersHasBeenSet = true; m_organizationEntityFilters.push_back(value); return *this; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& AddOrganizationEntityFilters(EventAccountFilter&& value) { m_organizationEntityFiltersHasBeenSet = true; m_organizationEntityFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<EventAccountFilter> m_organizationEntityFilters;
    bool m_organizationEntityFiltersHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
