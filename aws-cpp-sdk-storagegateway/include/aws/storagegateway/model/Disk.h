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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a gateway's local disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/Disk">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API Disk
  {
  public:
    Disk();
    Disk(Aws::Utils::Json::JsonView jsonValue);
    Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline const Aws::String& GetDiskId() const{ return m_diskId; }

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline bool DiskIdHasBeenSet() const { return m_diskIdHasBeenSet; }

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline void SetDiskId(const Aws::String& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline void SetDiskId(Aws::String&& value) { m_diskIdHasBeenSet = true; m_diskId = std::move(value); }

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline void SetDiskId(const char* value) { m_diskIdHasBeenSet = true; m_diskId.assign(value); }

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline Disk& WithDiskId(const Aws::String& value) { SetDiskId(value); return *this;}

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline Disk& WithDiskId(Aws::String&& value) { SetDiskId(std::move(value)); return *this;}

    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline Disk& WithDiskId(const char* value) { SetDiskId(value); return *this;}


    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline const Aws::String& GetDiskPath() const{ return m_diskPath; }

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline bool DiskPathHasBeenSet() const { return m_diskPathHasBeenSet; }

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline void SetDiskPath(const Aws::String& value) { m_diskPathHasBeenSet = true; m_diskPath = value; }

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline void SetDiskPath(Aws::String&& value) { m_diskPathHasBeenSet = true; m_diskPath = std::move(value); }

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline void SetDiskPath(const char* value) { m_diskPathHasBeenSet = true; m_diskPath.assign(value); }

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline Disk& WithDiskPath(const Aws::String& value) { SetDiskPath(value); return *this;}

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline Disk& WithDiskPath(Aws::String&& value) { SetDiskPath(std::move(value)); return *this;}

    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline Disk& WithDiskPath(const char* value) { SetDiskPath(value); return *this;}


    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline const Aws::String& GetDiskNode() const{ return m_diskNode; }

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline bool DiskNodeHasBeenSet() const { return m_diskNodeHasBeenSet; }

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline void SetDiskNode(const Aws::String& value) { m_diskNodeHasBeenSet = true; m_diskNode = value; }

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline void SetDiskNode(Aws::String&& value) { m_diskNodeHasBeenSet = true; m_diskNode = std::move(value); }

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline void SetDiskNode(const char* value) { m_diskNodeHasBeenSet = true; m_diskNode.assign(value); }

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline Disk& WithDiskNode(const Aws::String& value) { SetDiskNode(value); return *this;}

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline Disk& WithDiskNode(Aws::String&& value) { SetDiskNode(std::move(value)); return *this;}

    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline Disk& WithDiskNode(const char* value) { SetDiskNode(value); return *this;}


    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline const Aws::String& GetDiskStatus() const{ return m_diskStatus; }

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline bool DiskStatusHasBeenSet() const { return m_diskStatusHasBeenSet; }

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline void SetDiskStatus(const Aws::String& value) { m_diskStatusHasBeenSet = true; m_diskStatus = value; }

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline void SetDiskStatus(Aws::String&& value) { m_diskStatusHasBeenSet = true; m_diskStatus = std::move(value); }

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline void SetDiskStatus(const char* value) { m_diskStatusHasBeenSet = true; m_diskStatus.assign(value); }

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline Disk& WithDiskStatus(const Aws::String& value) { SetDiskStatus(value); return *this;}

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline Disk& WithDiskStatus(Aws::String&& value) { SetDiskStatus(std::move(value)); return *this;}

    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline Disk& WithDiskStatus(const char* value) { SetDiskStatus(value); return *this;}


    /**
     * <p>The local disk size in bytes.</p>
     */
    inline long long GetDiskSizeInBytes() const{ return m_diskSizeInBytes; }

    /**
     * <p>The local disk size in bytes.</p>
     */
    inline bool DiskSizeInBytesHasBeenSet() const { return m_diskSizeInBytesHasBeenSet; }

    /**
     * <p>The local disk size in bytes.</p>
     */
    inline void SetDiskSizeInBytes(long long value) { m_diskSizeInBytesHasBeenSet = true; m_diskSizeInBytes = value; }

    /**
     * <p>The local disk size in bytes.</p>
     */
    inline Disk& WithDiskSizeInBytes(long long value) { SetDiskSizeInBytes(value); return *this;}


    
    inline const Aws::String& GetDiskAllocationType() const{ return m_diskAllocationType; }

    
    inline bool DiskAllocationTypeHasBeenSet() const { return m_diskAllocationTypeHasBeenSet; }

    
    inline void SetDiskAllocationType(const Aws::String& value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType = value; }

    
    inline void SetDiskAllocationType(Aws::String&& value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType = std::move(value); }

    
    inline void SetDiskAllocationType(const char* value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType.assign(value); }

    
    inline Disk& WithDiskAllocationType(const Aws::String& value) { SetDiskAllocationType(value); return *this;}

    
    inline Disk& WithDiskAllocationType(Aws::String&& value) { SetDiskAllocationType(std::move(value)); return *this;}

    
    inline Disk& WithDiskAllocationType(const char* value) { SetDiskAllocationType(value); return *this;}


    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline const Aws::String& GetDiskAllocationResource() const{ return m_diskAllocationResource; }

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline bool DiskAllocationResourceHasBeenSet() const { return m_diskAllocationResourceHasBeenSet; }

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline void SetDiskAllocationResource(const Aws::String& value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource = value; }

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline void SetDiskAllocationResource(Aws::String&& value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource = std::move(value); }

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline void SetDiskAllocationResource(const char* value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource.assign(value); }

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline Disk& WithDiskAllocationResource(const Aws::String& value) { SetDiskAllocationResource(value); return *this;}

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline Disk& WithDiskAllocationResource(Aws::String&& value) { SetDiskAllocationResource(std::move(value)); return *this;}

    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>. </p>
     */
    inline Disk& WithDiskAllocationResource(const char* value) { SetDiskAllocationResource(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetDiskAttributeList() const{ return m_diskAttributeList; }

    
    inline bool DiskAttributeListHasBeenSet() const { return m_diskAttributeListHasBeenSet; }

    
    inline void SetDiskAttributeList(const Aws::Vector<Aws::String>& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList = value; }

    
    inline void SetDiskAttributeList(Aws::Vector<Aws::String>&& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList = std::move(value); }

    
    inline Disk& WithDiskAttributeList(const Aws::Vector<Aws::String>& value) { SetDiskAttributeList(value); return *this;}

    
    inline Disk& WithDiskAttributeList(Aws::Vector<Aws::String>&& value) { SetDiskAttributeList(std::move(value)); return *this;}

    
    inline Disk& AddDiskAttributeList(const Aws::String& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList.push_back(value); return *this; }

    
    inline Disk& AddDiskAttributeList(Aws::String&& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList.push_back(std::move(value)); return *this; }

    
    inline Disk& AddDiskAttributeList(const char* value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList.push_back(value); return *this; }

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

    Aws::Vector<Aws::String> m_diskAttributeList;
    bool m_diskAttributeListHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
