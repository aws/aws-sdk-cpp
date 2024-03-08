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
   * <p>Represents the input of a <code>ListRuleGroupsNamespaces</code>
   * operation.</p><p><h3>See Also:</h3>   <a
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
     * <p>The maximum number of results to return. The default is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return. The default is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return. The default is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return. The default is 100.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to filter the rule groups namespaces that are returned.
     * Only the namespaces with names that begin with the value that you specify are
     * returned.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. You receive this token from a
     * previous call, and use it to get the next page of results. The other parameters
     * must be the same as the initial call.</p> <p>For example, if your initial
     * request has <code>maxResults</code> of 10, and there are 12 rule groups
     * namespaces to return, then your initial request will return 10 and a
     * <code>nextToken</code>. Using the next token in a subsequent call will return
     * the remaining 2 namespaces.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
     */
    inline ListRuleGroupsNamespacesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace containing the rule groups namespaces.</p>
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
