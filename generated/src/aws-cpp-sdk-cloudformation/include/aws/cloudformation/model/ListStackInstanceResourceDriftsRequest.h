/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListStackInstanceResourceDriftsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListStackInstanceResourceDriftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackInstanceResourceDrifts"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to list drifted
     * resources for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListStackInstanceResourceDriftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline const Aws::Vector<StackResourceDriftStatus>& GetStackInstanceResourceDriftStatuses() const{ return m_stackInstanceResourceDriftStatuses; }

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline bool StackInstanceResourceDriftStatusesHasBeenSet() const { return m_stackInstanceResourceDriftStatusesHasBeenSet; }

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline void SetStackInstanceResourceDriftStatuses(const Aws::Vector<StackResourceDriftStatus>& value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses = value; }

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline void SetStackInstanceResourceDriftStatuses(Aws::Vector<StackResourceDriftStatus>&& value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses = std::move(value); }

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceResourceDriftStatuses(const Aws::Vector<StackResourceDriftStatus>& value) { SetStackInstanceResourceDriftStatuses(value); return *this;}

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceResourceDriftStatuses(Aws::Vector<StackResourceDriftStatus>&& value) { SetStackInstanceResourceDriftStatuses(std::move(value)); return *this;}

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& AddStackInstanceResourceDriftStatuses(const StackResourceDriftStatus& value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses.push_back(value); return *this; }

    /**
     * <p>The resource drift status of the stack instance. </p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& AddStackInstanceResourceDriftStatuses(StackResourceDriftStatus&& value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline const Aws::String& GetStackInstanceAccount() const{ return m_stackInstanceAccount; }

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline bool StackInstanceAccountHasBeenSet() const { return m_stackInstanceAccountHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline void SetStackInstanceAccount(const Aws::String& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = value; }

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline void SetStackInstanceAccount(Aws::String&& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline void SetStackInstanceAccount(const char* value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount.assign(value); }

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceAccount(const Aws::String& value) { SetStackInstanceAccount(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceAccount(Aws::String&& value) { SetStackInstanceAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceAccount(const char* value) { SetStackInstanceAccount(value); return *this;}


    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline const Aws::String& GetStackInstanceRegion() const{ return m_stackInstanceRegion; }

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline bool StackInstanceRegionHasBeenSet() const { return m_stackInstanceRegionHasBeenSet; }

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline void SetStackInstanceRegion(const Aws::String& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = value; }

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline void SetStackInstanceRegion(Aws::String&& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = std::move(value); }

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline void SetStackInstanceRegion(const char* value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion.assign(value); }

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceRegion(const Aws::String& value) { SetStackInstanceRegion(value); return *this;}

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceRegion(Aws::String&& value) { SetStackInstanceRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithStackInstanceRegion(const char* value) { SetStackInstanceRegion(value); return *this;}


    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline ListStackInstanceResourceDriftsRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
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
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
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
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
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
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
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
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline ListStackInstanceResourceDriftsRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<StackResourceDriftStatus> m_stackInstanceResourceDriftStatuses;
    bool m_stackInstanceResourceDriftStatusesHasBeenSet = false;

    Aws::String m_stackInstanceAccount;
    bool m_stackInstanceAccountHasBeenSet = false;

    Aws::String m_stackInstanceRegion;
    bool m_stackInstanceRegionHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    CallAs m_callAs;
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
