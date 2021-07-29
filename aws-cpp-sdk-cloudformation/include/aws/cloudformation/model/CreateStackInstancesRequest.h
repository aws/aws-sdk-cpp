﻿/**
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
  class AWS_CLOUDFORMATION_API CreateStackInstancesRequest : public CloudFormationRequest
  {
  public:
    CreateStackInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStackInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline CreateStackInstancesRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline CreateStackInstancesRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to create stack
     * instances from.</p>
     */
    inline CreateStackInstancesRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>[Self-managed permissions] The names of one or more accounts that you want to
     * create stack instances in the specified Region(s) for.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline const DeploymentTargets& GetDeploymentTargets() const{ return m_deploymentTargets; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline bool DeploymentTargetsHasBeenSet() const { return m_deploymentTargetsHasBeenSet; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline void SetDeploymentTargets(const DeploymentTargets& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = value; }

    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline void SetDeploymentTargets(DeploymentTargets&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::move(value); }

    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& WithDeploymentTargets(const DeploymentTargets& value) { SetDeploymentTargets(value); return *this;}

    /**
     * <p>[Service-managed permissions] The Organizations accounts for which to create
     * stack instances in the specified Regions.</p> <p>You can specify
     * <code>Accounts</code> or <code>DeploymentTargets</code>, but not both.</p>
     */
    inline CreateStackInstancesRequest& WithDeploymentTargets(DeploymentTargets&& value) { SetDeploymentTargets(std::move(value)); return *this;}


    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline CreateStackInstancesRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline CreateStackInstancesRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline CreateStackInstancesRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline CreateStackInstancesRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more Regions where you want to create stack instances
     * using the specified accounts. </p>
     */
    inline CreateStackInstancesRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameterOverrides() const{ return m_parameterOverrides; }

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline void SetParameterOverrides(const Aws::Vector<Parameter>& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = value; }

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline void SetParameterOverrides(Aws::Vector<Parameter>&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::move(value); }

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline CreateStackInstancesRequest& WithParameterOverrides(const Aws::Vector<Parameter>& value) { SetParameterOverrides(value); return *this;}

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline CreateStackInstancesRequest& WithParameterOverrides(Aws::Vector<Parameter>&& value) { SetParameterOverrides(std::move(value)); return *this;}

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline CreateStackInstancesRequest& AddParameterOverrides(const Parameter& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(value); return *this; }

    /**
     * <p>A list of stack set parameters whose values you want to override in the
     * selected stack instances.</p> <p>Any overridden parameter values will be applied
     * to all stack instances in the specified accounts and Regions. When specifying
     * parameters and their values, be aware of how CloudFormation sets parameter
     * values during stack instance operations:</p> <ul> <li> <p>To override the
     * current value for a parameter, include the parameter and specify its value.</p>
     * </li> <li> <p>To leave an overridden parameter set to its present value, include
     * the parameter and specify <code>UsePreviousValue</code> as <code>true</code>.
     * (You cannot specify both a value and set <code>UsePreviousValue</code> to
     * <code>true</code>.)</p> </li> <li> <p>To set an overridden parameter back to the
     * value specified in the stack set, specify a parameter list but do not include
     * the parameter in the list.</p> </li> <li> <p>To leave all parameters set to
     * their present values, do not specify this property at all.</p> </li> </ul>
     * <p>During stack set updates, any parameter values overridden for a stack
     * instance are not updated, but retain their overridden value.</p> <p>You can only
     * override the parameter <i>values</i> that are specified in the stack set; to add
     * or delete a parameter itself, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
     * to update the stack set template.</p>
     */
    inline CreateStackInstancesRequest& AddParameterOverrides(Parameter&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }

    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }

    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }

    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }

    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline CreateStackInstancesRequest& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}

    /**
     * <p>Preferences for how CloudFormation performs this stack set operation.</p>
     */
    inline CreateStackInstancesRequest& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline CreateStackInstancesRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline CreateStackInstancesRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>The operation ID
     * also functions as an idempotency token, to ensure that CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p> <p>Repeating this stack set operation with a
     * new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline CreateStackInstancesRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


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
    inline CreateStackInstancesRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}

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
    inline CreateStackInstancesRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    DeploymentTargets m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet;

    Aws::Vector<Parameter> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;

    CallAs m_callAs;
    bool m_callAsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
