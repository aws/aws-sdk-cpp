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
   * <p>Information about the <code>CreateNetworkAclEntries</code> action in Amazon
   * EC2. This is a remediation option in
   * <code>RemediationAction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/CreateNetworkAclEntriesAction">AWS
   * API Reference</a></p>
   */
  class CreateNetworkAclEntriesAction
  {
  public:
    AWS_FMS_API CreateNetworkAclEntriesAction();
    AWS_FMS_API CreateNetworkAclEntriesAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API CreateNetworkAclEntriesAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Brief description of this remediation action. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateNetworkAclEntriesAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateNetworkAclEntriesAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateNetworkAclEntriesAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL that's associated with the remediation action.</p>
     */
    inline const ActionTarget& GetNetworkAclId() const{ return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    inline void SetNetworkAclId(const ActionTarget& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }
    inline void SetNetworkAclId(ActionTarget&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }
    inline CreateNetworkAclEntriesAction& WithNetworkAclId(const ActionTarget& value) { SetNetworkAclId(value); return *this;}
    inline CreateNetworkAclEntriesAction& WithNetworkAclId(ActionTarget&& value) { SetNetworkAclId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the entries that the remediation action would create.</p>
     */
    inline const Aws::Vector<EntryDescription>& GetNetworkAclEntriesToBeCreated() const{ return m_networkAclEntriesToBeCreated; }
    inline bool NetworkAclEntriesToBeCreatedHasBeenSet() const { return m_networkAclEntriesToBeCreatedHasBeenSet; }
    inline void SetNetworkAclEntriesToBeCreated(const Aws::Vector<EntryDescription>& value) { m_networkAclEntriesToBeCreatedHasBeenSet = true; m_networkAclEntriesToBeCreated = value; }
    inline void SetNetworkAclEntriesToBeCreated(Aws::Vector<EntryDescription>&& value) { m_networkAclEntriesToBeCreatedHasBeenSet = true; m_networkAclEntriesToBeCreated = std::move(value); }
    inline CreateNetworkAclEntriesAction& WithNetworkAclEntriesToBeCreated(const Aws::Vector<EntryDescription>& value) { SetNetworkAclEntriesToBeCreated(value); return *this;}
    inline CreateNetworkAclEntriesAction& WithNetworkAclEntriesToBeCreated(Aws::Vector<EntryDescription>&& value) { SetNetworkAclEntriesToBeCreated(std::move(value)); return *this;}
    inline CreateNetworkAclEntriesAction& AddNetworkAclEntriesToBeCreated(const EntryDescription& value) { m_networkAclEntriesToBeCreatedHasBeenSet = true; m_networkAclEntriesToBeCreated.push_back(value); return *this; }
    inline CreateNetworkAclEntriesAction& AddNetworkAclEntriesToBeCreated(EntryDescription&& value) { m_networkAclEntriesToBeCreatedHasBeenSet = true; m_networkAclEntriesToBeCreated.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether it is possible for Firewall Manager to perform this
     * remediation action. A false value indicates that auto remediation is disabled or
     * Firewall Manager is unable to perform the action due to a conflict of some
     * kind.</p>
     */
    inline bool GetFMSCanRemediate() const{ return m_fMSCanRemediate; }
    inline bool FMSCanRemediateHasBeenSet() const { return m_fMSCanRemediateHasBeenSet; }
    inline void SetFMSCanRemediate(bool value) { m_fMSCanRemediateHasBeenSet = true; m_fMSCanRemediate = value; }
    inline CreateNetworkAclEntriesAction& WithFMSCanRemediate(bool value) { SetFMSCanRemediate(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::Vector<EntryDescription> m_networkAclEntriesToBeCreated;
    bool m_networkAclEntriesToBeCreatedHasBeenSet = false;

    bool m_fMSCanRemediate;
    bool m_fMSCanRemediateHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
