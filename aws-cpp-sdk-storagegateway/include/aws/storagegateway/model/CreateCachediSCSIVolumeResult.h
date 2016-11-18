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
  class AWS_STORAGEGATEWAY_API CreateCachediSCSIVolumeResult
  {
  public:
    CreateCachediSCSIVolumeResult();
    CreateCachediSCSIVolumeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCachediSCSIVolumeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    
    inline CreateCachediSCSIVolumeResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }

    
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = value; }

    
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }

    
    inline CreateCachediSCSIVolumeResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeResult& WithTargetARN(Aws::String&& value) { SetTargetARN(value); return *this;}

    
    inline CreateCachediSCSIVolumeResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}

  private:
    Aws::String m_volumeARN;
    Aws::String m_targetARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
