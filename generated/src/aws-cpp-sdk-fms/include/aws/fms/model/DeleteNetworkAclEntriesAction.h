/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/EntryDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Information about the <code>DeleteNetworkAclEntries</code> action in Amazon
   * EC2. This is a remediation option in <code>RemediationAction</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteNetworkAclEntriesAction">AWS
   * API Reference</a></p>
   */
  class DeleteNetworkAclEntriesAction
  {
  public:
    AWS_FMS_API DeleteNetworkAclEntriesAction() = default;
    AWS_FMS_API DeleteNetworkAclEntriesAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API DeleteNetworkAclEntriesAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeleteNetworkAclEntriesAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline const ActionTarget& GetNetworkAclId() const { return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    template<typename NetworkAclIdT = ActionTarget>
    void SetNetworkAclId(NetworkAclIdT&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::forward<NetworkAclIdT>(value); }
    template<typename NetworkAclIdT = ActionTarget>
    DeleteNetworkAclEntriesAction& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the entries that the remediation action would delete.</p>
     */
    inline const Aws::Vector<EntryDescription>& GetNetworkAclEntriesToBeDeleted() const { return m_networkAclEntriesToBeDeleted; }
    inline bool NetworkAclEntriesToBeDeletedHasBeenSet() const { return m_networkAclEntriesToBeDeletedHasBeenSet; }
    template<typename NetworkAclEntriesToBeDeletedT = Aws::Vector<EntryDescription>>
    void SetNetworkAclEntriesToBeDeleted(NetworkAclEntriesToBeDeletedT&& value) { m_networkAclEntriesToBeDeletedHasBeenSet = true; m_networkAclEntriesToBeDeleted = std::forward<NetworkAclEntriesToBeDeletedT>(value); }
    template<typename NetworkAclEntriesToBeDeletedT = Aws::Vector<EntryDescription>>
    DeleteNetworkAclEntriesAction& WithNetworkAclEntriesToBeDeleted(NetworkAclEntriesToBeDeletedT&& value) { SetNetworkAclEntriesToBeDeleted(std::forward<NetworkAclEntriesToBeDeletedT>(value)); return *this;}
    template<typename NetworkAclEntriesToBeDeletedT = EntryDescription>
    DeleteNetworkAclEntriesAction& AddNetworkAclEntriesToBeDeleted(NetworkAclEntriesToBeDeletedT&& value) { m_networkAclEntriesToBeDeletedHasBeenSet = true; m_networkAclEntriesToBeDeleted.emplace_back(std::forward<NetworkAclEntriesToBeDeletedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline bool GetFMSCanRemediate() const { return m_fMSCanRemediate; }
    inline bool FMSCanRemediateHasBeenSet() const { return m_fMSCanRemediateHasBeenSet; }
    inline void SetFMSCanRemediate(bool value) { m_fMSCanRemediateHasBeenSet = true; m_fMSCanRemediate = value; }
    inline DeleteNetworkAclEntriesAction& WithFMSCanRemediate(bool value) { SetFMSCanRemediate(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::Vector<EntryDescription> m_networkAclEntriesToBeDeleted;
    bool m_networkAclEntriesToBeDeletedHasBeenSet = false;

    bool m_fMSCanRemediate{false};
    bool m_fMSCanRemediateHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
