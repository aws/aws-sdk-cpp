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
#include <aws/storagegateway/model/VolumeInfo.h>
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
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>ListVolumesOutput$Marker</a> </p> </li> <li> <p>
   * <a>ListVolumesOutput$VolumeInfos</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ListVolumesResult
  {
  public:
    ListVolumesResult();
    ListVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline ListVolumesResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListVolumesResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ListVolumesResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline ListVolumesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline ListVolumesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline ListVolumesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline const Aws::Vector<VolumeInfo>& GetVolumeInfos() const{ return m_volumeInfos; }

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline void SetVolumeInfos(const Aws::Vector<VolumeInfo>& value) { m_volumeInfos = value; }

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline void SetVolumeInfos(Aws::Vector<VolumeInfo>&& value) { m_volumeInfos = std::move(value); }

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline ListVolumesResult& WithVolumeInfos(const Aws::Vector<VolumeInfo>& value) { SetVolumeInfos(value); return *this;}

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline ListVolumesResult& WithVolumeInfos(Aws::Vector<VolumeInfo>&& value) { SetVolumeInfos(std::move(value)); return *this;}

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline ListVolumesResult& AddVolumeInfos(const VolumeInfo& value) { m_volumeInfos.push_back(value); return *this; }

    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline ListVolumesResult& AddVolumeInfos(VolumeInfo&& value) { m_volumeInfos.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gatewayARN;

    Aws::String m_marker;

    Aws::Vector<VolumeInfo> m_volumeInfos;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
