/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class ListFindingsMetricsRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API ListFindingsMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindingsMetrics"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

    AWS_CODEGURUSECURITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline ListFindingsMetricsRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end date of the interval which you want to retrieve metrics from.</p>
     */
    inline ListFindingsMetricsRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline ListFindingsMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListFindingsMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListFindingsMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListFindingsMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline ListFindingsMetricsRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start date of the interval which you want to retrieve metrics from.</p>
     */
    inline ListFindingsMetricsRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
