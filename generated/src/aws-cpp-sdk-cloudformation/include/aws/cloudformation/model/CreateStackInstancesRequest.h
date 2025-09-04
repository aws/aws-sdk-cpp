/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/Parameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class CreateStackInstancesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStackInstances"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique ID of the StackSet that you want to create stack instances
     * from.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    CreateStackInstancesRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Self-managed permissions] The account IDs of one or more Amazon Web Services
     * accounts that you want to create stack instances in the specified Region(s)
     * for.</p> <p>You can specify <code>Accounts</code> or
     * <code>DeploymentTargets</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    CreateStackInstancesRequest& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    CreateStackInstancesRequest& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] The Organizations accounts in which to create
     * stack instances in the specified Amazon Web Services Regions.</p> <p>You can
     * specify <code>Accounts</code> or <code>DeploymentTargets</code>, but not
     * both.</p>
     */
    inline const DeploymentTargets& GetDeploymentTargets() const { return m_deploymentTargets; }
    inline bool DeploymentTargetsHasBeenSet() const { return m_deploymentTargetsHasBeenSet; }
    template<typename DeploymentTargetsT = DeploymentTargets>
    void SetDeploymentTargets(DeploymentTargetsT&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::forward<DeploymentTargetsT>(value); }
    template<typename DeploymentTargetsT = DeploymentTargets>
    CreateStackInstancesRequest& WithDeploymentTargets(DeploymentTargetsT&& value) { SetDeploymentTargets(std::forward<DeploymentTargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of one or more Amazon Web Services Regions where you want to create
     * stack instances using the specified Amazon Web Services accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    CreateStackInstancesRequest& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    CreateStackInstancesRequest& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of StackSet parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Amazon Web Services
     * Regions. When specifying parameters and their values, be aware of how
     * CloudFormation sets parameter values during stack instance operations:</p> <ul>
     * <li> <p>To override the current value for a parameter, include the parameter and
     * specify its value.</p> </li> <li> <p>To leave an overridden parameter set to its
     * present value, include the parameter and specify <code>UsePreviousValue</code>
     * as <code>true</code>. (You can't specify both a value and set
     * <code>UsePreviousValue</code> to <code>true</code>.)</p> </li> <li> <p>To set an
     * overridden parameter back to the value specified in the StackSet, specify a
     * parameter list but don't include the parameter in the list.</p> </li> <li> <p>To
     * leave all parameters set to their present values, don't specify this property at
     * all.</p> </li> </ul> <p>During StackSet updates, any parameter values overridden
     * for a stack instance aren't updated, but retain their overridden value.</p>
     * <p>You can only override the parameter <i>values</i> that are specified in the
     * StackSet; to add or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the StackSet template.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameterOverrides() const { return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    template<typename ParameterOverridesT = Aws::Vector<Parameter>>
    void SetParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::forward<ParameterOverridesT>(value); }
    template<typename ParameterOverridesT = Aws::Vector<Parameter>>
    CreateStackInstancesRequest& WithParameterOverrides(ParameterOverridesT&& value) { SetParameterOverrides(std::forward<ParameterOverridesT>(value)); return *this;}
    template<typename ParameterOverridesT = Parameter>
    CreateStackInstancesRequest& AddParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.emplace_back(std::forward<ParameterOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Preferences for how CloudFormation performs this StackSet operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const { return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    void SetOperationPreferences(OperationPreferencesT&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::forward<OperationPreferencesT>(value); }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    CreateStackInstancesRequest& WithOperationPreferences(OperationPreferencesT&& value) { SetOperationPreferences(std::forward<OperationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this StackSet operation.</p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the StackSet operation only once, even if you retry the request multiple times.
     * You might retry StackSet operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically.</p> <p>Repeating this StackSet operation with a new
     * operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    CreateStackInstancesRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
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
    inline CreateStackInstancesRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    DeploymentTargets m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<Parameter> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;

    Aws::String m_operationId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_operationIdHasBeenSet = true;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
