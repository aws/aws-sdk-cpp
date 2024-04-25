/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkAclEntry.h>
#include <aws/fms/model/EntryType.h>
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
   * <p>Describes a single rule in a network ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EntryDescription">AWS
   * API Reference</a></p>
   */
  class EntryDescription
  {
  public:
    AWS_FMS_API EntryDescription();
    AWS_FMS_API EntryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EntryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline const NetworkAclEntry& GetEntryDetail() const{ return m_entryDetail; }

    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline bool EntryDetailHasBeenSet() const { return m_entryDetailHasBeenSet; }

    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline void SetEntryDetail(const NetworkAclEntry& value) { m_entryDetailHasBeenSet = true; m_entryDetail = value; }

    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline void SetEntryDetail(NetworkAclEntry&& value) { m_entryDetailHasBeenSet = true; m_entryDetail = std::move(value); }

    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline EntryDescription& WithEntryDetail(const NetworkAclEntry& value) { SetEntryDetail(value); return *this;}

    /**
     * <p>Describes a rule in a network ACL.</p> <p>Each network ACL has a set of
     * numbered ingress rules and a separate set of numbered egress rules. When
     * determining whether a packet should be allowed in or out of a subnet associated
     * with the network ACL, Amazon Web Services processes the entries in the network
     * ACL according to the rule numbers, in ascending order. </p> <p>When you manage
     * an individual network ACL, you explicitly specify the rule numbers. When you
     * specify the network ACL rules in a Firewall Manager policy, you provide the
     * rules to run first, in the order that you want them to run, and the rules to run
     * last, in the order that you want them to run. Firewall Manager assigns the rule
     * numbers for you when you save the network ACL policy specification.</p>
     */
    inline EntryDescription& WithEntryDetail(NetworkAclEntry&& value) { SetEntryDetail(std::move(value)); return *this;}


    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number. In a Firewall Manager network ACL policy, Firewall Manager
     * assigns rule numbers. </p>
     */
    inline int GetEntryRuleNumber() const{ return m_entryRuleNumber; }

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number. In a Firewall Manager network ACL policy, Firewall Manager
     * assigns rule numbers. </p>
     */
    inline bool EntryRuleNumberHasBeenSet() const { return m_entryRuleNumberHasBeenSet; }

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number. In a Firewall Manager network ACL policy, Firewall Manager
     * assigns rule numbers. </p>
     */
    inline void SetEntryRuleNumber(int value) { m_entryRuleNumberHasBeenSet = true; m_entryRuleNumber = value; }

    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number. In a Firewall Manager network ACL policy, Firewall Manager
     * assigns rule numbers. </p>
     */
    inline EntryDescription& WithEntryRuleNumber(int value) { SetEntryRuleNumber(value); return *this;}


    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline const EntryType& GetEntryType() const{ return m_entryType; }

    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline bool EntryTypeHasBeenSet() const { return m_entryTypeHasBeenSet; }

    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline void SetEntryType(const EntryType& value) { m_entryTypeHasBeenSet = true; m_entryType = value; }

    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline void SetEntryType(EntryType&& value) { m_entryTypeHasBeenSet = true; m_entryType = std::move(value); }

    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline EntryDescription& WithEntryType(const EntryType& value) { SetEntryType(value); return *this;}

    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline EntryDescription& WithEntryType(EntryType&& value) { SetEntryType(std::move(value)); return *this;}

  private:

    NetworkAclEntry m_entryDetail;
    bool m_entryDetailHasBeenSet = false;

    int m_entryRuleNumber;
    bool m_entryRuleNumberHasBeenSet = false;

    EntryType m_entryType;
    bool m_entryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
