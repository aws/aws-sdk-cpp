/**
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
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device endpoint.</p>
     */
    inline const Aws::Vector<StateEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline void SetEndpoints(const Aws::Vector<StateEndpoint>& value) { m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<StateEndpoint>&& value) { m_endpoints = std::move(value); }
    inline GetManagedThingStateResult& WithEndpoints(const Aws::Vector<StateEndpoint>& value) { SetEndpoints(value); return *this;}
    inline GetManagedThingStateResult& WithEndpoints(Aws::Vector<StateEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline GetManagedThingStateResult& AddEndpoints(const StateEndpoint& value) { m_endpoints.push_back(value); return *this; }
    inline GetManagedThingStateResult& AddEndpoints(StateEndpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedThingStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedThingStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedThingStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StateEndpoint> m_endpoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
