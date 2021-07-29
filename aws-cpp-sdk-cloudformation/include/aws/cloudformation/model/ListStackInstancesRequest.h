﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/StackInstanceFilter.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API ListStackInstancesRequest : public CloudFormationRequest
  {
  public:
    ListStackInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline ListStackInstancesRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline ListStackInstancesRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to list stack instances
     * for.</p>
     */
    inline ListStackInstancesRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline ListStackInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline const Aws::Vector<StackInstanceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline void SetFilters(const Aws::Vector<StackInstanceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline void SetFilters(Aws::Vector<StackInstanceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline ListStackInstancesRequest& WithFilters(const Aws::Vector<StackInstanceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline ListStackInstancesRequest& WithFilters(Aws::Vector<StackInstanceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline ListStackInstancesRequest& AddFilters(const StackInstanceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The status that stack instances are filtered by.</p>
     */
    inline ListStackInstancesRequest& AddFilters(StackInstanceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline const Aws::String& GetStackInstanceAccount() const{ return m_stackInstanceAccount; }

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline bool StackInstanceAccountHasBeenSet() const { return m_stackInstanceAccountHasBeenSet; }

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline void SetStackInstanceAccount(const Aws::String& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = value; }

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline void SetStackInstanceAccount(Aws::String&& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = std::move(value); }

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline void SetStackInstanceAccount(const char* value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount.assign(value); }

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline ListStackInstancesRequest& WithStackInstanceAccount(const Aws::String& value) { SetStackInstanceAccount(value); return *this;}

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline ListStackInstancesRequest& WithStackInstanceAccount(Aws::String&& value) { SetStackInstanceAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the account that you want to list stack instances for.</p>
     */
    inline ListStackInstancesRequest& WithStackInstanceAccount(const char* value) { SetStackInstanceAccount(value); return *this;}


    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline const Aws::String& GetStackInstanceRegion() const{ return m_stackInstanceRegion; }

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline bool StackInstanceRegionHasBeenSet() const { return m_stackInstanceRegionHasBeenSet; }

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline void SetStackInstanceRegion(const Aws::String& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = value; }

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline void SetStackInstanceRegion(Aws::String&& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = std::move(value); }

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline void SetStackInstanceRegion(const char* value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion.assign(value); }

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline ListStackInstancesRequest& WithStackInstanceRegion(const Aws::String& value) { SetStackInstanceRegion(value); return *this;}

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline ListStackInstancesRequest& WithStackInstanceRegion(Aws::String&& value) { SetStackInstanceRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the Region where you want to list stack instances. </p>
     */
    inline ListStackInstancesRequest& WithStackInstanceRegion(const char* value) { SetStackInstanceRegion(value); return *this;}


    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline ListStackInstancesRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your account
     * must be registered as a delegated administrator in the management account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline ListStackInstancesRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<StackInstanceFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_stackInstanceAccount;
    bool m_stackInstanceAccountHasBeenSet;

    Aws::String m_stackInstanceRegion;
    bool m_stackInstanceRegionHasBeenSet;

    CallAs m_callAs;
    bool m_callAsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
