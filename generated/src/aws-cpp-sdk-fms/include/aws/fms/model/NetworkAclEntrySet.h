/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/NetworkAclEntry.h>
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
   * <p>The configuration of the first and last rules for the network ACL policy, and
   * the remediation settings for each. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclEntrySet">AWS
   * API Reference</a></p>
   */
  class NetworkAclEntrySet
  {
  public:
    AWS_FMS_API NetworkAclEntrySet() = default;
    AWS_FMS_API NetworkAclEntrySet(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclEntrySet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetFirstEntries() const { return m_firstEntries; }
    inline bool FirstEntriesHasBeenSet() const { return m_firstEntriesHasBeenSet; }
    template<typename FirstEntriesT = Aws::Vector<NetworkAclEntry>>
    void SetFirstEntries(FirstEntriesT&& value) { m_firstEntriesHasBeenSet = true; m_firstEntries = std::forward<FirstEntriesT>(value); }
    template<typename FirstEntriesT = Aws::Vector<NetworkAclEntry>>
    NetworkAclEntrySet& WithFirstEntries(FirstEntriesT&& value) { SetFirstEntries(std::forward<FirstEntriesT>(value)); return *this;}
    template<typename FirstEntriesT = NetworkAclEntry>
    NetworkAclEntrySet& AddFirstEntries(FirstEntriesT&& value) { m_firstEntriesHasBeenSet = true; m_firstEntries.emplace_back(std::forward<FirstEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool GetForceRemediateForFirstEntries() const { return m_forceRemediateForFirstEntries; }
    inline bool ForceRemediateForFirstEntriesHasBeenSet() const { return m_forceRemediateForFirstEntriesHasBeenSet; }
    inline void SetForceRemediateForFirstEntries(bool value) { m_forceRemediateForFirstEntriesHasBeenSet = true; m_forceRemediateForFirstEntries = value; }
    inline NetworkAclEntrySet& WithForceRemediateForFirstEntries(bool value) { SetForceRemediateForFirstEntries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetLastEntries() const { return m_lastEntries; }
    inline bool LastEntriesHasBeenSet() const { return m_lastEntriesHasBeenSet; }
    template<typename LastEntriesT = Aws::Vector<NetworkAclEntry>>
    void SetLastEntries(LastEntriesT&& value) { m_lastEntriesHasBeenSet = true; m_lastEntries = std::forward<LastEntriesT>(value); }
    template<typename LastEntriesT = Aws::Vector<NetworkAclEntry>>
    NetworkAclEntrySet& WithLastEntries(LastEntriesT&& value) { SetLastEntries(std::forward<LastEntriesT>(value)); return *this;}
    template<typename LastEntriesT = NetworkAclEntry>
    NetworkAclEntrySet& AddLastEntries(LastEntriesT&& value) { m_lastEntriesHasBeenSet = true; m_lastEntries.emplace_back(std::forward<LastEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool GetForceRemediateForLastEntries() const { return m_forceRemediateForLastEntries; }
    inline bool ForceRemediateForLastEntriesHasBeenSet() const { return m_forceRemediateForLastEntriesHasBeenSet; }
    inline void SetForceRemediateForLastEntries(bool value) { m_forceRemediateForLastEntriesHasBeenSet = true; m_forceRemediateForLastEntries = value; }
    inline NetworkAclEntrySet& WithForceRemediateForLastEntries(bool value) { SetForceRemediateForLastEntries(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkAclEntry> m_firstEntries;
    bool m_firstEntriesHasBeenSet = false;

    bool m_forceRemediateForFirstEntries{false};
    bool m_forceRemediateForFirstEntriesHasBeenSet = false;

    Aws::Vector<NetworkAclEntry> m_lastEntries;
    bool m_lastEntriesHasBeenSet = false;

    bool m_forceRemediateForLastEntries{false};
    bool m_forceRemediateForLastEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
