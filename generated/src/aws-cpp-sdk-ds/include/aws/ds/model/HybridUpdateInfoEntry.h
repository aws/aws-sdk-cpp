/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/UpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/HybridUpdateValue.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains detailed information about a specific update activity for a hybrid
   * directory component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/HybridUpdateInfoEntry">AWS
   * API Reference</a></p>
   */
  class HybridUpdateInfoEntry
  {
  public:
    AWS_DIRECTORYSERVICE_API HybridUpdateInfoEntry() = default;
    AWS_DIRECTORYSERVICE_API HybridUpdateInfoEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API HybridUpdateInfoEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the update activity. Valid values include
     * <code>UPDATED</code>, <code>UPDATING</code>, and <code>UPDATE_FAILED</code>.</p>
     */
    inline UpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline HybridUpdateInfoEntry& WithStatus(UpdateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the update status, including any error
     * details or progress information.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    HybridUpdateInfoEntry& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the update was initiated by the customer or Amazon Web
     * Services.</p>
     */
    inline const Aws::String& GetInitiatedBy() const { return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    template<typename InitiatedByT = Aws::String>
    void SetInitiatedBy(InitiatedByT&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::forward<InitiatedByT>(value); }
    template<typename InitiatedByT = Aws::String>
    HybridUpdateInfoEntry& WithInitiatedBy(InitiatedByT&& value) { SetInitiatedBy(std::forward<InitiatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new configuration values being applied in this update.</p>
     */
    inline const HybridUpdateValue& GetNewValue() const { return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    template<typename NewValueT = HybridUpdateValue>
    void SetNewValue(NewValueT&& value) { m_newValueHasBeenSet = true; m_newValue = std::forward<NewValueT>(value); }
    template<typename NewValueT = HybridUpdateValue>
    HybridUpdateInfoEntry& WithNewValue(NewValueT&& value) { SetNewValue(std::forward<NewValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous configuration values before this update was applied.</p>
     */
    inline const HybridUpdateValue& GetPreviousValue() const { return m_previousValue; }
    inline bool PreviousValueHasBeenSet() const { return m_previousValueHasBeenSet; }
    template<typename PreviousValueT = HybridUpdateValue>
    void SetPreviousValue(PreviousValueT&& value) { m_previousValueHasBeenSet = true; m_previousValue = std::forward<PreviousValueT>(value); }
    template<typename PreviousValueT = HybridUpdateValue>
    HybridUpdateInfoEntry& WithPreviousValue(PreviousValueT&& value) { SetPreviousValue(std::forward<PreviousValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the update activity was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    HybridUpdateInfoEntry& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the update activity status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    HybridUpdateInfoEntry& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the assessment performed to validate this update
     * configuration.</p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    HybridUpdateInfoEntry& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}
  private:

    UpdateStatus m_status{UpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;

    HybridUpdateValue m_newValue;
    bool m_newValueHasBeenSet = false;

    HybridUpdateValue m_previousValue;
    bool m_previousValueHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
