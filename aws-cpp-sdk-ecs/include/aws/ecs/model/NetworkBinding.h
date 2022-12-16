/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TransportProtocol.h>
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
   * <p>Details on the network bindings between a container and its host container
   * instance. After a task reaches the <code>RUNNING</code> status, manual and
   * automatic host and container port assignments are visible in the
   * <code>networkBindings</code> section of <a>DescribeTasks</a> API
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NetworkBinding">AWS
   * API Reference</a></p>
   */
  class NetworkBinding
  {
  public:
    AWS_ECS_API NetworkBinding();
    AWS_ECS_API NetworkBinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API NetworkBinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline const Aws::String& GetBindIP() const{ return m_bindIP; }

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline bool BindIPHasBeenSet() const { return m_bindIPHasBeenSet; }

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline void SetBindIP(const Aws::String& value) { m_bindIPHasBeenSet = true; m_bindIP = value; }

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline void SetBindIP(Aws::String&& value) { m_bindIPHasBeenSet = true; m_bindIP = std::move(value); }

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline void SetBindIP(const char* value) { m_bindIPHasBeenSet = true; m_bindIP.assign(value); }

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline NetworkBinding& WithBindIP(const Aws::String& value) { SetBindIP(value); return *this;}

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline NetworkBinding& WithBindIP(Aws::String&& value) { SetBindIP(std::move(value)); return *this;}

    /**
     * <p>The IP address that the container is bound to on the container instance.</p>
     */
    inline NetworkBinding& WithBindIP(const char* value) { SetBindIP(value); return *this;}


    /**
     * <p>The port number on the container that's used with the network binding.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port number on the container that's used with the network binding.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port number on the container that's used with the network binding.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port number on the container that's used with the network binding.</p>
     */
    inline NetworkBinding& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>The port number on the host that's used with the network binding.</p>
     */
    inline int GetHostPort() const{ return m_hostPort; }

    /**
     * <p>The port number on the host that's used with the network binding.</p>
     */
    inline bool HostPortHasBeenSet() const { return m_hostPortHasBeenSet; }

    /**
     * <p>The port number on the host that's used with the network binding.</p>
     */
    inline void SetHostPort(int value) { m_hostPortHasBeenSet = true; m_hostPort = value; }

    /**
     * <p>The port number on the host that's used with the network binding.</p>
     */
    inline NetworkBinding& WithHostPort(int value) { SetHostPort(value); return *this;}


    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline const TransportProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline void SetProtocol(const TransportProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline void SetProtocol(TransportProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline NetworkBinding& WithProtocol(const TransportProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the network binding.</p>
     */
    inline NetworkBinding& WithProtocol(TransportProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline const Aws::String& GetContainerPortRange() const{ return m_containerPortRange; }

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline bool ContainerPortRangeHasBeenSet() const { return m_containerPortRangeHasBeenSet; }

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline void SetContainerPortRange(const Aws::String& value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange = value; }

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline void SetContainerPortRange(Aws::String&& value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange = std::move(value); }

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline void SetContainerPortRange(const char* value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange.assign(value); }

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline NetworkBinding& WithContainerPortRange(const Aws::String& value) { SetContainerPortRange(value); return *this;}

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline NetworkBinding& WithContainerPortRange(Aws::String&& value) { SetContainerPortRange(std::move(value)); return *this;}

    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range.</p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPort</code> is set to the same
     * value as the <code>containerPort</code>. This is a static mapping strategy.</p>
     * </li> <li> <p>For containers in a task with the <code>bridge</code> network
     * mode, the Amazon ECS agent finds open host ports from the default ephemeral
     * range and passes it to docker to bind them to the container ports.</p> </li>
     * </ul> </li> <li> <p>The <code>containerPortRange</code> valid values are between
     * 1 and 65535.</p> </li> <li> <p>A port can only be included in one port mapping
     * per container.</p> </li> <li> <p>You cannot specify overlapping port ranges.</p>
     * </li> <li> <p>The first port in the range must be less than last port in the
     * range.</p> </li> <li> <p>Docker recommends that you turn off the docker-proxy in
     * the Docker daemon config file when you have a large number of ports.</p> <p>For
     * more information, see <a href="https://github.com/moby/moby/issues/11185"> Issue
     * #11185</a> on the Github website.</p> <p>For information about how to turn off
     * the docker-proxy in the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline NetworkBinding& WithContainerPortRange(const char* value) { SetContainerPortRange(value); return *this;}


    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline const Aws::String& GetHostPortRange() const{ return m_hostPortRange; }

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline bool HostPortRangeHasBeenSet() const { return m_hostPortRangeHasBeenSet; }

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline void SetHostPortRange(const Aws::String& value) { m_hostPortRangeHasBeenSet = true; m_hostPortRange = value; }

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline void SetHostPortRange(Aws::String&& value) { m_hostPortRangeHasBeenSet = true; m_hostPortRange = std::move(value); }

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline void SetHostPortRange(const char* value) { m_hostPortRangeHasBeenSet = true; m_hostPortRange.assign(value); }

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline NetworkBinding& WithHostPortRange(const Aws::String& value) { SetHostPortRange(value); return *this;}

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline NetworkBinding& WithHostPortRange(Aws::String&& value) { SetHostPortRange(std::move(value)); return *this;}

    /**
     * <p>The port number range on the host that's used with the network binding. This
     * is assigned is assigned by Docker and delivered by the Amazon ECS agent.</p>
     */
    inline NetworkBinding& WithHostPortRange(const char* value) { SetHostPortRange(value); return *this;}

  private:

    Aws::String m_bindIP;
    bool m_bindIPHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    int m_hostPort;
    bool m_hostPortHasBeenSet = false;

    TransportProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_containerPortRange;
    bool m_containerPortRangeHasBeenSet = false;

    Aws::String m_hostPortRange;
    bool m_hostPortRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
