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
   * <p>Represents the input of a ListWorkspaces operation.</p><p><h3>See Also:</h3> 
   * <a
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
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline ListWorkspacesRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline ListWorkspacesRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>Optional filter for workspace alias. Only the workspaces with aliases that
     * begin with this value will be returned.</p>
     */
    inline ListWorkspacesRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline ListWorkspacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline ListWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
     */
    inline ListWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListWorkspaces request.</p>
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
