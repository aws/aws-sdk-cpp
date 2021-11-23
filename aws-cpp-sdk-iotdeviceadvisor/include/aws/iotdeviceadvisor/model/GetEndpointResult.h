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
  class AWS_IOTDEVICEADVISOR_API GetEndpointResult
  {
  public:
    GetEndpointResult();
    GetEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    
    inline GetEndpointResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    
    inline GetEndpointResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    
    inline GetEndpointResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
