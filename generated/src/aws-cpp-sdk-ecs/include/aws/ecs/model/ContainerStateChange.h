/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkBinding.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object that represents a change in state for a container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerStateChange">AWS
   * API Reference</a></p>
   */
  class ContainerStateChange
  {
  public:
    AWS_ECS_API ContainerStateChange();
    AWS_ECS_API ContainerStateChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline ContainerStateChange& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline ContainerStateChange& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline ContainerStateChange& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline ContainerStateChange& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline ContainerStateChange& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The container image SHA 256 digest.</p>
     */
    inline ContainerStateChange& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The ID of the Docker container.</p>
     */
    inline const Aws::String& GetRuntimeId() const{ return m_runtimeId; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline bool RuntimeIdHasBeenSet() const { return m_runtimeIdHasBeenSet; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(const Aws::String& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = value; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(Aws::String&& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = std::move(value); }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(const char* value) { m_runtimeIdHasBeenSet = true; m_runtimeId.assign(value); }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline ContainerStateChange& WithRuntimeId(const Aws::String& value) { SetRuntimeId(value); return *this;}

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline ContainerStateChange& WithRuntimeId(Aws::String&& value) { SetRuntimeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline ContainerStateChange& WithRuntimeId(const char* value) { SetRuntimeId(value); return *this;}


    /**
     * <p>The exit code for the container, if the state change is a result of the
     * container exiting.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The exit code for the container, if the state change is a result of the
     * container exiting.</p>
     */
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }

    /**
     * <p>The exit code for the container, if the state change is a result of the
     * container exiting.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The exit code for the container, if the state change is a result of the
     * container exiting.</p>
     */
    inline ContainerStateChange& WithExitCode(int value) { SetExitCode(value); return *this;}


    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const{ return m_networkBindings; }

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline bool NetworkBindingsHasBeenSet() const { return m_networkBindingsHasBeenSet; }

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline void SetNetworkBindings(const Aws::Vector<NetworkBinding>& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = value; }

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline void SetNetworkBindings(Aws::Vector<NetworkBinding>&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::move(value); }

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline ContainerStateChange& WithNetworkBindings(const Aws::Vector<NetworkBinding>& value) { SetNetworkBindings(value); return *this;}

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline ContainerStateChange& WithNetworkBindings(Aws::Vector<NetworkBinding>&& value) { SetNetworkBindings(std::move(value)); return *this;}

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline ContainerStateChange& AddNetworkBindings(const NetworkBinding& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(value); return *this; }

    /**
     * <p>Any network bindings that are associated with the container.</p>
     */
    inline ContainerStateChange& AddNetworkBindings(NetworkBinding&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The reason for the state change.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the state change.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the state change.</p>
     */
    inline ContainerStateChange& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state change.</p>
     */
    inline ContainerStateChange& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the state change.</p>
     */
    inline ContainerStateChange& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The status of the container.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the container.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the container.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the container.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the container.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the container.</p>
     */
    inline ContainerStateChange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the container.</p>
     */
    inline ContainerStateChange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the container.</p>
     */
    inline ContainerStateChange& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_runtimeId;
    bool m_runtimeIdHasBeenSet = false;

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
