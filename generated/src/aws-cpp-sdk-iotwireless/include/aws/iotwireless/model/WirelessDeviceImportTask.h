/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/SidewalkGetStartImportInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotwireless/model/ImportTaskStatus.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Information about an import task for wireless devices.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessDeviceImportTask">AWS
   * API Reference</a></p>
   */
  class WirelessDeviceImportTask
  {
  public:
    AWS_IOTWIRELESS_API WirelessDeviceImportTask() = default;
    AWS_IOTWIRELESS_API WirelessDeviceImportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WirelessDeviceImportTask& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WirelessDeviceImportTask& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    WirelessDeviceImportTask& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline const SidewalkGetStartImportInfo& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkGetStartImportInfo>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkGetStartImportInfo>
    WirelessDeviceImportTask& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the import task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    WirelessDeviceImportTask& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline ImportTaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ImportTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WirelessDeviceImportTask& WithStatus(ImportTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    WirelessDeviceImportTask& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of count of wireless devices that are waiting for the
     * control log to be added to an import task.</p>
     */
    inline long long GetInitializedImportedDeviceCount() const { return m_initializedImportedDeviceCount; }
    inline bool InitializedImportedDeviceCountHasBeenSet() const { return m_initializedImportedDeviceCountHasBeenSet; }
    inline void SetInitializedImportedDeviceCount(long long value) { m_initializedImportedDeviceCountHasBeenSet = true; m_initializedImportedDeviceCount = value; }
    inline WirelessDeviceImportTask& WithInitializedImportedDeviceCount(long long value) { SetInitializedImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of count of wireless devices in an import task that
     * are waiting in the queue to be onboarded.</p>
     */
    inline long long GetPendingImportedDeviceCount() const { return m_pendingImportedDeviceCount; }
    inline bool PendingImportedDeviceCountHasBeenSet() const { return m_pendingImportedDeviceCountHasBeenSet; }
    inline void SetPendingImportedDeviceCount(long long value) { m_pendingImportedDeviceCountHasBeenSet = true; m_pendingImportedDeviceCount = value; }
    inline WirelessDeviceImportTask& WithPendingImportedDeviceCount(long long value) { SetPendingImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of count of wireless devices in an import task that
     * have been onboarded to the import task.</p>
     */
    inline long long GetOnboardedImportedDeviceCount() const { return m_onboardedImportedDeviceCount; }
    inline bool OnboardedImportedDeviceCountHasBeenSet() const { return m_onboardedImportedDeviceCountHasBeenSet; }
    inline void SetOnboardedImportedDeviceCount(long long value) { m_onboardedImportedDeviceCountHasBeenSet = true; m_onboardedImportedDeviceCount = value; }
    inline WirelessDeviceImportTask& WithOnboardedImportedDeviceCount(long long value) { SetOnboardedImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of count of wireless devices in an import task that
     * failed to onboarded to the import task.</p>
     */
    inline long long GetFailedImportedDeviceCount() const { return m_failedImportedDeviceCount; }
    inline bool FailedImportedDeviceCountHasBeenSet() const { return m_failedImportedDeviceCountHasBeenSet; }
    inline void SetFailedImportedDeviceCount(long long value) { m_failedImportedDeviceCountHasBeenSet = true; m_failedImportedDeviceCount = value; }
    inline WirelessDeviceImportTask& WithFailedImportedDeviceCount(long long value) { SetFailedImportedDeviceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    SidewalkGetStartImportInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ImportTaskStatus m_status{ImportTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_initializedImportedDeviceCount{0};
    bool m_initializedImportedDeviceCountHasBeenSet = false;

    long long m_pendingImportedDeviceCount{0};
    bool m_pendingImportedDeviceCountHasBeenSet = false;

    long long m_onboardedImportedDeviceCount{0};
    bool m_onboardedImportedDeviceCountHasBeenSet = false;

    long long m_failedImportedDeviceCount{0};
    bool m_failedImportedDeviceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
