/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Connectivity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/HealthStatus.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/ecs/model/TaskStopCode.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/Attachment.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/Container.h>
#include <aws/ecs/model/InferenceAccelerator.h>
#include <aws/ecs/model/Tag.h>
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
   * <p>Details on a task in a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Task">AWS API
   * Reference</a></p>
   */
  class Task
  {
  public:
    AWS_ECS_API Task();
    AWS_ECS_API Task(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAttachments(const Aws::Vector<Attachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline void SetAttachments(Aws::Vector<Attachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline Task& WithAttachments(const Aws::Vector<Attachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline Task& WithAttachments(Aws::Vector<Attachment>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline Task& AddAttachments(const Attachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline Task& AddAttachments(Attachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes of the task</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes of the task</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes of the task</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes of the task</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes of the task</p>
     */
    inline Task& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes of the task</p>
     */
    inline Task& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes of the task</p>
     */
    inline Task& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes of the task</p>
     */
    inline Task& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline Task& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline Task& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline Task& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline const Aws::String& GetCapacityProviderName() const{ return m_capacityProviderName; }

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline void SetCapacityProviderName(const Aws::String& value) { m_capacityProviderNameHasBeenSet = true; m_capacityProviderName = value; }

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline void SetCapacityProviderName(Aws::String&& value) { m_capacityProviderNameHasBeenSet = true; m_capacityProviderName = std::move(value); }

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline void SetCapacityProviderName(const char* value) { m_capacityProviderNameHasBeenSet = true; m_capacityProviderName.assign(value); }

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline Task& WithCapacityProviderName(const Aws::String& value) { SetCapacityProviderName(value); return *this;}

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline Task& WithCapacityProviderName(Aws::String&& value) { SetCapacityProviderName(std::move(value)); return *this;}

    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline Task& WithCapacityProviderName(const char* value) { SetCapacityProviderName(value); return *this;}


    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline Task& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline Task& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline Task& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The connectivity status of a task.</p>
     */
    inline const Connectivity& GetConnectivity() const{ return m_connectivity; }

    /**
     * <p>The connectivity status of a task.</p>
     */
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }

    /**
     * <p>The connectivity status of a task.</p>
     */
    inline void SetConnectivity(const Connectivity& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }

    /**
     * <p>The connectivity status of a task.</p>
     */
    inline void SetConnectivity(Connectivity&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::move(value); }

    /**
     * <p>The connectivity status of a task.</p>
     */
    inline Task& WithConnectivity(const Connectivity& value) { SetConnectivity(value); return *this;}

    /**
     * <p>The connectivity status of a task.</p>
     */
    inline Task& WithConnectivity(Connectivity&& value) { SetConnectivity(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectivityAt() const{ return m_connectivityAt; }

    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline bool ConnectivityAtHasBeenSet() const { return m_connectivityAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline void SetConnectivityAt(const Aws::Utils::DateTime& value) { m_connectivityAtHasBeenSet = true; m_connectivityAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline void SetConnectivityAt(Aws::Utils::DateTime&& value) { m_connectivityAtHasBeenSet = true; m_connectivityAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline Task& WithConnectivityAt(const Aws::Utils::DateTime& value) { SetConnectivityAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline Task& WithConnectivityAt(Aws::Utils::DateTime&& value) { SetConnectivityAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline Task& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline Task& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline Task& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}


    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline Task& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline Task& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline Task& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline Task& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you use the EC2 launch type, this field is optional.
     * Supported values are between <code>128</code> CPU units (<code>0.125</code>
     * vCPUs) and <code>10240</code> CPU units (<code>10</code> vCPUs).</p> <p>If you
     * use the Fargate launch type, this field is required. You must use one of the
     * following values. These values determine the range of supported values for the
     * <code>memory</code> parameter:</p> <p>The CPU units cannot be less than 1 vCPU
     * when you use Windows containers on Fargate.</p> <ul> <li> <p>256 (.25 vCPU) -
     * Available <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p>
     * </li> <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB),
     * 2048 (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) -
     * Available <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB),
     * 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2
     * vCPU) - Available <code>memory</code> values: 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in increments of 1024
     * (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available <code>memory</code> values:
     * 16 GB and 60 GB in 4 GB increments</p> <p>This option requires Linux platform
     * <code>1.4.0</code> or later.</p> </li> <li> <p>16384 (16vCPU) - Available
     * <code>memory</code> values: 32GB and 120 GB in 8 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline Task& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline Task& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline const Aws::String& GetDesiredStatus() const{ return m_desiredStatus; }

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline bool DesiredStatusHasBeenSet() const { return m_desiredStatusHasBeenSet; }

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetDesiredStatus(const Aws::String& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = value; }

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetDesiredStatus(Aws::String&& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = std::move(value); }

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetDesiredStatus(const char* value) { m_desiredStatusHasBeenSet = true; m_desiredStatus.assign(value); }

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithDesiredStatus(const Aws::String& value) { SetDesiredStatus(value); return *this;}

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithDesiredStatus(Aws::String&& value) { SetDesiredStatus(std::move(value)); return *this;}

    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithDesiredStatus(const char* value) { SetDesiredStatus(value); return *this;}


    /**
     * <p>Determines whether execute command functionality is enabled for this task. If
     * <code>true</code>, execute command functionality is enabled on all the
     * containers in the task.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }

    /**
     * <p>Determines whether execute command functionality is enabled for this task. If
     * <code>true</code>, execute command functionality is enabled on all the
     * containers in the task.</p>
     */
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }

    /**
     * <p>Determines whether execute command functionality is enabled for this task. If
     * <code>true</code>, execute command functionality is enabled on all the
     * containers in the task.</p>
     */
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }

    /**
     * <p>Determines whether execute command functionality is enabled for this task. If
     * <code>true</code>, execute command functionality is enabled on all the
     * containers in the task.</p>
     */
    inline Task& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStoppedAt() const{ return m_executionStoppedAt; }

    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline bool ExecutionStoppedAtHasBeenSet() const { return m_executionStoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline void SetExecutionStoppedAt(const Aws::Utils::DateTime& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline void SetExecutionStoppedAt(Aws::Utils::DateTime&& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline Task& WithExecutionStoppedAt(const Aws::Utils::DateTime& value) { SetExecutionStoppedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline Task& WithExecutionStoppedAt(Aws::Utils::DateTime&& value) { SetExecutionStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline Task& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline Task& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline Task& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline const HealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline void SetHealthStatus(const HealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline void SetHealthStatus(HealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline Task& WithHealthStatus(const HealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline Task& WithHealthStatus(HealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline const Aws::Vector<InferenceAccelerator>& GetInferenceAccelerators() const{ return m_inferenceAccelerators; }

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline void SetInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = value; }

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline void SetInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline Task& WithInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { SetInferenceAccelerators(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline Task& WithInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { SetInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline Task& AddInferenceAccelerators(const InferenceAccelerator& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline Task& AddInferenceAccelerators(InferenceAccelerator&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetLastStatus(Aws::String&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithLastStatus(Aws::String&& value) { SetLastStatus(std::move(value)); return *this;}

    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline Task& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}


    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Task& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Task& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline Task& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>One or more container overrides.</p>
     */
    inline const TaskOverride& GetOverrides() const{ return m_overrides; }

    /**
     * <p>One or more container overrides.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>One or more container overrides.</p>
     */
    inline void SetOverrides(const TaskOverride& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>One or more container overrides.</p>
     */
    inline void SetOverrides(TaskOverride&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>One or more container overrides.</p>
     */
    inline Task& WithOverrides(const TaskOverride& value) { SetOverrides(value); return *this;}

    /**
     * <p>One or more container overrides.</p>
     */
    inline Task& WithOverrides(TaskOverride&& value) { SetOverrides(std::move(value)); return *this;}


    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Task& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Task& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Task& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline const Aws::String& GetPlatformFamily() const{ return m_platformFamily; }

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline void SetPlatformFamily(const Aws::String& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = value; }

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline void SetPlatformFamily(Aws::String&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::move(value); }

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline void SetPlatformFamily(const char* value) { m_platformFamilyHasBeenSet = true; m_platformFamily.assign(value); }

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline Task& WithPlatformFamily(const Aws::String& value) { SetPlatformFamily(value); return *this;}

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline Task& WithPlatformFamily(Aws::String&& value) { SetPlatformFamily(std::move(value)); return *this;}

    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline Task& WithPlatformFamily(const char* value) { SetPlatformFamily(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStartedAt() const{ return m_pullStartedAt; }

    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline bool PullStartedAtHasBeenSet() const { return m_pullStartedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline void SetPullStartedAt(const Aws::Utils::DateTime& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline void SetPullStartedAt(Aws::Utils::DateTime&& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline Task& WithPullStartedAt(const Aws::Utils::DateTime& value) { SetPullStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline Task& WithPullStartedAt(Aws::Utils::DateTime&& value) { SetPullStartedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStoppedAt() const{ return m_pullStoppedAt; }

    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline bool PullStoppedAtHasBeenSet() const { return m_pullStoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline void SetPullStoppedAt(const Aws::Utils::DateTime& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline void SetPullStoppedAt(Aws::Utils::DateTime&& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline Task& WithPullStoppedAt(const Aws::Utils::DateTime& value) { SetPullStoppedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline Task& WithPullStoppedAt(Aws::Utils::DateTime&& value) { SetPullStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline Task& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline Task& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline Task& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline Task& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline Task& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline const TaskStopCode& GetStopCode() const{ return m_stopCode; }

    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline bool StopCodeHasBeenSet() const { return m_stopCodeHasBeenSet; }

    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline void SetStopCode(const TaskStopCode& value) { m_stopCodeHasBeenSet = true; m_stopCode = value; }

    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline void SetStopCode(TaskStopCode&& value) { m_stopCodeHasBeenSet = true; m_stopCode = std::move(value); }

    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline Task& WithStopCode(const TaskStopCode& value) { SetStopCode(value); return *this;}

    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details.</p> <p>The
     * following are valid values:</p> <ul> <li> <p> <code>TaskFailedToStart</code>
     * </p> </li> <li> <p> <code>EssentialContainerExited</code> </p> </li> <li> <p>
     * <code>UserInitiated</code> </p> </li> <li> <p> <code>TerminationNotice</code>
     * </p> </li> <li> <p> <code>ServiceSchedulerInitiated</code> </p> </li> <li> <p>
     * <code>SpotInterruption</code> </p> </li> </ul>
     */
    inline Task& WithStopCode(TaskStopCode&& value) { SetStopCode(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline Task& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline Task& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline const Aws::String& GetStoppedReason() const{ return m_stoppedReason; }

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline bool StoppedReasonHasBeenSet() const { return m_stoppedReasonHasBeenSet; }

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline void SetStoppedReason(const Aws::String& value) { m_stoppedReasonHasBeenSet = true; m_stoppedReason = value; }

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline void SetStoppedReason(Aws::String&& value) { m_stoppedReasonHasBeenSet = true; m_stoppedReason = std::move(value); }

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline void SetStoppedReason(const char* value) { m_stoppedReasonHasBeenSet = true; m_stoppedReason.assign(value); }

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline Task& WithStoppedReason(const Aws::String& value) { SetStoppedReason(value); return *this;}

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline Task& WithStoppedReason(Aws::String&& value) { SetStoppedReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline Task& WithStoppedReason(const char* value) { SetStoppedReason(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppingAt() const{ return m_stoppingAt; }

    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline bool StoppingAtHasBeenSet() const { return m_stoppingAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline void SetStoppingAt(const Aws::Utils::DateTime& value) { m_stoppingAtHasBeenSet = true; m_stoppingAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline void SetStoppingAt(Aws::Utils::DateTime&& value) { m_stoppingAtHasBeenSet = true; m_stoppingAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline Task& WithStoppingAt(const Aws::Utils::DateTime& value) { SetStoppingAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPED</code>.</p>
     */
    inline Task& WithStoppingAt(Aws::Utils::DateTime&& value) { SetStoppingAt(std::move(value)); return *this;}


    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline Task& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline Task& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline Task& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline Task& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline Task& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline Task& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline Task& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline Task& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline Task& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline Task& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}


    /**
     * <p>The version counter for the task. Every time a task experiences a change that
     * starts a CloudWatch event, the version counter is incremented. If you replicate
     * your Amazon ECS task state with CloudWatch Events, you can compare the version
     * of a task reported by the Amazon ECS API actions with the version reported in
     * CloudWatch Events for the task (inside the <code>detail</code> object) to verify
     * that the version in your event stream is current.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version counter for the task. Every time a task experiences a change that
     * starts a CloudWatch event, the version counter is incremented. If you replicate
     * your Amazon ECS task state with CloudWatch Events, you can compare the version
     * of a task reported by the Amazon ECS API actions with the version reported in
     * CloudWatch Events for the task (inside the <code>detail</code> object) to verify
     * that the version in your event stream is current.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version counter for the task. Every time a task experiences a change that
     * starts a CloudWatch event, the version counter is incremented. If you replicate
     * your Amazon ECS task state with CloudWatch Events, you can compare the version
     * of a task reported by the Amazon ECS API actions with the version reported in
     * CloudWatch Events for the task (inside the <code>detail</code> object) to verify
     * that the version in your event stream is current.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version counter for the task. Every time a task experiences a change that
     * starts a CloudWatch event, the version counter is incremented. If you replicate
     * your Amazon ECS task state with CloudWatch Events, you can compare the version
     * of a task reported by the Amazon ECS API actions with the version reported in
     * CloudWatch Events for the task (inside the <code>detail</code> object) to verify
     * that the version in your event stream is current.</p>
     */
    inline Task& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline Task& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline Task& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}

  private:

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_capacityProviderName;
    bool m_capacityProviderNameHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Connectivity m_connectivity;
    bool m_connectivityHasBeenSet = false;

    Aws::Utils::DateTime m_connectivityAt;
    bool m_connectivityAtHasBeenSet = false;

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_desiredStatus;
    bool m_desiredStatusHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    Aws::Utils::DateTime m_executionStoppedAt;
    bool m_executionStoppedAtHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    HealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    TaskOverride m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    Aws::Utils::DateTime m_pullStartedAt;
    bool m_pullStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_pullStoppedAt;
    bool m_pullStoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    TaskStopCode m_stopCode;
    bool m_stopCodeHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_stoppedReason;
    bool m_stoppedReasonHasBeenSet = false;

    Aws::Utils::DateTime m_stoppingAt;
    bool m_stoppingAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
