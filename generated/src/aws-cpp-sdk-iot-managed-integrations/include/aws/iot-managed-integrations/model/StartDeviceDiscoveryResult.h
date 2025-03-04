/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartDeviceDiscoveryResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API StartDeviceDiscoveryResult();
    AWS_IOTMANAGEDINTEGRATIONS_API StartDeviceDiscoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API StartDeviceDiscoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the device discovery job request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StartDeviceDiscoveryResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StartDeviceDiscoveryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StartDeviceDiscoveryResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value for the start time of the device discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline StartDeviceDiscoveryResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline StartDeviceDiscoveryResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartDeviceDiscoveryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartDeviceDiscoveryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartDeviceDiscoveryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
