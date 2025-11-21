/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayContainer.h>
#include <aws/ecs/model/ExpressGatewayScalingTarget.h>
#include <aws/ecs/model/ExpressGatewayServiceNetworkConfiguration.h>
#include <aws/ecs/model/Tag.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class CreateExpressGatewayServiceRequest : public ECSRequest {
 public:
  AWS_ECS_API CreateExpressGatewayServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExpressGatewayService"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
   * Amazon ECS container agent permission to make Amazon Web Services API calls on
   * your behalf. This role is required for Amazon ECS to pull container images from
   * Amazon ECR, send container logs to Amazon CloudWatch Logs, and retrieve
   * sensitive data from Amazon Web Services Systems Manager Parameter Store or
   * Amazon Web Services Secrets Manager.</p> <p>The execution role must include the
   * <code>AmazonECSTaskExecutionRolePolicy</code> managed policy or equivalent
   * permissions. For Express services, this role is used during task startup and
   * runtime for container management operations.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateExpressGatewayServiceRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the infrastructure role that grants Amazon
   * ECS permission to create and manage Amazon Web Services resources on your behalf
   * for the Express service. This role is used to provision and manage Application
   * Load Balancers, target groups, security groups, auto-scaling policies, and other
   * Amazon Web Services infrastructure components.</p> <p>The infrastructure role
   * must include permissions for Elastic Load Balancing, Application Auto Scaling,
   * Amazon EC2 (for security groups), and other services required for managed
   * infrastructure. This role is only used during Express service creation, updates,
   * and deletion operations.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  CreateExpressGatewayServiceRequest& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Express service. This name must be unique within the
   * specified cluster and can contain up to 255 letters (uppercase and lowercase),
   * numbers, underscores, and hyphens. The name is used to identify the service in
   * the Amazon ECS console and API operations.</p> <p>If you don't specify a service
   * name, Amazon ECS generates a unique name for the service. The service name
   * becomes part of the service ARN and cannot be changed after the service is
   * created.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  CreateExpressGatewayServiceRequest& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
   * create the Express service. If you do not specify a cluster, the
   * <code>default</code> cluster is assumed.</p>
   */
  inline const Aws::String& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = Aws::String>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = Aws::String>
  CreateExpressGatewayServiceRequest& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path on the container that the Application Load Balancer uses for health
   * checks. This should be a valid HTTP endpoint that returns a successful response
   * (HTTP 200) when the application is healthy.</p> <p>If not specified, the default
   * health check path is <code>/ping</code>. The health check path must start with a
   * forward slash and can include query parameters. Examples: <code>/health</code>,
   * <code>/api/status</code>, <code>/ping?format=json</code>.</p>
   */
  inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
  inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
  template <typename HealthCheckPathT = Aws::String>
  void SetHealthCheckPath(HealthCheckPathT&& value) {
    m_healthCheckPathHasBeenSet = true;
    m_healthCheckPath = std::forward<HealthCheckPathT>(value);
  }
  template <typename HealthCheckPathT = Aws::String>
  CreateExpressGatewayServiceRequest& WithHealthCheckPath(HealthCheckPathT&& value) {
    SetHealthCheckPath(std::forward<HealthCheckPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary container configuration for the Express service. This defines the
   * main application container that will receive traffic from the Application Load
   * Balancer.</p> <p>The primary container must specify at minimum a container
   * image. You can also configure the container port (defaults to 80), logging
   * configuration, environment variables, secrets, and startup commands. The
   * container image can be from Amazon ECR, Docker Hub, or any other container
   * registry accessible to your execution role.</p>
   */
  inline const ExpressGatewayContainer& GetPrimaryContainer() const { return m_primaryContainer; }
  inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  void SetPrimaryContainer(PrimaryContainerT&& value) {
    m_primaryContainerHasBeenSet = true;
    m_primaryContainer = std::forward<PrimaryContainerT>(value);
  }
  template <typename PrimaryContainerT = ExpressGatewayContainer>
  CreateExpressGatewayServiceRequest& WithPrimaryContainer(PrimaryContainerT&& value) {
    SetPrimaryContainer(std::forward<PrimaryContainerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
   * can assume. This role allows your application code to access other Amazon Web
   * Services services securely.</p> <p>The task role is different from the execution
   * role. While the execution role is used by the Amazon ECS agent to set up the
   * task, the task role is used by your application code running inside the
   * container to make Amazon Web Services API calls. If your application doesn't
   * need to access Amazon Web Services services, you can omit this parameter.</p>
   */
  inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
  inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
  template <typename TaskRoleArnT = Aws::String>
  void SetTaskRoleArn(TaskRoleArnT&& value) {
    m_taskRoleArnHasBeenSet = true;
    m_taskRoleArn = std::forward<TaskRoleArnT>(value);
  }
  template <typename TaskRoleArnT = Aws::String>
  CreateExpressGatewayServiceRequest& WithTaskRoleArn(TaskRoleArnT&& value) {
    SetTaskRoleArn(std::forward<TaskRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the Express service tasks. This specifies the
   * VPC subnets and security groups for the tasks.</p> <p>For Express services, you
   * can specify custom security groups and subnets. If not provided, Amazon ECS will
   * use the default VPC configuration and create appropriate security groups
   * automatically. The network configuration determines how your service integrates
   * with your VPC and what network access it has.</p>
   */
  inline const ExpressGatewayServiceNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ExpressGatewayServiceNetworkConfiguration>
  CreateExpressGatewayServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU units used by the task. This parameter determines the CPU
   * allocation for each task in the Express service. The default value for an
   * Express service is 256 (.25 vCPU).</p>
   */
  inline const Aws::String& GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  template <typename CpuT = Aws::String>
  void SetCpu(CpuT&& value) {
    m_cpuHasBeenSet = true;
    m_cpu = std::forward<CpuT>(value);
  }
  template <typename CpuT = Aws::String>
  CreateExpressGatewayServiceRequest& WithCpu(CpuT&& value) {
    SetCpu(std::forward<CpuT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory (in MiB) used by the task. This parameter determines the
   * memory allocation for each task in the Express service. The default value for an
   * express service is 512 MiB.</p>
   */
  inline const Aws::String& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = Aws::String>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = Aws::String>
  CreateExpressGatewayServiceRequest& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-scaling configuration for the Express service. This defines how the
   * service automatically adjusts the number of running tasks based on demand.</p>
   * <p>You can specify the minimum and maximum number of tasks, the scaling metric
   * (CPU utilization, memory utilization, or request count per target), and the
   * target value for the metric. If not specified, the default target value for an
   * Express service is 60.</p>
   */
  inline const ExpressGatewayScalingTarget& GetScalingTarget() const { return m_scalingTarget; }
  inline bool ScalingTargetHasBeenSet() const { return m_scalingTargetHasBeenSet; }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  void SetScalingTarget(ScalingTargetT&& value) {
    m_scalingTargetHasBeenSet = true;
    m_scalingTarget = std::forward<ScalingTargetT>(value);
  }
  template <typename ScalingTargetT = ExpressGatewayScalingTarget>
  CreateExpressGatewayServiceRequest& WithScalingTarget(ScalingTargetT&& value) {
    SetScalingTarget(std::forward<ScalingTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to the Express service to help categorize and
   * organize it. Each tag consists of a key and an optional value. You can apply up
   * to 50 tags to a service.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateExpressGatewayServiceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateExpressGatewayServiceRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_executionRoleArn;
  bool m_executionRoleArnHasBeenSet = false;

  Aws::String m_infrastructureRoleArn;
  bool m_infrastructureRoleArnHasBeenSet = false;

  Aws::String m_serviceName;
  bool m_serviceNameHasBeenSet = false;

  Aws::String m_cluster;
  bool m_clusterHasBeenSet = false;

  Aws::String m_healthCheckPath;
  bool m_healthCheckPathHasBeenSet = false;

  ExpressGatewayContainer m_primaryContainer;
  bool m_primaryContainerHasBeenSet = false;

  Aws::String m_taskRoleArn;
  bool m_taskRoleArnHasBeenSet = false;

  ExpressGatewayServiceNetworkConfiguration m_networkConfiguration;
  bool m_networkConfigurationHasBeenSet = false;

  Aws::String m_cpu;
  bool m_cpuHasBeenSet = false;

  Aws::String m_memory;
  bool m_memoryHasBeenSet = false;

  ExpressGatewayScalingTarget m_scalingTarget;
  bool m_scalingTargetHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
