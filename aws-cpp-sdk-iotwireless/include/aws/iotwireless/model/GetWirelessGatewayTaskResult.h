/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessGatewayTaskStatus.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetWirelessGatewayTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const{ return m_wirelessGatewayId; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(const Aws::String& value) { m_wirelessGatewayId = value; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(Aws::String&& value) { m_wirelessGatewayId = std::move(value); }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayId(const char* value) { m_wirelessGatewayId.assign(value); }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(const Aws::String& value) { SetWirelessGatewayId(value); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(Aws::String&& value) { SetWirelessGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(const char* value) { SetWirelessGatewayId(value); return *this;}


    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const{ return m_wirelessGatewayTaskDefinitionId; }

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const Aws::String& value) { m_wirelessGatewayTaskDefinitionId = value; }

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(Aws::String&& value) { m_wirelessGatewayTaskDefinitionId = std::move(value); }

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const char* value) { m_wirelessGatewayTaskDefinitionId.assign(value); }

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const Aws::String& value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(Aws::String&& value) { SetWirelessGatewayTaskDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const char* value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}


    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAt = value; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAt.assign(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}


    /**
     * <p>The date and time when the task was created.</p>
     */
    inline const Aws::String& GetTaskCreatedAt() const{ return m_taskCreatedAt; }

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline void SetTaskCreatedAt(const Aws::String& value) { m_taskCreatedAt = value; }

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline void SetTaskCreatedAt(Aws::String&& value) { m_taskCreatedAt = std::move(value); }

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline void SetTaskCreatedAt(const char* value) { m_taskCreatedAt.assign(value); }

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(const Aws::String& value) { SetTaskCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(Aws::String&& value) { SetTaskCreatedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the task was created.</p>
     */
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(const char* value) { SetTaskCreatedAt(value); return *this;}


    /**
     * <p>The status of the request.</p>
     */
    inline const WirelessGatewayTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetStatus(const WirelessGatewayTaskStatus& value) { m_status = value; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetStatus(WirelessGatewayTaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the request.</p>
     */
    inline GetWirelessGatewayTaskResult& WithStatus(const WirelessGatewayTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the request.</p>
     */
    inline GetWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_wirelessGatewayId;

    Aws::String m_wirelessGatewayTaskDefinitionId;

    Aws::String m_lastUplinkReceivedAt;

    Aws::String m_taskCreatedAt;

    WirelessGatewayTaskStatus m_status;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
