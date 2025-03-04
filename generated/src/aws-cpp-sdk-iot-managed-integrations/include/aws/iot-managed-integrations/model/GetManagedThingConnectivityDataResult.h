/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-managed-integrations/model/DisconnectReasonValue.h>
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
  class GetManagedThingConnectivityDataResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingId.assign(value); }
    inline GetManagedThingConnectivityDataResult& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline GetManagedThingConnectivityDataResult& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline GetManagedThingConnectivityDataResult& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectivity status for a managed thing.</p>
     */
    inline bool GetConnected() const{ return m_connected; }
    inline void SetConnected(bool value) { m_connected = value; }
    inline GetManagedThingConnectivityDataResult& WithConnected(bool value) { SetConnected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the connectivity status for a managed thing was
     * last taken.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline GetManagedThingConnectivityDataResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline GetManagedThingConnectivityDataResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the connectivity disconnect with the managed thing.</p>
     */
    inline const DisconnectReasonValue& GetDisconnectReason() const{ return m_disconnectReason; }
    inline void SetDisconnectReason(const DisconnectReasonValue& value) { m_disconnectReason = value; }
    inline void SetDisconnectReason(DisconnectReasonValue&& value) { m_disconnectReason = std::move(value); }
    inline GetManagedThingConnectivityDataResult& WithDisconnectReason(const DisconnectReasonValue& value) { SetDisconnectReason(value); return *this;}
    inline GetManagedThingConnectivityDataResult& WithDisconnectReason(DisconnectReasonValue&& value) { SetDisconnectReason(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedThingConnectivityDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedThingConnectivityDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedThingConnectivityDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;

    bool m_connected;

    Aws::Utils::DateTime m_timestamp;

    DisconnectReasonValue m_disconnectReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
