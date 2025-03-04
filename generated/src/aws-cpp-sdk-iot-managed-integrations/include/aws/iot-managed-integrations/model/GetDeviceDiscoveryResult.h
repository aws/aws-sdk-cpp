/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DiscoveryType.h>
#include <aws/iot-managed-integrations/model/DeviceDiscoveryStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class GetDeviceDiscoveryResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the device discovery job request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDeviceDiscoveryResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDeviceDiscoveryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device discovery job request.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDeviceDiscoveryResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDeviceDiscoveryResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discovery type supporting the type of device to be discovered in the
     * device discovery job request.</p>
     */
    inline const DiscoveryType& GetDiscoveryType() const{ return m_discoveryType; }
    inline void SetDiscoveryType(const DiscoveryType& value) { m_discoveryType = value; }
    inline void SetDiscoveryType(DiscoveryType&& value) { m_discoveryType = std::move(value); }
    inline GetDeviceDiscoveryResult& WithDiscoveryType(const DiscoveryType& value) { SetDiscoveryType(value); return *this;}
    inline GetDeviceDiscoveryResult& WithDiscoveryType(DiscoveryType&& value) { SetDiscoveryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device discovery job request.</p>
     */
    inline const DeviceDiscoveryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DeviceDiscoveryStatus& value) { m_status = value; }
    inline void SetStatus(DeviceDiscoveryStatus&& value) { m_status = std::move(value); }
    inline GetDeviceDiscoveryResult& WithStatus(const DeviceDiscoveryStatus& value) { SetStatus(value); return *this;}
    inline GetDeviceDiscoveryResult& WithStatus(DeviceDiscoveryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value for the start time of the device discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetDeviceDiscoveryResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetDeviceDiscoveryResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the end-user's IoT hub.</p>
     */
    inline const Aws::String& GetControllerId() const{ return m_controllerId; }
    inline void SetControllerId(const Aws::String& value) { m_controllerId = value; }
    inline void SetControllerId(Aws::String&& value) { m_controllerId = std::move(value); }
    inline void SetControllerId(const char* value) { m_controllerId.assign(value); }
    inline GetDeviceDiscoveryResult& WithControllerId(const Aws::String& value) { SetControllerId(value); return *this;}
    inline GetDeviceDiscoveryResult& WithControllerId(Aws::String&& value) { SetControllerId(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& WithControllerId(const char* value) { SetControllerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID tracking the current discovery process for one connector
     * association.</p>
     */
    inline const Aws::String& GetConnectorAssociationId() const{ return m_connectorAssociationId; }
    inline void SetConnectorAssociationId(const Aws::String& value) { m_connectorAssociationId = value; }
    inline void SetConnectorAssociationId(Aws::String&& value) { m_connectorAssociationId = std::move(value); }
    inline void SetConnectorAssociationId(const char* value) { m_connectorAssociationId.assign(value); }
    inline GetDeviceDiscoveryResult& WithConnectorAssociationId(const Aws::String& value) { SetConnectorAssociationId(value); return *this;}
    inline GetDeviceDiscoveryResult& WithConnectorAssociationId(Aws::String&& value) { SetConnectorAssociationId(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& WithConnectorAssociationId(const char* value) { SetConnectorAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value for the completion time of the device discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }
    inline GetDeviceDiscoveryResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}
    inline GetDeviceDiscoveryResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the device discovery
     * request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDeviceDiscoveryResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDeviceDiscoveryResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDeviceDiscoveryResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeviceDiscoveryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeviceDiscoveryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeviceDiscoveryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    DiscoveryType m_discoveryType;

    DeviceDiscoveryStatus m_status;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_controllerId;

    Aws::String m_connectorAssociationId;

    Aws::Utils::DateTime m_finishedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
