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
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointResult
  {
  public:
    CreateSnapshotFromVolumeRecoveryPointResult();
    CreateSnapshotFromVolumeRecoveryPointResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSnapshotFromVolumeRecoveryPointResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = value; }

    
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }

    
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTime = value; }

    
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTime = value; }

    
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTime.assign(value); }

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(value); return *this;}

    
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const char* value) { SetVolumeRecoveryPointTime(value); return *this;}

  private:
    Aws::String m_snapshotId;
    Aws::String m_volumeARN;
    Aws::String m_volumeRecoveryPointTime;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
