/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/PushConfig.h>
#include <aws/core/utils/DateTime.h>
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
  class GetOtaTaskConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The over-the-air (OTA) task configuration id.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const { return m_taskConfigurationId; }
    template<typename TaskConfigurationIdT = Aws::String>
    void SetTaskConfigurationId(TaskConfigurationIdT&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::forward<TaskConfigurationIdT>(value); }
    template<typename TaskConfigurationIdT = Aws::String>
    GetOtaTaskConfigurationResult& WithTaskConfigurationId(TaskConfigurationIdT&& value) { SetTaskConfigurationId(std::forward<TaskConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetOtaTaskConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of configuration used for the over-the-air (OTA) task.</p>
     */
    inline const PushConfig& GetPushConfig() const { return m_pushConfig; }
    template<typename PushConfigT = PushConfig>
    void SetPushConfig(PushConfigT&& value) { m_pushConfigHasBeenSet = true; m_pushConfig = std::forward<PushConfigT>(value); }
    template<typename PushConfigT = PushConfig>
    GetOtaTaskConfigurationResult& WithPushConfig(PushConfigT&& value) { SetPushConfig(std::forward<PushConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetOtaTaskConfigurationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task configuration was
     * created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetOtaTaskConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOtaTaskConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PushConfig m_pushConfig;
    bool m_pushConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
