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
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult();
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessDeviceImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the import task for which information is retrieved.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination that's assigned to the wireless devices in the
     * import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline const SidewalkGetStartImportInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline void SetSidewalk(const SidewalkGetStartImportInfo& value) { m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline void SetSidewalk(SidewalkGetStartImportInfo&& value) { m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithSidewalk(const SidewalkGetStartImportInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related information about an import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithSidewalk(SidewalkGetStartImportInfo&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>The time at which the import task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the import task was created.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The import task status.</p>
     */
    inline const ImportTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The import task status.</p>
     */
    inline void SetStatus(const ImportTaskStatus& value) { m_status = value; }

    /**
     * <p>The import task status.</p>
     */
    inline void SetStatus(ImportTaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The import task status.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithStatus(const ImportTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The import task status.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithStatus(ImportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the provided status information, such as a validation error
     * that causes the import task to fail.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The number of devices in the import task that are waiting for the control log
     * to start processing.</p>
     */
    inline long long GetInitializedImportedDeviceCount() const{ return m_initializedImportedDeviceCount; }

    /**
     * <p>The number of devices in the import task that are waiting for the control log
     * to start processing.</p>
     */
    inline void SetInitializedImportedDeviceCount(long long value) { m_initializedImportedDeviceCount = value; }

    /**
     * <p>The number of devices in the import task that are waiting for the control log
     * to start processing.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithInitializedImportedDeviceCount(long long value) { SetInitializedImportedDeviceCount(value); return *this;}


    /**
     * <p>The number of devices in the import task that are waiting in the import task
     * queue to be onboarded.</p>
     */
    inline long long GetPendingImportedDeviceCount() const{ return m_pendingImportedDeviceCount; }

    /**
     * <p>The number of devices in the import task that are waiting in the import task
     * queue to be onboarded.</p>
     */
    inline void SetPendingImportedDeviceCount(long long value) { m_pendingImportedDeviceCount = value; }

    /**
     * <p>The number of devices in the import task that are waiting in the import task
     * queue to be onboarded.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithPendingImportedDeviceCount(long long value) { SetPendingImportedDeviceCount(value); return *this;}


    /**
     * <p>The number of devices in the import task that have been onboarded to the
     * import task.</p>
     */
    inline long long GetOnboardedImportedDeviceCount() const{ return m_onboardedImportedDeviceCount; }

    /**
     * <p>The number of devices in the import task that have been onboarded to the
     * import task.</p>
     */
    inline void SetOnboardedImportedDeviceCount(long long value) { m_onboardedImportedDeviceCount = value; }

    /**
     * <p>The number of devices in the import task that have been onboarded to the
     * import task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithOnboardedImportedDeviceCount(long long value) { SetOnboardedImportedDeviceCount(value); return *this;}


    /**
     * <p>The number of devices in the import task that failed to onboard to the import
     * task.</p>
     */
    inline long long GetFailedImportedDeviceCount() const{ return m_failedImportedDeviceCount; }

    /**
     * <p>The number of devices in the import task that failed to onboard to the import
     * task.</p>
     */
    inline void SetFailedImportedDeviceCount(long long value) { m_failedImportedDeviceCount = value; }

    /**
     * <p>The number of devices in the import task that failed to onboard to the import
     * task.</p>
     */
    inline GetWirelessDeviceImportTaskResult& WithFailedImportedDeviceCount(long long value) { SetFailedImportedDeviceCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWirelessDeviceImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWirelessDeviceImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWirelessDeviceImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_destinationName;

    SidewalkGetStartImportInfo m_sidewalk;

    Aws::Utils::DateTime m_creationTime;

    ImportTaskStatus m_status;

    Aws::String m_statusReason;

    long long m_initializedImportedDeviceCount;

    long long m_pendingImportedDeviceCount;

    long long m_onboardedImportedDeviceCount;

    long long m_failedImportedDeviceCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
