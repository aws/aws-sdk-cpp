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
  class ListStackInstancesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListStackInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackInstances"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique ID of the StackSet that you want to list stack instances
     * for.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    ListStackInstancesRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous request didn't return all the remaining results, the
     * response's <code>NextToken</code> parameter value is set to a token. To retrieve
     * the next set of results, call <code>ListStackInstances</code> again and assign
     * that token to the request object's <code>NextToken</code> parameter. If there
     * are no remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStackInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline ListStackInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to apply to stack instances</p>
     */
    inline const Aws::Vector<StackInstanceFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<StackInstanceFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<StackInstanceFilter>>
    ListStackInstancesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = StackInstanceFilter>
    ListStackInstancesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services account that you want to list stack
     * instances for.</p>
     */
    inline const Aws::String& GetStackInstanceAccount() const { return m_stackInstanceAccount; }
    inline bool StackInstanceAccountHasBeenSet() const { return m_stackInstanceAccountHasBeenSet; }
    template<typename StackInstanceAccountT = Aws::String>
    void SetStackInstanceAccount(StackInstanceAccountT&& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = std::forward<StackInstanceAccountT>(value); }
    template<typename StackInstanceAccountT = Aws::String>
    ListStackInstancesRequest& WithStackInstanceAccount(StackInstanceAccountT&& value) { SetStackInstanceAccount(std::forward<StackInstanceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region where you want to list stack instances.</p>
     */
    inline const Aws::String& GetStackInstanceRegion() const { return m_stackInstanceRegion; }
    inline bool StackInstanceRegionHasBeenSet() const { return m_stackInstanceRegionHasBeenSet; }
    template<typename StackInstanceRegionT = Aws::String>
    void SetStackInstanceRegion(StackInstanceRegionT&& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = std::forward<StackInstanceRegionT>(value); }
    template<typename StackInstanceRegionT = Aws::String>
    ListStackInstancesRequest& WithStackInstanceRegion(StackInstanceRegionT&& value) { SetStackInstanceRegion(std::forward<StackInstanceRegionT>(value)); return *this;}
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
    inline ListStackInstancesRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<StackInstanceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_stackInstanceAccount;
    bool m_stackInstanceAccountHasBeenSet = false;

    Aws::String m_stackInstanceRegion;
    bool m_stackInstanceRegionHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
