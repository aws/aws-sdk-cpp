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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API CreateCachediSCSIVolumeRequest : public StorageGatewayRequest
  {
  public:
    CreateCachediSCSIVolumeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline CreateCachediSCSIVolumeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    
    inline CreateCachediSCSIVolumeRequest& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}

    
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    
    inline CreateCachediSCSIVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    
    inline CreateCachediSCSIVolumeRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithTargetName(Aws::String&& value) { SetTargetName(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}

    
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    
    inline CreateCachediSCSIVolumeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateCachediSCSIVolumeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    
    inline CreateCachediSCSIVolumeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet;
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    Aws::String m_targetName;
    bool m_targetNameHasBeenSet;
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
