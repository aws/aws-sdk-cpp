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


    ///@{
    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const{ return m_wirelessGatewayTaskDefinitionId; }
    inline void SetWirelessGatewayTaskDefinitionId(const Aws::String& value) { m_wirelessGatewayTaskDefinitionId = value; }
    inline void SetWirelessGatewayTaskDefinitionId(Aws::String&& value) { m_wirelessGatewayTaskDefinitionId = std::move(value); }
    inline void SetWirelessGatewayTaskDefinitionId(const char* value) { m_wirelessGatewayTaskDefinitionId.assign(value); }
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const Aws::String& value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(Aws::String&& value) { SetWirelessGatewayTaskDefinitionId(std::move(value)); return *this;}
    inline CreateWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const char* value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline const WirelessGatewayTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WirelessGatewayTaskStatus& value) { m_status = value; }
    inline void SetStatus(WirelessGatewayTaskStatus&& value) { m_status = std::move(value); }
    inline CreateWirelessGatewayTaskResult& WithStatus(const WirelessGatewayTaskStatus& value) { SetStatus(value); return *this;}
    inline CreateWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWirelessGatewayTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWirelessGatewayTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWirelessGatewayTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayTaskDefinitionId;

    WirelessGatewayTaskStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
