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
  class CreateWirelessGatewayTaskResult
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult();
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const{ return m_wirelessGatewayTaskDefinitionId; }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const Aws::String& value) { m_wirelessGatewayTaskDefinitionId = value; }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(Aws::String&& value) { m_wirelessGatewayTaskDefinitionId = std::move(value); }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const char* value) { m_wirelessGatewayTaskDefinitionId.assign(value); }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const Aws::String& value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(Aws::String&& value) { SetWirelessGatewayTaskDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const char* value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}


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
    inline CreateWirelessGatewayTaskResult& WithStatus(const WirelessGatewayTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the request.</p>
     */
    inline CreateWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_wirelessGatewayTaskDefinitionId;

    WirelessGatewayTaskStatus m_status;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
