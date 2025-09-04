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
    AWS_CLOUDFORMATION_API ImportStacksToStackSetRequest() = default;

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
     * <p>The name of the StackSet. The name must be unique in the Region where you
     * create your StackSet.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    ImportStacksToStackSetRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the stacks you are importing into a StackSet. You import up to 10
     * stacks per StackSet at a time.</p> <p>Specify either <code>StackIds</code> or
     * <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const { return m_stackIds; }
    inline bool StackIdsHasBeenSet() const { return m_stackIdsHasBeenSet; }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    void SetStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::forward<StackIdsT>(value); }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    ImportStacksToStackSetRequest& WithStackIds(StackIdsT&& value) { SetStackIds(std::forward<StackIdsT>(value)); return *this;}
    template<typename StackIdsT = Aws::String>
    ImportStacksToStackSetRequest& AddStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds.emplace_back(std::forward<StackIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URL which contains list of stack ids to be inputted.</p>
     * <p>Specify either <code>StackIds</code> or <code>StackIdsUrl</code>.</p>
     */
    inline const Aws::String& GetStackIdsUrl() const { return m_stackIdsUrl; }
    inline bool StackIdsUrlHasBeenSet() const { return m_stackIdsUrlHasBeenSet; }
    template<typename StackIdsUrlT = Aws::String>
    void SetStackIdsUrl(StackIdsUrlT&& value) { m_stackIdsUrlHasBeenSet = true; m_stackIdsUrl = std::forward<StackIdsUrlT>(value); }
    template<typename StackIdsUrlT = Aws::String>
    ImportStacksToStackSetRequest& WithStackIdsUrl(StackIdsUrlT&& value) { SetStackIdsUrl(std::forward<StackIdsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of OU ID's to which the imported stacks must be mapped as deployment
     * targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value); }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    ImportStacksToStackSetRequest& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value)); return *this;}
    template<typename OrganizationalUnitIdsT = Aws::String>
    ImportStacksToStackSetRequest& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-specified preferences for how CloudFormation performs a StackSet
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">StackSet
     * operation options</a>.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const { return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    void SetOperationPreferences(OperationPreferencesT&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::forward<OperationPreferencesT>(value); }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    ImportStacksToStackSetRequest& WithOperationPreferences(OperationPreferencesT&& value) { SetOperationPreferences(std::forward<OperationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, user defined, identifier for the StackSet operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    ImportStacksToStackSetRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, <code>SELF</code> is specified. Use <code>SELF</code> for
     * StackSets with self-managed permissions.</p> <ul> <li> <p>If you are signed in
     * to the management account, specify <code>SELF</code>.</p> </li> <li> <p>For
     * service managed StackSets, specify <code>DELEGATED_ADMIN</code>.</p> </li> </ul>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline ImportStacksToStackSetRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
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

    Aws::String m_operationId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_operationIdHasBeenSet = true;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
