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
  class AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointRequest : public StorageGatewayRequest
  {
  public:
    CreateSnapshotFromVolumeRecoveryPointRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline const Aws::String& GetSnapshotDescription() const{ return m_snapshotDescription; }

    
    inline void SetSnapshotDescription(const Aws::String& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = value; }

    
    inline void SetSnapshotDescription(Aws::String&& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = value; }

    
    inline void SetSnapshotDescription(const char* value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription.assign(value); }

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const Aws::String& value) { SetSnapshotDescription(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(Aws::String&& value) { SetSnapshotDescription(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const char* value) { SetSnapshotDescription(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
    Aws::String m_snapshotDescription;
    bool m_snapshotDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
