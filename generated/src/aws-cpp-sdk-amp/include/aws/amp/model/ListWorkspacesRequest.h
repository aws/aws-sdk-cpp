/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListWorkspaces</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspacesRequest">AWS
   * API Reference</a></p>
   */
  class ListWorkspacesRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkspaces"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

    AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline ListWorkspacesRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline ListWorkspacesRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>If this is included, it filters the results to only the workspaces with names
     * that start with the value that you specify here.</p> <p>Amazon Managed Service
     * for Prometheus will automatically strip any blank spaces from the beginning and
     * end of the alias that you specify.</p>
     */
    inline ListWorkspacesRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The maximum number of workspaces to return per request. The default is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of workspaces to return per request. The default is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of workspaces to return per request. The default is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of workspaces to return per request. The default is
     * 100.</p>
     */
    inline ListWorkspacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline ListWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline ListWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 workspaces to
     * return, then your initial request will return 10 and a <code>nextToken</code>.
     * Using the next token in a subsequent call will return the remaining 2
     * workspaces.</p>
     */
    inline ListWorkspacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
