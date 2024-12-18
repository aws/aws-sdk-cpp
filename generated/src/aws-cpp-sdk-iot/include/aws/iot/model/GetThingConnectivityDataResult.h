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
    AWS_IOT_API GetThingConnectivityDataResult();
    AWS_IOT_API GetThingConnectivityDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetThingConnectivityDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of your IoT thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingName.assign(value); }
    inline GetThingConnectivityDataResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline GetThingConnectivityDataResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline GetThingConnectivityDataResult& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates the connectivity status.</p>
     */
    inline bool GetConnected() const{ return m_connected; }
    inline void SetConnected(bool value) { m_connected = value; }
    inline GetThingConnectivityDataResult& WithConnected(bool value) { SetConnected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline GetThingConnectivityDataResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline GetThingConnectivityDataResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the client is disconnecting.</p>
     */
    inline const DisconnectReasonValue& GetDisconnectReason() const{ return m_disconnectReason; }
    inline void SetDisconnectReason(const DisconnectReasonValue& value) { m_disconnectReason = value; }
    inline void SetDisconnectReason(DisconnectReasonValue&& value) { m_disconnectReason = std::move(value); }
    inline GetThingConnectivityDataResult& WithDisconnectReason(const DisconnectReasonValue& value) { SetDisconnectReason(value); return *this;}
    inline GetThingConnectivityDataResult& WithDisconnectReason(DisconnectReasonValue&& value) { SetDisconnectReason(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetThingConnectivityDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetThingConnectivityDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetThingConnectivityDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;

    bool m_connected;

    Aws::Utils::DateTime m_timestamp;

    DisconnectReasonValue m_disconnectReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
