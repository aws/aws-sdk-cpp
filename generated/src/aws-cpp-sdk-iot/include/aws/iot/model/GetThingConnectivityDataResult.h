/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/DisconnectReasonValue.h>
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
namespace IoT
{
namespace Model
{
  class GetThingConnectivityDataResult
  {
  public:
    AWS_IOT_API GetThingConnectivityDataResult() = default;
    AWS_IOT_API GetThingConnectivityDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetThingConnectivityDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of your IoT thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    GetThingConnectivityDataResult& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates the connectivity status.</p>
     */
    inline bool GetConnected() const { return m_connected; }
    inline void SetConnected(bool value) { m_connectedHasBeenSet = true; m_connected = value; }
    inline GetThingConnectivityDataResult& WithConnected(bool value) { SetConnected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    GetThingConnectivityDataResult& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the client is disconnecting.</p>
     */
    inline DisconnectReasonValue GetDisconnectReason() const { return m_disconnectReason; }
    inline void SetDisconnectReason(DisconnectReasonValue value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = value; }
    inline GetThingConnectivityDataResult& WithDisconnectReason(DisconnectReasonValue value) { SetDisconnectReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetThingConnectivityDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

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
} // namespace IoT
} // namespace Aws
