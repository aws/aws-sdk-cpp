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
    AWS_FMS_API NetworkAclEntrySet();
    AWS_FMS_API NetworkAclEntrySet(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclEntrySet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetFirstEntries() const{ return m_firstEntries; }

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline bool FirstEntriesHasBeenSet() const { return m_firstEntriesHasBeenSet; }

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline void SetFirstEntries(const Aws::Vector<NetworkAclEntry>& value) { m_firstEntriesHasBeenSet = true; m_firstEntries = value; }

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline void SetFirstEntries(Aws::Vector<NetworkAclEntry>&& value) { m_firstEntriesHasBeenSet = true; m_firstEntries = std::move(value); }

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& WithFirstEntries(const Aws::Vector<NetworkAclEntry>& value) { SetFirstEntries(value); return *this;}

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& WithFirstEntries(Aws::Vector<NetworkAclEntry>&& value) { SetFirstEntries(std::move(value)); return *this;}

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& AddFirstEntries(const NetworkAclEntry& value) { m_firstEntriesHasBeenSet = true; m_firstEntries.push_back(value); return *this; }

    /**
     * <p>The rules that you want to run first in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& AddFirstEntries(NetworkAclEntry&& value) { m_firstEntriesHasBeenSet = true; m_firstEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool GetForceRemediateForFirstEntries() const{ return m_forceRemediateForFirstEntries; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool ForceRemediateForFirstEntriesHasBeenSet() const { return m_forceRemediateForFirstEntriesHasBeenSet; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline void SetForceRemediateForFirstEntries(bool value) { m_forceRemediateForFirstEntriesHasBeenSet = true; m_forceRemediateForFirstEntries = value; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline NetworkAclEntrySet& WithForceRemediateForFirstEntries(bool value) { SetForceRemediateForFirstEntries(value); return *this;}


    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetLastEntries() const{ return m_lastEntries; }

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline bool LastEntriesHasBeenSet() const { return m_lastEntriesHasBeenSet; }

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline void SetLastEntries(const Aws::Vector<NetworkAclEntry>& value) { m_lastEntriesHasBeenSet = true; m_lastEntries = value; }

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline void SetLastEntries(Aws::Vector<NetworkAclEntry>&& value) { m_lastEntriesHasBeenSet = true; m_lastEntries = std::move(value); }

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& WithLastEntries(const Aws::Vector<NetworkAclEntry>& value) { SetLastEntries(value); return *this;}

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& WithLastEntries(Aws::Vector<NetworkAclEntry>&& value) { SetLastEntries(std::move(value)); return *this;}

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& AddLastEntries(const NetworkAclEntry& value) { m_lastEntriesHasBeenSet = true; m_lastEntries.push_back(value); return *this; }

    /**
     * <p>The rules that you want to run last in the Firewall Manager managed network
     * ACLs. </p>  <p>Provide these in the order in which you want them to run.
     * Firewall Manager will assign the specific rule numbers for you, in the network
     * ACLs that it creates. </p>  <p>You must specify at least one first entry
     * or one last entry in any network ACL policy. </p>
     */
    inline NetworkAclEntrySet& AddLastEntries(NetworkAclEntry&& value) { m_lastEntriesHasBeenSet = true; m_lastEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool GetForceRemediateForLastEntries() const{ return m_forceRemediateForLastEntries; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline bool ForceRemediateForLastEntriesHasBeenSet() const { return m_forceRemediateForLastEntriesHasBeenSet; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline void SetForceRemediateForLastEntries(bool value) { m_forceRemediateForLastEntriesHasBeenSet = true; m_forceRemediateForLastEntries = value; }

    /**
     * <p>Applies only when remediation is enabled for the policy as a whole. Firewall
     * Manager uses this setting when it finds policy violations that involve conflicts
     * between the custom entries and the policy entries. </p> <p>If forced remediation
     * is disabled, Firewall Manager marks the network ACL as noncompliant and does not
     * try to remediate. For more information about the remediation behavior, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/network-acl-policies.html#network-acls-remediation">Remediation
     * for managed network ACLs</a> in the <i>Firewall Manager Developer Guide</i>.</p>
     */
    inline NetworkAclEntrySet& WithForceRemediateForLastEntries(bool value) { SetForceRemediateForLastEntries(value); return *this;}

  private:

    Aws::Vector<NetworkAclEntry> m_firstEntries;
    bool m_firstEntriesHasBeenSet = false;

    bool m_forceRemediateForFirstEntries;
    bool m_forceRemediateForFirstEntriesHasBeenSet = false;

    Aws::Vector<NetworkAclEntry> m_lastEntries;
    bool m_lastEntriesHasBeenSet = false;

    bool m_forceRemediateForLastEntries;
    bool m_forceRemediateForLastEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
