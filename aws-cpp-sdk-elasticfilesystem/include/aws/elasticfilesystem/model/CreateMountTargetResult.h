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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
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
namespace EFS
{
namespace Model
{
  /**
   * <p>Provides a description of a mount target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/MountTargetDescription">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API CreateMountTargetResult
  {
  public:
    CreateMountTargetResult();
    CreateMountTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMountTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline CreateMountTargetResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline CreateMountTargetResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that owns the resource.</p>
     */
    inline CreateMountTargetResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetId = value; }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetId = std::move(value); }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline void SetMountTargetId(const char* value) { m_mountTargetId.assign(value); }

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline CreateMountTargetResult& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline CreateMountTargetResult& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}

    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline CreateMountTargetResult& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}


    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline CreateMountTargetResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline CreateMountTargetResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline CreateMountTargetResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline CreateMountTargetResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline CreateMountTargetResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline CreateMountTargetResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = std::move(value); }

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline CreateMountTargetResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline CreateMountTargetResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}


    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddress = value; }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddress = std::move(value); }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddress.assign(value); }

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline CreateMountTargetResult& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline CreateMountTargetResult& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline CreateMountTargetResult& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline CreateMountTargetResult& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline CreateMountTargetResult& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline CreateMountTargetResult& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

  private:

    Aws::String m_ownerId;

    Aws::String m_mountTargetId;

    Aws::String m_fileSystemId;

    Aws::String m_subnetId;

    LifeCycleState m_lifeCycleState;

    Aws::String m_ipAddress;

    Aws::String m_networkInterfaceId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
