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
    AWS_FMS_API EntryDescription() = default;
    AWS_FMS_API EntryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EntryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const NetworkAclEntry& GetEntryDetail() const { return m_entryDetail; }
    inline bool EntryDetailHasBeenSet() const { return m_entryDetailHasBeenSet; }
    template<typename EntryDetailT = NetworkAclEntry>
    void SetEntryDetail(EntryDetailT&& value) { m_entryDetailHasBeenSet = true; m_entryDetail = std::forward<EntryDetailT>(value); }
    template<typename EntryDetailT = NetworkAclEntry>
    EntryDescription& WithEntryDetail(EntryDetailT&& value) { SetEntryDetail(std::forward<EntryDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number for the entry. ACL entries are processed in ascending order
     * by rule number. In a Firewall Manager network ACL policy, Firewall Manager
     * assigns rule numbers. </p>
     */
    inline int GetEntryRuleNumber() const { return m_entryRuleNumber; }
    inline bool EntryRuleNumberHasBeenSet() const { return m_entryRuleNumberHasBeenSet; }
    inline void SetEntryRuleNumber(int value) { m_entryRuleNumberHasBeenSet = true; m_entryRuleNumber = value; }
    inline EntryDescription& WithEntryRuleNumber(int value) { SetEntryRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the entry is managed by Firewall Manager or by a user, and,
     * for Firewall Manager-managed entries, specifies whether the entry is among those
     * that run first in the network ACL or those that run last. </p>
     */
    inline EntryType GetEntryType() const { return m_entryType; }
    inline bool EntryTypeHasBeenSet() const { return m_entryTypeHasBeenSet; }
    inline void SetEntryType(EntryType value) { m_entryTypeHasBeenSet = true; m_entryType = value; }
    inline EntryDescription& WithEntryType(EntryType value) { SetEntryType(value); return *this;}
    ///@}
  private:

    NetworkAclEntry m_entryDetail;
    bool m_entryDetailHasBeenSet = false;

    int m_entryRuleNumber{0};
    bool m_entryRuleNumberHasBeenSet = false;

    EntryType m_entryType{EntryType::NOT_SET};
    bool m_entryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
