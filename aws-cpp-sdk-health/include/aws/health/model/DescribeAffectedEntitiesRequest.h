﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/health/model/EntityFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class AWS_HEALTH_API DescribeAffectedEntitiesRequest : public HealthRequest
  {
  public:
    DescribeAffectedEntitiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Values to narrow the results returned. At least one event ARN is required.
     * </p>
     */
    inline const EntityFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Values to narrow the results returned. At least one event ARN is required.
     * </p>
     */
    inline void SetFilter(const EntityFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Values to narrow the results returned. At least one event ARN is required.
     * </p>
     */
    inline void SetFilter(EntityFilter&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Values to narrow the results returned. At least one event ARN is required.
     * </p>
     */
    inline DescribeAffectedEntitiesRequest& WithFilter(const EntityFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Values to narrow the results returned. At least one event ARN is required.
     * </p>
     */
    inline DescribeAffectedEntitiesRequest& WithFilter(EntityFilter&& value) { SetFilter(value); return *this;}

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithLocale(Aws::String&& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale (language) to return information in. The default is English.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithLocale(const char* value) { SetLocale(value); return *this;}

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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline DescribeAffectedEntitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return in one batch.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in one batch.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in one batch.</p>
     */
    inline DescribeAffectedEntitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    EntityFilter m_filter;
    bool m_filterHasBeenSet;
    Aws::String m_locale;
    bool m_localeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
