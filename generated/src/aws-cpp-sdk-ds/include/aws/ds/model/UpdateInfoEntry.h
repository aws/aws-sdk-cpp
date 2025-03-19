/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateStatus.h>
#include <aws/ds/model/UpdateValue.h>
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
   * <p> An entry of update information related to a requested update type.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateInfoEntry">AWS
   * API Reference</a></p>
   */
  class UpdateInfoEntry
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry() = default;
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Region. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    UpdateInfoEntry& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the update performed on the directory. </p>
     */
    inline UpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateInfoEntry& WithStatus(UpdateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the current status of the update type activity. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    UpdateInfoEntry& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This specifies if the update was initiated by the customer or by the service
     * team. </p>
     */
    inline const Aws::String& GetInitiatedBy() const { return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    template<typename InitiatedByT = Aws::String>
    void SetInitiatedBy(InitiatedByT&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::forward<InitiatedByT>(value); }
    template<typename InitiatedByT = Aws::String>
    UpdateInfoEntry& WithInitiatedBy(InitiatedByT&& value) { SetInitiatedBy(std::forward<InitiatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new value of the target setting. </p>
     */
    inline const UpdateValue& GetNewValue() const { return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    template<typename NewValueT = UpdateValue>
    void SetNewValue(NewValueT&& value) { m_newValueHasBeenSet = true; m_newValue = std::forward<NewValueT>(value); }
    template<typename NewValueT = UpdateValue>
    UpdateInfoEntry& WithNewValue(NewValueT&& value) { SetNewValue(std::forward<NewValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The old value of the target setting. </p>
     */
    inline const UpdateValue& GetPreviousValue() const { return m_previousValue; }
    inline bool PreviousValueHasBeenSet() const { return m_previousValueHasBeenSet; }
    template<typename PreviousValueT = UpdateValue>
    void SetPreviousValue(PreviousValueT&& value) { m_previousValueHasBeenSet = true; m_previousValue = std::forward<PreviousValueT>(value); }
    template<typename PreviousValueT = UpdateValue>
    UpdateInfoEntry& WithPreviousValue(PreviousValueT&& value) { SetPreviousValue(std::forward<PreviousValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the <code>UpdateDirectorySetup</code> for the particular
     * type. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    UpdateInfoEntry& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last updated date and time of a particular directory setting. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    UpdateInfoEntry& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    UpdateStatus m_status{UpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;

    UpdateValue m_newValue;
    bool m_newValueHasBeenSet = false;

    UpdateValue m_previousValue;
    bool m_previousValueHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
