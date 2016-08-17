/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/GatewayInfo.h>

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
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API ListGatewaysResult
  {
  public:
    ListGatewaysResult();
    ListGatewaysResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGatewaysResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<GatewayInfo>& GetGateways() const{ return m_gateways; }

    
    inline void SetGateways(const Aws::Vector<GatewayInfo>& value) { m_gateways = value; }

    
    inline void SetGateways(Aws::Vector<GatewayInfo>&& value) { m_gateways = value; }

    
    inline ListGatewaysResult& WithGateways(const Aws::Vector<GatewayInfo>& value) { SetGateways(value); return *this;}

    
    inline ListGatewaysResult& WithGateways(Aws::Vector<GatewayInfo>&& value) { SetGateways(value); return *this;}

    
    inline ListGatewaysResult& AddGateways(const GatewayInfo& value) { m_gateways.push_back(value); return *this; }

    
    inline ListGatewaysResult& AddGateways(GatewayInfo&& value) { m_gateways.push_back(value); return *this; }

    
    inline const Aws::String& GetMarker() const{ return m_marker; }

    
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    
    inline ListGatewaysResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    
    inline ListGatewaysResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    
    inline ListGatewaysResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::Vector<GatewayInfo> m_gateways;
    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
