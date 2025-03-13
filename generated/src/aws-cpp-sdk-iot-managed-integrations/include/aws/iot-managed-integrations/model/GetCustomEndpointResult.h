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
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetCustomEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IoT managed integrations dedicated, custom endpoint for the device to
     * route traffic through.</p>
     */
    inline const Aws::String& GetEndpointAddress() const { return m_endpointAddress; }
    template<typename EndpointAddressT = Aws::String>
    void SetEndpointAddress(EndpointAddressT&& value) { m_endpointAddressHasBeenSet = true; m_endpointAddress = std::forward<EndpointAddressT>(value); }
    template<typename EndpointAddressT = Aws::String>
    GetCustomEndpointResult& WithEndpointAddress(EndpointAddressT&& value) { SetEndpointAddress(std::forward<EndpointAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointAddress;
    bool m_endpointAddressHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
