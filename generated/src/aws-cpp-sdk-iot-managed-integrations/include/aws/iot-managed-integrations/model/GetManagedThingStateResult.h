﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/StateEndpoint.h>
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
  class GetManagedThingStateResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device endpoint.</p>
     */
    inline const Aws::Vector<StateEndpoint>& GetEndpoints() const { return m_endpoints; }
    template<typename EndpointsT = Aws::Vector<StateEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<StateEndpoint>>
    GetManagedThingStateResult& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = StateEndpoint>
    GetManagedThingStateResult& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedThingStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StateEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
