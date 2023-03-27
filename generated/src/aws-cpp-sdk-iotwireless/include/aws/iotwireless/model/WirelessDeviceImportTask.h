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
    AWS_IOTWIRELESS_API WirelessDeviceImportTask();
    AWS_IOTWIRELESS_API WirelessDeviceImportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline WirelessDeviceImportTask& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline WirelessDeviceImportTask& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the Sidewalk destination that that describes the IoT rule to
     * route messages from the device in the import task that will be onboarded to AWS
     * IoT Wireless</p>
     */
    inline WirelessDeviceImportTask& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline const SidewalkGetStartImportInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline void SetSidewalk(const SidewalkGetStartImportInfo& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline void SetSidewalk(SidewalkGetStartImportInfo&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithSidewalk(const SidewalkGetStartImportInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related information of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithSidewalk(SidewalkGetStartImportInfo&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>The time at which the import task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline WirelessDeviceImportTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline WirelessDeviceImportTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline const ImportTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline void SetStatus(const ImportTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline void SetStatus(ImportTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithStatus(const ImportTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information of the wireless device import task.</p>
     */
    inline WirelessDeviceImportTask& WithStatus(ImportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline WirelessDeviceImportTask& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline WirelessDeviceImportTask& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason that provides additional information about the import task
     * status.</p>
     */
    inline WirelessDeviceImportTask& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The summary information of count of wireless devices that are waiting for the
     * control log to be added to an import task.</p>
     */
    inline long long GetInitializedImportedDeviceCount() const{ return m_initializedImportedDeviceCount; }

    /**
     * <p>The summary information of count of wireless devices that are waiting for the
     * control log to be added to an import task.</p>
     */
    inline bool InitializedImportedDeviceCountHasBeenSet() const { return m_initializedImportedDeviceCountHasBeenSet; }

    /**
     * <p>The summary information of count of wireless devices that are waiting for the
     * control log to be added to an import task.</p>
     */
    inline void SetInitializedImportedDeviceCount(long long value) { m_initializedImportedDeviceCountHasBeenSet = true; m_initializedImportedDeviceCount = value; }

    /**
     * <p>The summary information of count of wireless devices that are waiting for the
     * control log to be added to an import task.</p>
     */
    inline WirelessDeviceImportTask& WithInitializedImportedDeviceCount(long long value) { SetInitializedImportedDeviceCount(value); return *this;}


    /**
     * <p>The summary information of count of wireless devices in an import task that
     * are waiting in the queue to be onboarded.</p>
     */
    inline long long GetPendingImportedDeviceCount() const{ return m_pendingImportedDeviceCount; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * are waiting in the queue to be onboarded.</p>
     */
    inline bool PendingImportedDeviceCountHasBeenSet() const { return m_pendingImportedDeviceCountHasBeenSet; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * are waiting in the queue to be onboarded.</p>
     */
    inline void SetPendingImportedDeviceCount(long long value) { m_pendingImportedDeviceCountHasBeenSet = true; m_pendingImportedDeviceCount = value; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * are waiting in the queue to be onboarded.</p>
     */
    inline WirelessDeviceImportTask& WithPendingImportedDeviceCount(long long value) { SetPendingImportedDeviceCount(value); return *this;}


    /**
     * <p>The summary information of count of wireless devices in an import task that
     * have been onboarded to the import task.</p>
     */
    inline long long GetOnboardedImportedDeviceCount() const{ return m_onboardedImportedDeviceCount; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * have been onboarded to the import task.</p>
     */
    inline bool OnboardedImportedDeviceCountHasBeenSet() const { return m_onboardedImportedDeviceCountHasBeenSet; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * have been onboarded to the import task.</p>
     */
    inline void SetOnboardedImportedDeviceCount(long long value) { m_onboardedImportedDeviceCountHasBeenSet = true; m_onboardedImportedDeviceCount = value; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * have been onboarded to the import task.</p>
     */
    inline WirelessDeviceImportTask& WithOnboardedImportedDeviceCount(long long value) { SetOnboardedImportedDeviceCount(value); return *this;}


    /**
     * <p>The summary information of count of wireless devices in an import task that
     * failed to onboarded to the import task.</p>
     */
    inline long long GetFailedImportedDeviceCount() const{ return m_failedImportedDeviceCount; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * failed to onboarded to the import task.</p>
     */
    inline bool FailedImportedDeviceCountHasBeenSet() const { return m_failedImportedDeviceCountHasBeenSet; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * failed to onboarded to the import task.</p>
     */
    inline void SetFailedImportedDeviceCount(long long value) { m_failedImportedDeviceCountHasBeenSet = true; m_failedImportedDeviceCount = value; }

    /**
     * <p>The summary information of count of wireless devices in an import task that
     * failed to onboarded to the import task.</p>
     */
    inline WirelessDeviceImportTask& WithFailedImportedDeviceCount(long long value) { SetFailedImportedDeviceCount(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    SidewalkGetStartImportInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ImportTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_initializedImportedDeviceCount;
    bool m_initializedImportedDeviceCountHasBeenSet = false;

    long long m_pendingImportedDeviceCount;
    bool m_pendingImportedDeviceCountHasBeenSet = false;

    long long m_onboardedImportedDeviceCount;
    bool m_onboardedImportedDeviceCountHasBeenSet = false;

    long long m_failedImportedDeviceCount;
    bool m_failedImportedDeviceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
