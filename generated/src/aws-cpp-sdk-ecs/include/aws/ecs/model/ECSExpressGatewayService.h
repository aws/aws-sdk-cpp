/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayServiceConfiguration.h>
#include <aws/ecs/model/ExpressGatewayServiceStatus.h>
#include <aws/ecs/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Represents an Express service, which provides a simplified way to deploy
 * containerized web applications on Amazon ECS with managed Amazon Web Services
 * infrastructure. An Express service automatically provisions and manages
 * Application Load Balancers, target groups, security groups, and auto-scaling
 * policies.</p> <p>Express services use a service revision architecture where each
 * service can have multiple active configurations, enabling blue-green deployments
 * and gradual rollouts. The service maintains a list of active configurations and
 * manages the lifecycle of the underlying Amazon Web Services
 * resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ECSExpressGatewayService">AWS
 * API Reference</a></p>
 */
class ECSExpressGatewayService {
 public:
  AWS_ECS_API ECSExpressGatewayService() = default;
  AWS_ECS_API ECSExpressGatewayService(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ECSExpressGatewayService& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The short name or full ARN of the cluster that hosts the Express service.</p>
   */
  inline const Aws::String& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = Aws::String>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = Aws::String>
  ECSExpressGatewayService& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Express service.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  ECSExpressGatewayService& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN that identifies the Express service.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  ECSExpressGatewayService& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the infrastructure role that manages Amazon Web Services resources
   * for the Express service.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  ECSExpressGatewayService& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Express service.</p>
   */
  inline const ExpressGatewayServiceStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = ExpressGatewayServiceStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ExpressGatewayServiceStatus>
  ECSExpressGatewayService& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current deployment configuration for the Express service.</p>
   */
  inline const Aws::String& GetCurrentDeployment() const { return m_currentDeployment; }
  inline bool CurrentDeploymentHasBeenSet() const { return m_currentDeploymentHasBeenSet; }
  template <typename CurrentDeploymentT = Aws::String>
  void SetCurrentDeployment(CurrentDeploymentT&& value) {
    m_currentDeploymentHasBeenSet = true;
    m_currentDeployment = std::forward<CurrentDeploymentT>(value);
  }
  template <typename CurrentDeploymentT = Aws::String>
  ECSExpressGatewayService& WithCurrentDeployment(CurrentDeploymentT&& value) {
    SetCurrentDeployment(std::forward<CurrentDeploymentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of active service configurations for the Express service.</p>
   */
  inline const Aws::Vector<ExpressGatewayServiceConfiguration>& GetActiveConfigurations() const { return m_activeConfigurations; }
  inline bool ActiveConfigurationsHasBeenSet() const { return m_activeConfigurationsHasBeenSet; }
  template <typename ActiveConfigurationsT = Aws::Vector<ExpressGatewayServiceConfiguration>>
  void SetActiveConfigurations(ActiveConfigurationsT&& value) {
    m_activeConfigurationsHasBeenSet = true;
    m_activeConfigurations = std::forward<ActiveConfigurationsT>(value);
  }
  template <typename ActiveConfigurationsT = Aws::Vector<ExpressGatewayServiceConfiguration>>
  ECSExpressGatewayService& WithActiveConfigurations(ActiveConfigurationsT&& value) {
    SetActiveConfigurations(std::forward<ActiveConfigurationsT>(value));
    return *this;
  }
  template <typename ActiveConfigurationsT = ExpressGatewayServiceConfiguration>
  ECSExpressGatewayService& AddActiveConfigurations(ActiveConfigurationsT&& value) {
    m_activeConfigurationsHasBeenSet = true;
    m_activeConfigurations.emplace_back(std::forward<ActiveConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata applied to the Express service.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ECSExpressGatewayService& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ECSExpressGatewayService& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the Express service was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ECSExpressGatewayService& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the Express service was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ECSExpressGatewayService& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cluster;
  bool m_clusterHasBeenSet = false;

  Aws::String m_serviceName;
  bool m_serviceNameHasBeenSet = false;

  Aws::String m_serviceArn;
  bool m_serviceArnHasBeenSet = false;

  Aws::String m_infrastructureRoleArn;
  bool m_infrastructureRoleArnHasBeenSet = false;

  ExpressGatewayServiceStatus m_status;
  bool m_statusHasBeenSet = false;

  Aws::String m_currentDeployment;
  bool m_currentDeploymentHasBeenSet = false;

  Aws::Vector<ExpressGatewayServiceConfiguration> m_activeConfigurations;
  bool m_activeConfigurationsHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
