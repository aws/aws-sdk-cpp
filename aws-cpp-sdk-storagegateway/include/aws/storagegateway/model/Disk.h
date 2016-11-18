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

  class AWS_STORAGEGATEWAY_API Disk
  {
  public:
    Disk();
    Disk(const Aws::Utils::Json::JsonValue& jsonValue);
    Disk& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDiskId() const{ return m_diskId; }

    
    inline void SetDiskId(const Aws::String& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    
    inline void SetDiskId(Aws::String&& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    
    inline void SetDiskId(const char* value) { m_diskIdHasBeenSet = true; m_diskId.assign(value); }

    
    inline Disk& WithDiskId(const Aws::String& value) { SetDiskId(value); return *this;}

    
    inline Disk& WithDiskId(Aws::String&& value) { SetDiskId(value); return *this;}

    
    inline Disk& WithDiskId(const char* value) { SetDiskId(value); return *this;}

    
    inline const Aws::String& GetDiskPath() const{ return m_diskPath; }

    
    inline void SetDiskPath(const Aws::String& value) { m_diskPathHasBeenSet = true; m_diskPath = value; }

    
    inline void SetDiskPath(Aws::String&& value) { m_diskPathHasBeenSet = true; m_diskPath = value; }

    
    inline void SetDiskPath(const char* value) { m_diskPathHasBeenSet = true; m_diskPath.assign(value); }

    
    inline Disk& WithDiskPath(const Aws::String& value) { SetDiskPath(value); return *this;}

    
    inline Disk& WithDiskPath(Aws::String&& value) { SetDiskPath(value); return *this;}

    
    inline Disk& WithDiskPath(const char* value) { SetDiskPath(value); return *this;}

    
    inline const Aws::String& GetDiskNode() const{ return m_diskNode; }

    
    inline void SetDiskNode(const Aws::String& value) { m_diskNodeHasBeenSet = true; m_diskNode = value; }

    
    inline void SetDiskNode(Aws::String&& value) { m_diskNodeHasBeenSet = true; m_diskNode = value; }

    
    inline void SetDiskNode(const char* value) { m_diskNodeHasBeenSet = true; m_diskNode.assign(value); }

    
    inline Disk& WithDiskNode(const Aws::String& value) { SetDiskNode(value); return *this;}

    
    inline Disk& WithDiskNode(Aws::String&& value) { SetDiskNode(value); return *this;}

    
    inline Disk& WithDiskNode(const char* value) { SetDiskNode(value); return *this;}

    
    inline const Aws::String& GetDiskStatus() const{ return m_diskStatus; }

    
    inline void SetDiskStatus(const Aws::String& value) { m_diskStatusHasBeenSet = true; m_diskStatus = value; }

    
    inline void SetDiskStatus(Aws::String&& value) { m_diskStatusHasBeenSet = true; m_diskStatus = value; }

    
    inline void SetDiskStatus(const char* value) { m_diskStatusHasBeenSet = true; m_diskStatus.assign(value); }

    
    inline Disk& WithDiskStatus(const Aws::String& value) { SetDiskStatus(value); return *this;}

    
    inline Disk& WithDiskStatus(Aws::String&& value) { SetDiskStatus(value); return *this;}

    
    inline Disk& WithDiskStatus(const char* value) { SetDiskStatus(value); return *this;}

    
    inline long long GetDiskSizeInBytes() const{ return m_diskSizeInBytes; }

    
    inline void SetDiskSizeInBytes(long long value) { m_diskSizeInBytesHasBeenSet = true; m_diskSizeInBytes = value; }

    
    inline Disk& WithDiskSizeInBytes(long long value) { SetDiskSizeInBytes(value); return *this;}

    
    inline const Aws::String& GetDiskAllocationType() const{ return m_diskAllocationType; }

    
    inline void SetDiskAllocationType(const Aws::String& value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType = value; }

    
    inline void SetDiskAllocationType(Aws::String&& value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType = value; }

    
    inline void SetDiskAllocationType(const char* value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType.assign(value); }

    
    inline Disk& WithDiskAllocationType(const Aws::String& value) { SetDiskAllocationType(value); return *this;}

    
    inline Disk& WithDiskAllocationType(Aws::String&& value) { SetDiskAllocationType(value); return *this;}

    
    inline Disk& WithDiskAllocationType(const char* value) { SetDiskAllocationType(value); return *this;}

    
    inline const Aws::String& GetDiskAllocationResource() const{ return m_diskAllocationResource; }

    
    inline void SetDiskAllocationResource(const Aws::String& value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource = value; }

    
    inline void SetDiskAllocationResource(Aws::String&& value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource = value; }

    
    inline void SetDiskAllocationResource(const char* value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource.assign(value); }

    
    inline Disk& WithDiskAllocationResource(const Aws::String& value) { SetDiskAllocationResource(value); return *this;}

    
    inline Disk& WithDiskAllocationResource(Aws::String&& value) { SetDiskAllocationResource(value); return *this;}

    
    inline Disk& WithDiskAllocationResource(const char* value) { SetDiskAllocationResource(value); return *this;}

  private:
    Aws::String m_diskId;
    bool m_diskIdHasBeenSet;
    Aws::String m_diskPath;
    bool m_diskPathHasBeenSet;
    Aws::String m_diskNode;
    bool m_diskNodeHasBeenSet;
    Aws::String m_diskStatus;
    bool m_diskStatusHasBeenSet;
    long long m_diskSizeInBytes;
    bool m_diskSizeInBytesHasBeenSet;
    Aws::String m_diskAllocationType;
    bool m_diskAllocationTypeHasBeenSet;
    Aws::String m_diskAllocationResource;
    bool m_diskAllocationResourceHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
