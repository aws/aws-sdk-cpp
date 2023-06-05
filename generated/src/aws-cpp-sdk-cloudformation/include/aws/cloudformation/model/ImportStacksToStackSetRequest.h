/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/cloudformation/model/CallAs.h>
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
  class ImportStacksToStackSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ImportStacksToStackSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportStacksToStackSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const{ return m_stackIds; }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline bool StackIdsHasBeenSet() const { return m_stackIdsHasBeenSet; }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline void SetStackIds(const Aws::Vector<Aws::String>& value) { m_stackIdsHasBeenSet = true; m_stackIds = value; }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline void SetStackIds(Aws::Vector<Aws::String>&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::move(value); }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackIds(const Aws::Vector<Aws::String>& value) { SetStackIds(value); return *this;}

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackIds(Aws::Vector<Aws::String>&& value) { SetStackIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& AddStackIds(const Aws::String& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& AddStackIds(Aws::String&& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& AddStackIds(const char* value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::String& GetStackIdsUrl() const{ return m_stackIdsUrl; }

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline bool StackIdsUrlHasBeenSet() const { return m_stackIdsUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline void SetStackIdsUrl(const Aws::String& value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl = value; }

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline void SetStackIdsUrl(Aws::String&& value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl = std::move(value); }

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline void SetStackIdsUrl(const char* value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl.assign(value); }

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(const Aws::String& value) { SetStackIdsUrl(value); return *this;}

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(Aws::String&& value) { SetStackIdsUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(const char* value) { SetStackIdsUrl(value); return *this;}


    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline ImportStacksToStackSetRequest& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline ImportStacksToStackSetRequest& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }


    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }

    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }

    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }

    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }

    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline ImportStacksToStackSetRequest& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}

    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline ImportStacksToStackSetRequest& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}


    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline ImportStacksToStackSetRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline ImportStacksToStackSetRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline ImportStacksToStackSetRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }

    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }

    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }

    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }

    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline ImportStacksToStackSetRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}

    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline ImportStacksToStackSetRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_stackIds;
    bool m_stackIdsHasBeenSet = false;

    Aws::String m_stackIdsUrl;
    bool m_stackIdsUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    CallAs m_callAs;
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
