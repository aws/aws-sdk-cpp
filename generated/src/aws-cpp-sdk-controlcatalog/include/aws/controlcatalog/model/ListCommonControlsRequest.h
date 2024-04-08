/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/ControlCatalogRequest.h>
#include <aws/controlcatalog/model/CommonControlFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ControlCatalog
{
namespace Model
{

  /**
   */
  class ListCommonControlsRequest : public ControlCatalogRequest
  {
  public:
    AWS_CONTROLCATALOG_API ListCommonControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCommonControls"; }

    AWS_CONTROLCATALOG_API Aws::String SerializePayload() const override;

    AWS_CONTROLCATALOG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline const CommonControlFilter& GetCommonControlFilter() const{ return m_commonControlFilter; }

    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline bool CommonControlFilterHasBeenSet() const { return m_commonControlFilterHasBeenSet; }

    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline void SetCommonControlFilter(const CommonControlFilter& value) { m_commonControlFilterHasBeenSet = true; m_commonControlFilter = value; }

    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline void SetCommonControlFilter(CommonControlFilter&& value) { m_commonControlFilterHasBeenSet = true; m_commonControlFilter = std::move(value); }

    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline ListCommonControlsRequest& WithCommonControlFilter(const CommonControlFilter& value) { SetCommonControlFilter(value); return *this;}

    /**
     * <p>An optional filter that narrows the results to a specific objective.</p>
     * <p>This filter allows you to specify one objective ARN at a time. Passing
     * multiple ARNs in the <code>CommonControlFilter</code> isn’t currently
     * supported.</p>
     */
    inline ListCommonControlsRequest& WithCommonControlFilter(CommonControlFilter&& value) { SetCommonControlFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline ListCommonControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    CommonControlFilter m_commonControlFilter;
    bool m_commonControlFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
