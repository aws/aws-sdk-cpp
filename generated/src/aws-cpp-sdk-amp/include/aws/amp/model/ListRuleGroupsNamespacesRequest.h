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
   * <p>Represents the input of a ListRuleGroupsNamespaces operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespacesRequest">AWS
   * API Reference</a></p>
   */
  class ListRuleGroupsNamespacesRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleGroupsNamespaces"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

    AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ListRuleGroupsNamespacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Optional filter for rule groups namespace name. Only the rule groups
     * namespace that begin with this value will be returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListRuleGroupsNamespaces request.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
