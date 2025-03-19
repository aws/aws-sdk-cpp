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
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingConnectivityDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    GetManagedThingConnectivityDataResult& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectivity status for a managed thing.</p>
     */
    inline bool GetConnected() const { return m_connected; }
    inline void SetConnected(bool value) { m_connectedHasBeenSet = true; m_connected = value; }
    inline GetManagedThingConnectivityDataResult& WithConnected(bool value) { SetConnected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the connectivity status for a managed thing was
     * last taken.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    GetManagedThingConnectivityDataResult& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the connectivity disconnect with the managed thing.</p>
     */
    inline DisconnectReasonValue GetDisconnectReason() const { return m_disconnectReason; }
    inline void SetDisconnectReason(DisconnectReasonValue value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = value; }
    inline GetManagedThingConnectivityDataResult& WithDisconnectReason(DisconnectReasonValue value) { SetDisconnectReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedThingConnectivityDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    bool m_connected{false};
    bool m_connectedHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    DisconnectReasonValue m_disconnectReason{DisconnectReasonValue::NOT_SET};
    bool m_disconnectReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
