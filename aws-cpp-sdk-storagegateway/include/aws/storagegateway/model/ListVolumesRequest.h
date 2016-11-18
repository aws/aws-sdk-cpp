﻿/*
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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object that contains one or more of the following fields:</p> <ul>
   * <li> <p> <a>ListVolumesInput$Limit</a> </p> </li> <li> <p>
   * <a>ListVolumesInput$Marker</a> </p> </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API ListVolumesRequest : public StorageGatewayRequest
  {
  public:
    ListVolumesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline ListVolumesRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListVolumesRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline ListVolumesRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline ListVolumesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline ListVolumesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * volumes. Obtain the marker from the response of a previous List iSCSI Volumes
     * request.</p>
     */
    inline ListVolumesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Specifies that the list of volumes returned be limited to the specified
     * number of items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies that the list of volumes returned be limited to the specified
     * number of items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies that the list of volumes returned be limited to the specified
     * number of items.</p>
     */
    inline ListVolumesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
