/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/EntryDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/EntryViolationReason.h>
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
   * <p>Detailed information about an entry violation in a network ACL. The violation
   * is against the network ACL specification inside the Firewall Manager network ACL
   * policy. This data object is part of
   * <code>InvalidNetworkAclEntriesViolation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EntryViolation">AWS
   * API Reference</a></p>
   */
  class EntryViolation
  {
  public:
    AWS_FMS_API EntryViolation() = default;
    AWS_FMS_API EntryViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EntryViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Firewall Manager-managed network ACL entry that is involved in the entry
     * violation. </p>
     */
    inline const EntryDescription& GetExpectedEntry() const { return m_expectedEntry; }
    inline bool ExpectedEntryHasBeenSet() const { return m_expectedEntryHasBeenSet; }
    template<typename ExpectedEntryT = EntryDescription>
    void SetExpectedEntry(ExpectedEntryT&& value) { m_expectedEntryHasBeenSet = true; m_expectedEntry = std::forward<ExpectedEntryT>(value); }
    template<typename ExpectedEntryT = EntryDescription>
    EntryViolation& WithExpectedEntry(ExpectedEntryT&& value) { SetExpectedEntry(std::forward<ExpectedEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation location within the ordered list of entries where the
     * <code>ExpectedEntry</code> should be, according to the network ACL policy
     * specifications. </p>
     */
    inline const Aws::String& GetExpectedEvaluationOrder() const { return m_expectedEvaluationOrder; }
    inline bool ExpectedEvaluationOrderHasBeenSet() const { return m_expectedEvaluationOrderHasBeenSet; }
    template<typename ExpectedEvaluationOrderT = Aws::String>
    void SetExpectedEvaluationOrder(ExpectedEvaluationOrderT&& value) { m_expectedEvaluationOrderHasBeenSet = true; m_expectedEvaluationOrder = std::forward<ExpectedEvaluationOrderT>(value); }
    template<typename ExpectedEvaluationOrderT = Aws::String>
    EntryViolation& WithExpectedEvaluationOrder(ExpectedEvaluationOrderT&& value) { SetExpectedEvaluationOrder(std::forward<ExpectedEvaluationOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation location within the ordered list of entries where the
     * <code>ExpectedEntry</code> is currently located. </p>
     */
    inline const Aws::String& GetActualEvaluationOrder() const { return m_actualEvaluationOrder; }
    inline bool ActualEvaluationOrderHasBeenSet() const { return m_actualEvaluationOrderHasBeenSet; }
    template<typename ActualEvaluationOrderT = Aws::String>
    void SetActualEvaluationOrder(ActualEvaluationOrderT&& value) { m_actualEvaluationOrderHasBeenSet = true; m_actualEvaluationOrder = std::forward<ActualEvaluationOrderT>(value); }
    template<typename ActualEvaluationOrderT = Aws::String>
    EntryViolation& WithActualEvaluationOrder(ActualEvaluationOrderT&& value) { SetActualEvaluationOrder(std::forward<ActualEvaluationOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entry that's currently in the <code>ExpectedEvaluationOrder</code>
     * location, in place of the expected entry. </p>
     */
    inline const EntryDescription& GetEntryAtExpectedEvaluationOrder() const { return m_entryAtExpectedEvaluationOrder; }
    inline bool EntryAtExpectedEvaluationOrderHasBeenSet() const { return m_entryAtExpectedEvaluationOrderHasBeenSet; }
    template<typename EntryAtExpectedEvaluationOrderT = EntryDescription>
    void SetEntryAtExpectedEvaluationOrder(EntryAtExpectedEvaluationOrderT&& value) { m_entryAtExpectedEvaluationOrderHasBeenSet = true; m_entryAtExpectedEvaluationOrder = std::forward<EntryAtExpectedEvaluationOrderT>(value); }
    template<typename EntryAtExpectedEvaluationOrderT = EntryDescription>
    EntryViolation& WithEntryAtExpectedEvaluationOrder(EntryAtExpectedEvaluationOrderT&& value) { SetEntryAtExpectedEvaluationOrder(std::forward<EntryAtExpectedEvaluationOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of entries that are in conflict with <code>ExpectedEntry</code>.
     * </p>
     */
    inline const Aws::Vector<EntryDescription>& GetEntriesWithConflicts() const { return m_entriesWithConflicts; }
    inline bool EntriesWithConflictsHasBeenSet() const { return m_entriesWithConflictsHasBeenSet; }
    template<typename EntriesWithConflictsT = Aws::Vector<EntryDescription>>
    void SetEntriesWithConflicts(EntriesWithConflictsT&& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts = std::forward<EntriesWithConflictsT>(value); }
    template<typename EntriesWithConflictsT = Aws::Vector<EntryDescription>>
    EntryViolation& WithEntriesWithConflicts(EntriesWithConflictsT&& value) { SetEntriesWithConflicts(std::forward<EntriesWithConflictsT>(value)); return *this;}
    template<typename EntriesWithConflictsT = EntryDescription>
    EntryViolation& AddEntriesWithConflicts(EntriesWithConflictsT&& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts.emplace_back(std::forward<EntriesWithConflictsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Descriptions of the violations that Firewall Manager found for these entries.
     * </p>
     */
    inline const Aws::Vector<EntryViolationReason>& GetEntryViolationReasons() const { return m_entryViolationReasons; }
    inline bool EntryViolationReasonsHasBeenSet() const { return m_entryViolationReasonsHasBeenSet; }
    template<typename EntryViolationReasonsT = Aws::Vector<EntryViolationReason>>
    void SetEntryViolationReasons(EntryViolationReasonsT&& value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons = std::forward<EntryViolationReasonsT>(value); }
    template<typename EntryViolationReasonsT = Aws::Vector<EntryViolationReason>>
    EntryViolation& WithEntryViolationReasons(EntryViolationReasonsT&& value) { SetEntryViolationReasons(std::forward<EntryViolationReasonsT>(value)); return *this;}
    inline EntryViolation& AddEntryViolationReasons(EntryViolationReason value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons.push_back(value); return *this; }
    ///@}
  private:

    EntryDescription m_expectedEntry;
    bool m_expectedEntryHasBeenSet = false;

    Aws::String m_expectedEvaluationOrder;
    bool m_expectedEvaluationOrderHasBeenSet = false;

    Aws::String m_actualEvaluationOrder;
    bool m_actualEvaluationOrderHasBeenSet = false;

    EntryDescription m_entryAtExpectedEvaluationOrder;
    bool m_entryAtExpectedEvaluationOrderHasBeenSet = false;

    Aws::Vector<EntryDescription> m_entriesWithConflicts;
    bool m_entriesWithConflictsHasBeenSet = false;

    Aws::Vector<EntryViolationReason> m_entryViolationReasons;
    bool m_entryViolationReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
