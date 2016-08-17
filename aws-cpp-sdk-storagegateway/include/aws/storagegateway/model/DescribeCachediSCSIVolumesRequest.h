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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesRequest : public StorageGatewayRequest
  {
  public:
    DescribeCachediSCSIVolumesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::Vector<Aws::String>& GetVolumeARNs() const{ return m_volumeARNs; }

    
    inline void SetVolumeARNs(const Aws::Vector<Aws::String>& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs = value; }

    
    inline void SetVolumeARNs(Aws::Vector<Aws::String>&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs = value; }

    
    inline DescribeCachediSCSIVolumesRequest& WithVolumeARNs(const Aws::Vector<Aws::String>& value) { SetVolumeARNs(value); return *this;}

    
    inline DescribeCachediSCSIVolumesRequest& WithVolumeARNs(Aws::Vector<Aws::String>&& value) { SetVolumeARNs(value); return *this;}

    
    inline DescribeCachediSCSIVolumesRequest& AddVolumeARNs(const Aws::String& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(value); return *this; }

    
    inline DescribeCachediSCSIVolumesRequest& AddVolumeARNs(Aws::String&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(value); return *this; }

    
    inline DescribeCachediSCSIVolumesRequest& AddVolumeARNs(const char* value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_volumeARNs;
    bool m_volumeARNsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
