/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VTLDevice.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>DescribeVTLDevicesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeVTLDevicesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult
  {
  public:
    DescribeVTLDevicesResult();
    DescribeVTLDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVTLDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeVTLDevicesResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeVTLDevicesResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeVTLDevicesResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline const Aws::Vector<VTLDevice>& GetVTLDevices() const{ return m_vTLDevices; }

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline void SetVTLDevices(const Aws::Vector<VTLDevice>& value) { m_vTLDevices = value; }

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline void SetVTLDevices(Aws::Vector<VTLDevice>&& value) { m_vTLDevices = std::move(value); }

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline DescribeVTLDevicesResult& WithVTLDevices(const Aws::Vector<VTLDevice>& value) { SetVTLDevices(value); return *this;}

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline DescribeVTLDevicesResult& WithVTLDevices(Aws::Vector<VTLDevice>&& value) { SetVTLDevices(std::move(value)); return *this;}

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline DescribeVTLDevicesResult& AddVTLDevices(const VTLDevice& value) { m_vTLDevices.push_back(value); return *this; }

    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name(ARN) of
     * the VTL devices.</p>
     */
    inline DescribeVTLDevicesResult& AddVTLDevices(VTLDevice&& value) { m_vTLDevices.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline DescribeVTLDevicesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline DescribeVTLDevicesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline DescribeVTLDevicesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<VTLDevice> m_vTLDevices;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
