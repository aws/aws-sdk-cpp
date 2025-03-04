/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCustomEndpointResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IoT managed integrations dedicated, custom endpoint for the device to
     * route traffic through.</p>
     */
    inline const Aws::String& GetEndpointAddress() const{ return m_endpointAddress; }
    inline void SetEndpointAddress(const Aws::String& value) { m_endpointAddress = value; }
    inline void SetEndpointAddress(Aws::String&& value) { m_endpointAddress = std::move(value); }
    inline void SetEndpointAddress(const char* value) { m_endpointAddress.assign(value); }
    inline GetCustomEndpointResult& WithEndpointAddress(const Aws::String& value) { SetEndpointAddress(value); return *this;}
    inline GetCustomEndpointResult& WithEndpointAddress(Aws::String&& value) { SetEndpointAddress(std::move(value)); return *this;}
    inline GetCustomEndpointResult& WithEndpointAddress(const char* value) { SetEndpointAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCustomEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCustomEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCustomEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointAddress;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
