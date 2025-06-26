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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetOtaTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the over-the-air (OTA) task</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    GetOtaTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetOtaTaskResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 bucket where the over-the-air (OTA) task is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    GetOtaTaskResult& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection protocol the over-the-air (OTA) task uses to update the
     * device.</p>
     */
    inline OtaProtocol GetProtocol() const { return m_protocol; }
    inline void SetProtocol(OtaProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline GetOtaTaskResult& WithProtocol(OtaProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency type for the over-the-air (OTA) task.</p>
     */
    inline OtaType GetOtaType() const { return m_otaType; }
    inline void SetOtaType(OtaType value) { m_otaTypeHasBeenSet = true; m_otaType = value; }
    inline GetOtaTaskResult& WithOtaType(OtaType value) { SetOtaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to add things to the thing group.</p>
     */
    inline const Aws::String& GetOtaTargetQueryString() const { return m_otaTargetQueryString; }
    template<typename OtaTargetQueryStringT = Aws::String>
    void SetOtaTargetQueryString(OtaTargetQueryStringT&& value) { m_otaTargetQueryStringHasBeenSet = true; m_otaTargetQueryString = std::forward<OtaTargetQueryStringT>(value); }
    template<typename OtaTargetQueryStringT = Aws::String>
    GetOtaTaskResult& WithOtaTargetQueryString(OtaTargetQueryStringT&& value) { SetOtaTargetQueryString(std::forward<OtaTargetQueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mechanism for the over-the-air (OTA) task.</p>
     */
    inline OtaMechanism GetOtaMechanism() const { return m_otaMechanism; }
    inline void SetOtaMechanism(OtaMechanism value) { m_otaMechanismHasBeenSet = true; m_otaMechanism = value; }
    inline GetOtaTaskResult& WithOtaMechanism(OtaMechanism value) { SetOtaMechanism(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device targeted for the over-the-air (OTA) task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTarget() const { return m_target; }
    template<typename TargetT = Aws::Vector<Aws::String>>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::Vector<Aws::String>>
    GetOtaTaskResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    template<typename TargetT = Aws::String>
    GetOtaTaskResult& AddTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target.emplace_back(std::forward<TargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetOtaTaskResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was last updated
     * at.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetOtaTaskResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const { return m_taskConfigurationId; }
    template<typename TaskConfigurationIdT = Aws::String>
    void SetTaskConfigurationId(TaskConfigurationIdT&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::forward<TaskConfigurationIdT>(value); }
    template<typename TaskConfigurationIdT = Aws::String>
    GetOtaTaskResult& WithTaskConfigurationId(TaskConfigurationIdT&& value) { SetTaskConfigurationId(std::forward<TaskConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing details of all over-the-air (OTA) tasks.</p>
     */
    inline const TaskProcessingDetails& GetTaskProcessingDetails() const { return m_taskProcessingDetails; }
    template<typename TaskProcessingDetailsT = TaskProcessingDetails>
    void SetTaskProcessingDetails(TaskProcessingDetailsT&& value) { m_taskProcessingDetailsHasBeenSet = true; m_taskProcessingDetails = std::forward<TaskProcessingDetailsT>(value); }
    template<typename TaskProcessingDetailsT = TaskProcessingDetails>
    GetOtaTaskResult& WithTaskProcessingDetails(TaskProcessingDetailsT&& value) { SetTaskProcessingDetails(std::forward<TaskProcessingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskSchedulingConfig& GetOtaSchedulingConfig() const { return m_otaSchedulingConfig; }
    template<typename OtaSchedulingConfigT = OtaTaskSchedulingConfig>
    void SetOtaSchedulingConfig(OtaSchedulingConfigT&& value) { m_otaSchedulingConfigHasBeenSet = true; m_otaSchedulingConfig = std::forward<OtaSchedulingConfigT>(value); }
    template<typename OtaSchedulingConfigT = OtaTaskSchedulingConfig>
    GetOtaTaskResult& WithOtaSchedulingConfig(OtaSchedulingConfigT&& value) { SetOtaSchedulingConfig(std::forward<OtaSchedulingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskExecutionRetryConfig& GetOtaTaskExecutionRetryConfig() const { return m_otaTaskExecutionRetryConfig; }
    template<typename OtaTaskExecutionRetryConfigT = OtaTaskExecutionRetryConfig>
    void SetOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfigT&& value) { m_otaTaskExecutionRetryConfigHasBeenSet = true; m_otaTaskExecutionRetryConfig = std::forward<OtaTaskExecutionRetryConfigT>(value); }
    template<typename OtaTaskExecutionRetryConfigT = OtaTaskExecutionRetryConfig>
    GetOtaTaskResult& WithOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfigT&& value) { SetOtaTaskExecutionRetryConfig(std::forward<OtaTaskExecutionRetryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the over-the-air (OTA) task.</p>
     */
    inline OtaStatus GetStatus() const { return m_status; }
    inline void SetStatus(OtaStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetOtaTaskResult& WithStatus(OtaStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the over-the-air (OTA)
     * task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetOtaTaskResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetOtaTaskResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOtaTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    OtaProtocol m_protocol{OtaProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    OtaType m_otaType{OtaType::NOT_SET};
    bool m_otaTypeHasBeenSet = false;

    Aws::String m_otaTargetQueryString;
    bool m_otaTargetQueryStringHasBeenSet = false;

    OtaMechanism m_otaMechanism{OtaMechanism::NOT_SET};
    bool m_otaMechanismHasBeenSet = false;

    Aws::Vector<Aws::String> m_target;
    bool m_targetHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    TaskProcessingDetails m_taskProcessingDetails;
    bool m_taskProcessingDetailsHasBeenSet = false;

    OtaTaskSchedulingConfig m_otaSchedulingConfig;
    bool m_otaSchedulingConfigHasBeenSet = false;

    OtaTaskExecutionRetryConfig m_otaTaskExecutionRetryConfig;
    bool m_otaTaskExecutionRetryConfigHasBeenSet = false;

    OtaStatus m_status{OtaStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
