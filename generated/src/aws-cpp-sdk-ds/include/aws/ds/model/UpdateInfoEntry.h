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
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry();
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API UpdateInfoEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Region. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline UpdateInfoEntry& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline UpdateInfoEntry& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline UpdateInfoEntry& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the update performed on the directory. </p>
     */
    inline const UpdateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateInfoEntry& WithStatus(const UpdateStatus& value) { SetStatus(value); return *this;}
    inline UpdateInfoEntry& WithStatus(UpdateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the current status of the update type activity. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline UpdateInfoEntry& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline UpdateInfoEntry& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline UpdateInfoEntry& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This specifies if the update was initiated by the customer or by the service
     * team. </p>
     */
    inline const Aws::String& GetInitiatedBy() const{ return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(const Aws::String& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline void SetInitiatedBy(Aws::String&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }
    inline void SetInitiatedBy(const char* value) { m_initiatedByHasBeenSet = true; m_initiatedBy.assign(value); }
    inline UpdateInfoEntry& WithInitiatedBy(const Aws::String& value) { SetInitiatedBy(value); return *this;}
    inline UpdateInfoEntry& WithInitiatedBy(Aws::String&& value) { SetInitiatedBy(std::move(value)); return *this;}
    inline UpdateInfoEntry& WithInitiatedBy(const char* value) { SetInitiatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new value of the target setting. </p>
     */
    inline const UpdateValue& GetNewValue() const{ return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    inline void SetNewValue(const UpdateValue& value) { m_newValueHasBeenSet = true; m_newValue = value; }
    inline void SetNewValue(UpdateValue&& value) { m_newValueHasBeenSet = true; m_newValue = std::move(value); }
    inline UpdateInfoEntry& WithNewValue(const UpdateValue& value) { SetNewValue(value); return *this;}
    inline UpdateInfoEntry& WithNewValue(UpdateValue&& value) { SetNewValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The old value of the target setting. </p>
     */
    inline const UpdateValue& GetPreviousValue() const{ return m_previousValue; }
    inline bool PreviousValueHasBeenSet() const { return m_previousValueHasBeenSet; }
    inline void SetPreviousValue(const UpdateValue& value) { m_previousValueHasBeenSet = true; m_previousValue = value; }
    inline void SetPreviousValue(UpdateValue&& value) { m_previousValueHasBeenSet = true; m_previousValue = std::move(value); }
    inline UpdateInfoEntry& WithPreviousValue(const UpdateValue& value) { SetPreviousValue(value); return *this;}
    inline UpdateInfoEntry& WithPreviousValue(UpdateValue&& value) { SetPreviousValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the <code>UpdateDirectorySetup</code> for the particular
     * type. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline UpdateInfoEntry& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline UpdateInfoEntry& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last updated date and time of a particular directory setting. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline UpdateInfoEntry& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateInfoEntry& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    UpdateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;

    UpdateValue m_newValue;
    bool m_newValueHasBeenSet = false;

    UpdateValue m_previousValue;
    bool m_previousValueHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
