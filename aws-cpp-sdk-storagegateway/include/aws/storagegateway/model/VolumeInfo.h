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

  class AWS_STORAGEGATEWAY_API VolumeInfo
  {
  public:
    VolumeInfo();
    VolumeInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    VolumeInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    
    inline VolumeInfo& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline VolumeInfo& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline VolumeInfo& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    
    inline VolumeInfo& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    
    inline VolumeInfo& WithVolumeType(Aws::String&& value) { SetVolumeType(value); return *this;}

    
    inline VolumeInfo& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
