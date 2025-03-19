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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetWirelessDeviceImportTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult() = default;
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetWirelessDeviceImportTaskResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetWirelessDeviceImportTaskResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    GetWirelessDeviceImportTaskResult& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline const SidewalkGetStartImportInfo& GetSidewalk() const { return m_sidewalk; }
    template<typename SidewalkT = SidewalkGetStartImportInfo>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkGetStartImportInfo>
    GetWirelessDeviceImportTaskResult& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the import task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetWirelessDeviceImportTaskResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import task status.</p>
     */
    inline ImportTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(ImportTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWirelessDeviceImportTaskResult& WithStatus(ImportTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetWirelessDeviceImportTaskResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices in the import task that are waiting for the control log
     * to start processing.</p>
     */
    inline long long GetInitializedImportedDeviceCount() const { return m_initializedImportedDeviceCount; }
    inline void SetInitializedImportedDeviceCount(long long value) { m_initializedImportedDeviceCountHasBeenSet = true; m_initializedImportedDeviceCount = value; }
    inline GetWirelessDeviceImportTaskResult& WithInitializedImportedDeviceCount(long long value) { SetInitializedImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices in the import task that are waiting in the import task
     * queue to be onboarded.</p>
     */
    inline long long GetPendingImportedDeviceCount() const { return m_pendingImportedDeviceCount; }
    inline void SetPendingImportedDeviceCount(long long value) { m_pendingImportedDeviceCountHasBeenSet = true; m_pendingImportedDeviceCount = value; }
    inline GetWirelessDeviceImportTaskResult& WithPendingImportedDeviceCount(long long value) { SetPendingImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices in the import task that have been onboarded to the
     * import task.</p>
     */
    inline long long GetOnboardedImportedDeviceCount() const { return m_onboardedImportedDeviceCount; }
    inline void SetOnboardedImportedDeviceCount(long long value) { m_onboardedImportedDeviceCountHasBeenSet = true; m_onboardedImportedDeviceCount = value; }
    inline GetWirelessDeviceImportTaskResult& WithOnboardedImportedDeviceCount(long long value) { SetOnboardedImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices in the import task that failed to onboard to the import
     * task.</p>
     */
    inline long long GetFailedImportedDeviceCount() const { return m_failedImportedDeviceCount; }
    inline void SetFailedImportedDeviceCount(long long value) { m_failedImportedDeviceCountHasBeenSet = true; m_failedImportedDeviceCount = value; }
    inline GetWirelessDeviceImportTaskResult& WithFailedImportedDeviceCount(long long value) { SetFailedImportedDeviceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessDeviceImportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
