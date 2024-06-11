﻿/**
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
    AWS_FMS_API EntryViolation();
    AWS_FMS_API EntryViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EntryViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Firewall Manager-managed network ACL entry that is involved in the entry
     * violation. </p>
     */
    inline const EntryDescription& GetExpectedEntry() const{ return m_expectedEntry; }
    inline bool ExpectedEntryHasBeenSet() const { return m_expectedEntryHasBeenSet; }
    inline void SetExpectedEntry(const EntryDescription& value) { m_expectedEntryHasBeenSet = true; m_expectedEntry = value; }
    inline void SetExpectedEntry(EntryDescription&& value) { m_expectedEntryHasBeenSet = true; m_expectedEntry = std::move(value); }
    inline EntryViolation& WithExpectedEntry(const EntryDescription& value) { SetExpectedEntry(value); return *this;}
    inline EntryViolation& WithExpectedEntry(EntryDescription&& value) { SetExpectedEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation location within the ordered list of entries where the
     * <code>ExpectedEntry</code> should be, according to the network ACL policy
     * specifications. </p>
     */
    inline const Aws::String& GetExpectedEvaluationOrder() const{ return m_expectedEvaluationOrder; }
    inline bool ExpectedEvaluationOrderHasBeenSet() const { return m_expectedEvaluationOrderHasBeenSet; }
    inline void SetExpectedEvaluationOrder(const Aws::String& value) { m_expectedEvaluationOrderHasBeenSet = true; m_expectedEvaluationOrder = value; }
    inline void SetExpectedEvaluationOrder(Aws::String&& value) { m_expectedEvaluationOrderHasBeenSet = true; m_expectedEvaluationOrder = std::move(value); }
    inline void SetExpectedEvaluationOrder(const char* value) { m_expectedEvaluationOrderHasBeenSet = true; m_expectedEvaluationOrder.assign(value); }
    inline EntryViolation& WithExpectedEvaluationOrder(const Aws::String& value) { SetExpectedEvaluationOrder(value); return *this;}
    inline EntryViolation& WithExpectedEvaluationOrder(Aws::String&& value) { SetExpectedEvaluationOrder(std::move(value)); return *this;}
    inline EntryViolation& WithExpectedEvaluationOrder(const char* value) { SetExpectedEvaluationOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation location within the ordered list of entries where the
     * <code>ExpectedEntry</code> is currently located. </p>
     */
    inline const Aws::String& GetActualEvaluationOrder() const{ return m_actualEvaluationOrder; }
    inline bool ActualEvaluationOrderHasBeenSet() const { return m_actualEvaluationOrderHasBeenSet; }
    inline void SetActualEvaluationOrder(const Aws::String& value) { m_actualEvaluationOrderHasBeenSet = true; m_actualEvaluationOrder = value; }
    inline void SetActualEvaluationOrder(Aws::String&& value) { m_actualEvaluationOrderHasBeenSet = true; m_actualEvaluationOrder = std::move(value); }
    inline void SetActualEvaluationOrder(const char* value) { m_actualEvaluationOrderHasBeenSet = true; m_actualEvaluationOrder.assign(value); }
    inline EntryViolation& WithActualEvaluationOrder(const Aws::String& value) { SetActualEvaluationOrder(value); return *this;}
    inline EntryViolation& WithActualEvaluationOrder(Aws::String&& value) { SetActualEvaluationOrder(std::move(value)); return *this;}
    inline EntryViolation& WithActualEvaluationOrder(const char* value) { SetActualEvaluationOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entry that's currently in the <code>ExpectedEvaluationOrder</code>
     * location, in place of the expected entry. </p>
     */
    inline const EntryDescription& GetEntryAtExpectedEvaluationOrder() const{ return m_entryAtExpectedEvaluationOrder; }
    inline bool EntryAtExpectedEvaluationOrderHasBeenSet() const { return m_entryAtExpectedEvaluationOrderHasBeenSet; }
    inline void SetEntryAtExpectedEvaluationOrder(const EntryDescription& value) { m_entryAtExpectedEvaluationOrderHasBeenSet = true; m_entryAtExpectedEvaluationOrder = value; }
    inline void SetEntryAtExpectedEvaluationOrder(EntryDescription&& value) { m_entryAtExpectedEvaluationOrderHasBeenSet = true; m_entryAtExpectedEvaluationOrder = std::move(value); }
    inline EntryViolation& WithEntryAtExpectedEvaluationOrder(const EntryDescription& value) { SetEntryAtExpectedEvaluationOrder(value); return *this;}
    inline EntryViolation& WithEntryAtExpectedEvaluationOrder(EntryDescription&& value) { SetEntryAtExpectedEvaluationOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of entries that are in conflict with <code>ExpectedEntry</code>.
     * </p>
     */
    inline const Aws::Vector<EntryDescription>& GetEntriesWithConflicts() const{ return m_entriesWithConflicts; }
    inline bool EntriesWithConflictsHasBeenSet() const { return m_entriesWithConflictsHasBeenSet; }
    inline void SetEntriesWithConflicts(const Aws::Vector<EntryDescription>& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts = value; }
    inline void SetEntriesWithConflicts(Aws::Vector<EntryDescription>&& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts = std::move(value); }
    inline EntryViolation& WithEntriesWithConflicts(const Aws::Vector<EntryDescription>& value) { SetEntriesWithConflicts(value); return *this;}
    inline EntryViolation& WithEntriesWithConflicts(Aws::Vector<EntryDescription>&& value) { SetEntriesWithConflicts(std::move(value)); return *this;}
    inline EntryViolation& AddEntriesWithConflicts(const EntryDescription& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts.push_back(value); return *this; }
    inline EntryViolation& AddEntriesWithConflicts(EntryDescription&& value) { m_entriesWithConflictsHasBeenSet = true; m_entriesWithConflicts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Descriptions of the violations that Firewall Manager found for these entries.
     * </p>
     */
    inline const Aws::Vector<EntryViolationReason>& GetEntryViolationReasons() const{ return m_entryViolationReasons; }
    inline bool EntryViolationReasonsHasBeenSet() const { return m_entryViolationReasonsHasBeenSet; }
    inline void SetEntryViolationReasons(const Aws::Vector<EntryViolationReason>& value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons = value; }
    inline void SetEntryViolationReasons(Aws::Vector<EntryViolationReason>&& value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons = std::move(value); }
    inline EntryViolation& WithEntryViolationReasons(const Aws::Vector<EntryViolationReason>& value) { SetEntryViolationReasons(value); return *this;}
    inline EntryViolation& WithEntryViolationReasons(Aws::Vector<EntryViolationReason>&& value) { SetEntryViolationReasons(std::move(value)); return *this;}
    inline EntryViolation& AddEntryViolationReasons(const EntryViolationReason& value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons.push_back(value); return *this; }
    inline EntryViolation& AddEntryViolationReasons(EntryViolationReason&& value) { m_entryViolationReasonsHasBeenSet = true; m_entryViolationReasons.push_back(std::move(value)); return *this; }
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
