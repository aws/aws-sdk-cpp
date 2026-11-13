/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/RecordType.h>
#include <aws/guardduty/model/SupportingData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about one step in the reasoning that GuardDuty followed
 * during an investigation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationRecord">AWS
 * API Reference</a></p>
 */
class InvestigationRecord {
 public:
  AWS_GUARDDUTY_API InvestigationRecord() = default;
  AWS_GUARDDUTY_API InvestigationRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the record.</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  InvestigationRecord& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the record. Possible values:</p> <ul> <li> <p>
   * <code>UPDATE</code> – A progress milestone, such as the request that started the
   * investigation or a response from GuardDuty.</p> </li> <li> <p>
   * <code>FETCH</code> – Data that GuardDuty retrieved for the investigation, such
   * as a finding, a detector configuration, or a list of your member accounts. The
   * record includes what GuardDuty requested and what it received.</p> </li> <li>
   * <p> <code>OBSERVATION</code> – A fact that GuardDuty noted about your
   * environment, such as the affected resource, the activity on that resource, or
   * your detection coverage.</p> </li> <li> <p> <code>ANALYSIS</code> – An
   * assessment that GuardDuty derived from the data, such as a threat assessment, a
   * comparison against normal behavior, or a process lineage.</p> </li> <li> <p>
   * <code>METADATA</code> – Operational details about the investigation itself, such
   * as how long the investigation took.</p> </li> </ul>
   */
  inline RecordType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RecordType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InvestigationRecord& WithType(RecordType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short title that describes the step.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  InvestigationRecord& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A plain-text explanation of the step. A narrative can span several
   * paragraphs. Not every record includes a narrative.</p>
   */
  inline const Aws::String& GetNarrative() const { return m_narrative; }
  inline bool NarrativeHasBeenSet() const { return m_narrativeHasBeenSet; }
  template <typename NarrativeT = Aws::String>
  void SetNarrative(NarrativeT&& value) {
    m_narrativeHasBeenSet = true;
    m_narrative = std::forward<NarrativeT>(value);
  }
  template <typename NarrativeT = Aws::String>
  InvestigationRecord& WithNarrative(NarrativeT&& value) {
    SetNarrative(std::forward<NarrativeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which GuardDuty created the record.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  InvestigationRecord& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The structured details for the step. The member that is set matches the
   * record type. <code>UPDATE</code> records never include supporting data, and
   * records of other types don't always include it.</p>
   */
  inline const SupportingData& GetSupportingData() const { return m_supportingData; }
  inline bool SupportingDataHasBeenSet() const { return m_supportingDataHasBeenSet; }
  template <typename SupportingDataT = SupportingData>
  void SetSupportingData(SupportingDataT&& value) {
    m_supportingDataHasBeenSet = true;
    m_supportingData = std::forward<SupportingDataT>(value);
  }
  template <typename SupportingDataT = SupportingData>
  InvestigationRecord& WithSupportingData(SupportingDataT&& value) {
    SetSupportingData(std::forward<SupportingDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordId;

  RecordType m_type{RecordType::NOT_SET};

  Aws::String m_title;

  Aws::String m_narrative;

  Aws::Utils::DateTime m_createdAt{};

  SupportingData m_supportingData;
  bool m_recordIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_narrativeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_supportingDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
