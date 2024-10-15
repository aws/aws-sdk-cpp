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

    ///@{
    /**
     * <p>The name of the stack set. The name must be unique in the Region where you
     * create your stack set.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }
    inline ImportStacksToStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}
    inline ImportStacksToStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}
    inline ImportStacksToStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the stacks you are importing into a stack set. You import up to 10
     * stacks per stack set at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const{ return m_stackIds; }
    inline bool StackIdsHasBeenSet() const { return m_stackIdsHasBeenSet; }
    inline void SetStackIds(const Aws::Vector<Aws::String>& value) { m_stackIdsHasBeenSet = true; m_stackIds = value; }
    inline void SetStackIds(Aws::Vector<Aws::String>&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::move(value); }
    inline ImportStacksToStackSetRequest& WithStackIds(const Aws::Vector<Aws::String>& value) { SetStackIds(value); return *this;}
    inline ImportStacksToStackSetRequest& WithStackIds(Aws::Vector<Aws::String>&& value) { SetStackIds(std::move(value)); return *this;}
    inline ImportStacksToStackSetRequest& AddStackIds(const Aws::String& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }
    inline ImportStacksToStackSetRequest& AddStackIds(Aws::String&& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(std::move(value)); return *this; }
    inline ImportStacksToStackSetRequest& AddStackIds(const char* value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::String& GetStackIdsUrl() const{ return m_stackIdsUrl; }
    inline bool StackIdsUrlHasBeenSet() const { return m_stackIdsUrlHasBeenSet; }
    inline void SetStackIdsUrl(const Aws::String& value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl = value; }
    inline void SetStackIdsUrl(Aws::String&& value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl = std::move(value); }
    inline void SetStackIdsUrl(const char* value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl.assign(value); }
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(const Aws::String& value) { SetStackIdsUrl(value); return *this;}
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(Aws::String&& value) { SetStackIdsUrl(std::move(value)); return *this;}
    inline ImportStacksToStackSetRequest& WithStackIdsUrl(const char* value) { SetStackIdsUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of OU ID's to which the stacks being imported has to be mapped as
     * deployment target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }
    inline ImportStacksToStackSetRequest& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}
    inline ImportStacksToStackSetRequest& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }
    inline ImportStacksToStackSetRequest& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/what-is-cfnstacksets.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }
    inline ImportStacksToStackSetRequest& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}
    inline ImportStacksToStackSetRequest& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, user defined, identifier for the stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }
    inline ImportStacksToStackSetRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline ImportStacksToStackSetRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline ImportStacksToStackSetRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for stack
     * sets with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>For service
     * managed stack sets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }
    inline ImportStacksToStackSetRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}
    inline ImportStacksToStackSetRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}
    ///@}
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
