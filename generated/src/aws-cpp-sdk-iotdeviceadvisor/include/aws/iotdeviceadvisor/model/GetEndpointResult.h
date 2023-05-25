/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class GetEndpointResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetEndpointResult();
    AWS_IOTDEVICEADVISOR_API GetEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline GetEndpointResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline GetEndpointResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The response of an Device Advisor endpoint.</p>
     */
    inline GetEndpointResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
