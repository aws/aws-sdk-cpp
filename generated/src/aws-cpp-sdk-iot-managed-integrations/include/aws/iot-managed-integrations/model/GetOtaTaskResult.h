/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/OtaProtocol.h>
#include <aws/iot-managed-integrations/model/OtaType.h>
#include <aws/iot-managed-integrations/model/OtaMechanism.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-managed-integrations/model/TaskProcessingDetails.h>
#include <aws/iot-managed-integrations/model/OtaTaskSchedulingConfig.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionRetryConfig.h>
#include <aws/iot-managed-integrations/model/OtaStatus.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetOtaTaskResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline GetOtaTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetOtaTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the over-the-air (OTA) task</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline GetOtaTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline GetOtaTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetOtaTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetOtaTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 bucket where the over-the-air (OTA) task is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }
    inline void SetS3Url(const Aws::String& value) { m_s3Url = value; }
    inline void SetS3Url(Aws::String&& value) { m_s3Url = std::move(value); }
    inline void SetS3Url(const char* value) { m_s3Url.assign(value); }
    inline GetOtaTaskResult& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}
    inline GetOtaTaskResult& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithS3Url(const char* value) { SetS3Url(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection protocol the over-the-air (OTA) task uses to update the
     * device.</p>
     */
    inline const OtaProtocol& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const OtaProtocol& value) { m_protocol = value; }
    inline void SetProtocol(OtaProtocol&& value) { m_protocol = std::move(value); }
    inline GetOtaTaskResult& WithProtocol(const OtaProtocol& value) { SetProtocol(value); return *this;}
    inline GetOtaTaskResult& WithProtocol(OtaProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency type for the over-the-air (OTA) task.</p>
     */
    inline const OtaType& GetOtaType() const{ return m_otaType; }
    inline void SetOtaType(const OtaType& value) { m_otaType = value; }
    inline void SetOtaType(OtaType&& value) { m_otaType = std::move(value); }
    inline GetOtaTaskResult& WithOtaType(const OtaType& value) { SetOtaType(value); return *this;}
    inline GetOtaTaskResult& WithOtaType(OtaType&& value) { SetOtaType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to add things to the thing group.</p>
     */
    inline const Aws::String& GetOtaTargetQueryString() const{ return m_otaTargetQueryString; }
    inline void SetOtaTargetQueryString(const Aws::String& value) { m_otaTargetQueryString = value; }
    inline void SetOtaTargetQueryString(Aws::String&& value) { m_otaTargetQueryString = std::move(value); }
    inline void SetOtaTargetQueryString(const char* value) { m_otaTargetQueryString.assign(value); }
    inline GetOtaTaskResult& WithOtaTargetQueryString(const Aws::String& value) { SetOtaTargetQueryString(value); return *this;}
    inline GetOtaTaskResult& WithOtaTargetQueryString(Aws::String&& value) { SetOtaTargetQueryString(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithOtaTargetQueryString(const char* value) { SetOtaTargetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mechanism for the over-the-air (OTA) task.</p>
     */
    inline const OtaMechanism& GetOtaMechanism() const{ return m_otaMechanism; }
    inline void SetOtaMechanism(const OtaMechanism& value) { m_otaMechanism = value; }
    inline void SetOtaMechanism(OtaMechanism&& value) { m_otaMechanism = std::move(value); }
    inline GetOtaTaskResult& WithOtaMechanism(const OtaMechanism& value) { SetOtaMechanism(value); return *this;}
    inline GetOtaTaskResult& WithOtaMechanism(OtaMechanism&& value) { SetOtaMechanism(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device targeted for the over-the-air (OTA) task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTarget() const{ return m_target; }
    inline void SetTarget(const Aws::Vector<Aws::String>& value) { m_target = value; }
    inline void SetTarget(Aws::Vector<Aws::String>&& value) { m_target = std::move(value); }
    inline GetOtaTaskResult& WithTarget(const Aws::Vector<Aws::String>& value) { SetTarget(value); return *this;}
    inline GetOtaTaskResult& WithTarget(Aws::Vector<Aws::String>&& value) { SetTarget(std::move(value)); return *this;}
    inline GetOtaTaskResult& AddTarget(const Aws::String& value) { m_target.push_back(value); return *this; }
    inline GetOtaTaskResult& AddTarget(Aws::String&& value) { m_target.push_back(std::move(value)); return *this; }
    inline GetOtaTaskResult& AddTarget(const char* value) { m_target.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetOtaTaskResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetOtaTaskResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was last updated
     * at.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetOtaTaskResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetOtaTaskResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationId.assign(value); }
    inline GetOtaTaskResult& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline GetOtaTaskResult& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing details of all over-the-air (OTA) tasks.</p>
     */
    inline const TaskProcessingDetails& GetTaskProcessingDetails() const{ return m_taskProcessingDetails; }
    inline void SetTaskProcessingDetails(const TaskProcessingDetails& value) { m_taskProcessingDetails = value; }
    inline void SetTaskProcessingDetails(TaskProcessingDetails&& value) { m_taskProcessingDetails = std::move(value); }
    inline GetOtaTaskResult& WithTaskProcessingDetails(const TaskProcessingDetails& value) { SetTaskProcessingDetails(value); return *this;}
    inline GetOtaTaskResult& WithTaskProcessingDetails(TaskProcessingDetails&& value) { SetTaskProcessingDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskSchedulingConfig& GetOtaSchedulingConfig() const{ return m_otaSchedulingConfig; }
    inline void SetOtaSchedulingConfig(const OtaTaskSchedulingConfig& value) { m_otaSchedulingConfig = value; }
    inline void SetOtaSchedulingConfig(OtaTaskSchedulingConfig&& value) { m_otaSchedulingConfig = std::move(value); }
    inline GetOtaTaskResult& WithOtaSchedulingConfig(const OtaTaskSchedulingConfig& value) { SetOtaSchedulingConfig(value); return *this;}
    inline GetOtaTaskResult& WithOtaSchedulingConfig(OtaTaskSchedulingConfig&& value) { SetOtaSchedulingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskExecutionRetryConfig& GetOtaTaskExecutionRetryConfig() const{ return m_otaTaskExecutionRetryConfig; }
    inline void SetOtaTaskExecutionRetryConfig(const OtaTaskExecutionRetryConfig& value) { m_otaTaskExecutionRetryConfig = value; }
    inline void SetOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfig&& value) { m_otaTaskExecutionRetryConfig = std::move(value); }
    inline GetOtaTaskResult& WithOtaTaskExecutionRetryConfig(const OtaTaskExecutionRetryConfig& value) { SetOtaTaskExecutionRetryConfig(value); return *this;}
    inline GetOtaTaskResult& WithOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfig&& value) { SetOtaTaskExecutionRetryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the over-the-air (OTA) task.</p>
     */
    inline const OtaStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const OtaStatus& value) { m_status = value; }
    inline void SetStatus(OtaStatus&& value) { m_status = std::move(value); }
    inline GetOtaTaskResult& WithStatus(const OtaStatus& value) { SetStatus(value); return *this;}
    inline GetOtaTaskResult& WithStatus(OtaStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOtaTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOtaTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOtaTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;

    Aws::String m_taskArn;

    Aws::String m_description;

    Aws::String m_s3Url;

    OtaProtocol m_protocol;

    OtaType m_otaType;

    Aws::String m_otaTargetQueryString;

    OtaMechanism m_otaMechanism;

    Aws::Vector<Aws::String> m_target;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_taskConfigurationId;

    TaskProcessingDetails m_taskProcessingDetails;

    OtaTaskSchedulingConfig m_otaSchedulingConfig;

    OtaTaskExecutionRetryConfig m_otaTaskExecutionRetryConfig;

    OtaStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
