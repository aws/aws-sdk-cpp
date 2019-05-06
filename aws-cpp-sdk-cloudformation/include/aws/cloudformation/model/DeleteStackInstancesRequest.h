/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
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
  class AWS_CLOUDFORMATION_API DeleteStackInstancesRequest : public CloudFormationRequest
  {
  public:
    DeleteStackInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStackInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline DeleteStackInstancesRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline DeleteStackInstancesRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to delete stack
     * instances for.</p>
     */
    inline DeleteStackInstancesRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline DeleteStackInstancesRequest& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline DeleteStackInstancesRequest& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline DeleteStackInstancesRequest& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline DeleteStackInstancesRequest& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the AWS accounts that you want to delete stack instances
     * for.</p>
     */
    inline DeleteStackInstancesRequest& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline DeleteStackInstancesRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline DeleteStackInstancesRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline DeleteStackInstancesRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline DeleteStackInstancesRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The regions where you want to delete stack set instances. </p>
     */
    inline DeleteStackInstancesRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline DeleteStackInstancesRequest& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline DeleteStackInstancesRequest& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}


    /**
     * <p>Removes the stack instances from the specified stack set, but doesn't delete
     * the stacks. You can't reassociate a retained stack or add an existing, saved
     * stack to a new stack set.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline bool GetRetainStacks() const{ return m_retainStacks; }

    /**
     * <p>Removes the stack instances from the specified stack set, but doesn't delete
     * the stacks. You can't reassociate a retained stack or add an existing, saved
     * stack to a new stack set.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline bool RetainStacksHasBeenSet() const { return m_retainStacksHasBeenSet; }

    /**
     * <p>Removes the stack instances from the specified stack set, but doesn't delete
     * the stacks. You can't reassociate a retained stack or add an existing, saved
     * stack to a new stack set.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline void SetRetainStacks(bool value) { m_retainStacksHasBeenSet = true; m_retainStacks = value; }

    /**
     * <p>Removes the stack instances from the specified stack set, but doesn't delete
     * the stacks. You can't reassociate a retained stack or add an existing, saved
     * stack to a new stack set.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline DeleteStackInstancesRequest& WithRetainStacks(bool value) { SetRetainStacks(value); return *this;}


    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline DeleteStackInstancesRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline DeleteStackInstancesRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p> <p>If you don't
     * specify an operation ID, the SDK generates one automatically. </p> <p>The
     * operation ID also functions as an idempotency token, to ensure that AWS
     * CloudFormation performs the stack set operation only once, even if you retry the
     * request multiple times. You can retry stack set operation requests to ensure
     * that AWS CloudFormation successfully received them.</p> <p>Repeating this stack
     * set operation with a new operation ID retries all stack instances whose status
     * is <code>OUTDATED</code>. </p>
     */
    inline DeleteStackInstancesRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet;

    bool m_retainStacks;
    bool m_retainStacksHasBeenSet;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
