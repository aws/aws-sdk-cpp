/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/LogLevel.h>
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
  class GetEventLogConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetEventLogConfigurationResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetEventLogConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetEventLogConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the event log configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEventLogConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEventLogConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEventLogConfigurationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for the event log configuration.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline GetEventLogConfigurationResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline GetEventLogConfigurationResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline GetEventLogConfigurationResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource for the event log configuration.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline GetEventLogConfigurationResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetEventLogConfigurationResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetEventLogConfigurationResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level for the event log configuration.</p>
     */
    inline const LogLevel& GetEventLogLevel() const{ return m_eventLogLevel; }
    inline void SetEventLogLevel(const LogLevel& value) { m_eventLogLevel = value; }
    inline void SetEventLogLevel(LogLevel&& value) { m_eventLogLevel = std::move(value); }
    inline GetEventLogConfigurationResult& WithEventLogLevel(const LogLevel& value) { SetEventLogLevel(value); return *this;}
    inline GetEventLogConfigurationResult& WithEventLogLevel(LogLevel&& value) { SetEventLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventLogConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventLogConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventLogConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_resourceType;

    Aws::String m_resourceId;

    LogLevel m_eventLogLevel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
