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
    AWS_CLOUDFORMATION_API ListStackInstanceResourceDriftsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackInstanceResourceDrifts"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique ID of the StackSet that you want to list drifted resources
     * for.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    ListStackInstanceResourceDriftsRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStackInstanceResourceDriftsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStackInstanceResourceDriftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<StackResourceDriftStatus>& GetStackInstanceResourceDriftStatuses() const { return m_stackInstanceResourceDriftStatuses; }
    inline bool StackInstanceResourceDriftStatusesHasBeenSet() const { return m_stackInstanceResourceDriftStatusesHasBeenSet; }
    template<typename StackInstanceResourceDriftStatusesT = Aws::Vector<StackResourceDriftStatus>>
    void SetStackInstanceResourceDriftStatuses(StackInstanceResourceDriftStatusesT&& value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses = std::forward<StackInstanceResourceDriftStatusesT>(value); }
    template<typename StackInstanceResourceDriftStatusesT = Aws::Vector<StackResourceDriftStatus>>
    ListStackInstanceResourceDriftsRequest& WithStackInstanceResourceDriftStatuses(StackInstanceResourceDriftStatusesT&& value) { SetStackInstanceResourceDriftStatuses(std::forward<StackInstanceResourceDriftStatusesT>(value)); return *this;}
    inline ListStackInstanceResourceDriftsRequest& AddStackInstanceResourceDriftStatuses(StackResourceDriftStatus value) { m_stackInstanceResourceDriftStatusesHasBeenSet = true; m_stackInstanceResourceDriftStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services account that you want to list resource
     * drifts for.</p>
     */
    inline const Aws::String& GetStackInstanceAccount() const { return m_stackInstanceAccount; }
    inline bool StackInstanceAccountHasBeenSet() const { return m_stackInstanceAccountHasBeenSet; }
    template<typename StackInstanceAccountT = Aws::String>
    void SetStackInstanceAccount(StackInstanceAccountT&& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = std::forward<StackInstanceAccountT>(value); }
    template<typename StackInstanceAccountT = Aws::String>
    ListStackInstanceResourceDriftsRequest& WithStackInstanceAccount(StackInstanceAccountT&& value) { SetStackInstanceAccount(std::forward<StackInstanceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region where you want to list resource drifts.</p>
     */
    inline const Aws::String& GetStackInstanceRegion() const { return m_stackInstanceRegion; }
    inline bool StackInstanceRegionHasBeenSet() const { return m_stackInstanceRegionHasBeenSet; }
    template<typename StackInstanceRegionT = Aws::String>
    void SetStackInstanceRegion(StackInstanceRegionT&& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = std::forward<StackInstanceRegionT>(value); }
    template<typename StackInstanceRegionT = Aws::String>
    ListStackInstanceResourceDriftsRequest& WithStackInstanceRegion(StackInstanceRegionT&& value) { SetStackInstanceRegion(std::forward<StackInstanceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the drift operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    ListStackInstanceResourceDriftsRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for StackSets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline ListStackInstanceResourceDriftsRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<StackResourceDriftStatus> m_stackInstanceResourceDriftStatuses;
    bool m_stackInstanceResourceDriftStatusesHasBeenSet = false;

    Aws::String m_stackInstanceAccount;
    bool m_stackInstanceAccountHasBeenSet = false;

    Aws::String m_stackInstanceRegion;
    bool m_stackInstanceRegionHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
