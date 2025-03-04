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
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetOtaTaskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The over-the-air (OTA) task configuration id.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationId.assign(value); }
    inline GetOtaTaskConfigurationResult& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline GetOtaTaskConfigurationResult& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetOtaTaskConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetOtaTaskConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of configuration used for the over-the-air (OTA) task.</p>
     */
    inline const PushConfig& GetPushConfig() const{ return m_pushConfig; }
    inline void SetPushConfig(const PushConfig& value) { m_pushConfig = value; }
    inline void SetPushConfig(PushConfig&& value) { m_pushConfig = std::move(value); }
    inline GetOtaTaskConfigurationResult& WithPushConfig(const PushConfig& value) { SetPushConfig(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithPushConfig(PushConfig&& value) { SetPushConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetOtaTaskConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetOtaTaskConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task configuration was
     * created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetOtaTaskConfigurationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOtaTaskConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOtaTaskConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOtaTaskConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskConfigurationId;

    Aws::String m_name;

    PushConfig m_pushConfig;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
