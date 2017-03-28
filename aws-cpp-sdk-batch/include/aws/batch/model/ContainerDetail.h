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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/Volume.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/Ulimit.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing the details of a container that is part of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerDetail">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ContainerDetail
  {
  public:
    ContainerDetail();
    ContainerDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The image used to start the container.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image used to start the container.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image used to start the container.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The image used to start the container.</p>
     */
    inline ContainerDetail& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start the container.</p>
     */
    inline ContainerDetail& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start the container.</p>
     */
    inline ContainerDetail& WithImage(const char* value) { SetImage(value); return *this;}

    /**
     * <p>The number of VCPUs allocated for the job. </p>
     */
    inline int GetVcpus() const{ return m_vcpus; }

    /**
     * <p>The number of VCPUs allocated for the job. </p>
     */
    inline void SetVcpus(int value) { m_vcpusHasBeenSet = true; m_vcpus = value; }

    /**
     * <p>The number of VCPUs allocated for the job. </p>
     */
    inline ContainerDetail& WithVcpus(int value) { SetVcpus(value); return *this;}

    /**
     * <p>The number of MiB of memory reserved for the job.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The number of MiB of memory reserved for the job.</p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The number of MiB of memory reserved for the job.</p>
     */
    inline ContainerDetail& WithMemory(int value) { SetMemory(value); return *this;}

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline ContainerDetail& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline ContainerDetail& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline ContainerDetail& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline ContainerDetail& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. </p>
     */
    inline ContainerDetail& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline void SetJobRoleArn(const char* value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline ContainerDetail& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline ContainerDetail& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the job upon execution. </p>
     */
    inline ContainerDetail& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline ContainerDetail& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline ContainerDetail& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline ContainerDetail& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of volumes associated with the job.</p>
     */
    inline ContainerDetail& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline ContainerDetail& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline ContainerDetail& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline ContainerDetail& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline ContainerDetail& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline ContainerDetail& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline ContainerDetail& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline ContainerDetail& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline ContainerDetail& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system.</p>
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system.</p>
     */
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system.</p>
     */
    inline ContainerDetail& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline ContainerDetail& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline ContainerDetail& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline ContainerDetail& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>A list of <code>ulimit</code> values to set in the container.</p>
     */
    inline ContainerDetail& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user).</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user).</p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user).</p>
     */
    inline ContainerDetail& WithPrivileged(bool value) { SetPrivileged(value); return *this;}

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline ContainerDetail& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline ContainerDetail& WithUser(Aws::String&& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container.</p>
     */
    inline ContainerDetail& WithUser(const char* value) { SetUser(value); return *this;}

    /**
     * <p>The exit code to return upon completion.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The exit code to return upon completion.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The exit code to return upon completion.</p>
     */
    inline ContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline ContainerDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline ContainerDetail& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline ContainerDetail& WithReason(const char* value) { SetReason(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline ContainerDetail& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline ContainerDetail& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance on which the
     * container is running.</p>
     */
    inline ContainerDetail& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline ContainerDetail& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline ContainerDetail& WithTaskArn(Aws::String&& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the container job.</p>
     */
    inline ContainerDetail& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}

  private:
    Aws::String m_image;
    bool m_imageHasBeenSet;
    int m_vcpus;
    bool m_vcpusHasBeenSet;
    int m_memory;
    bool m_memoryHasBeenSet;
    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;
    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet;
    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;
    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet;
    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet;
    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet;
    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet;
    bool m_privileged;
    bool m_privilegedHasBeenSet;
    Aws::String m_user;
    bool m_userHasBeenSet;
    int m_exitCode;
    bool m_exitCodeHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;
    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
