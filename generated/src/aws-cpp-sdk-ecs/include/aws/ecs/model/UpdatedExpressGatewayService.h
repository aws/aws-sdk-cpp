/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayServiceConfiguration.h>
#include <aws/ecs/model/ExpressGatewayServiceStatus.h>

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
 * <p>An object that describes an Express service to be updated.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdatedExpressGatewayService">AWS
 * API Reference</a></p>
 */
class UpdatedExpressGatewayService {
 public:
  AWS_ECS_API UpdatedExpressGatewayService() = default;
  AWS_ECS_API UpdatedExpressGatewayService(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API UpdatedExpressGatewayService& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Express service that is being updated.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  UpdatedExpressGatewayService& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cluster associated with the Express service that is being updated.</p>
   */
  inline const Aws::String& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = Aws::String>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = Aws::String>
  UpdatedExpressGatewayService& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Express service that is being updated.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  UpdatedExpressGatewayService& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Express service that is being updated.</p>
   */
  inline const ExpressGatewayServiceStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = ExpressGatewayServiceStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ExpressGatewayServiceStatus>
  UpdatedExpressGatewayService& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration to which the current Express service is being updated
   * to.</p>
   */
  inline const ExpressGatewayServiceConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
  inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
  template <typename TargetConfigurationT = ExpressGatewayServiceConfiguration>
  void SetTargetConfiguration(TargetConfigurationT&& value) {
    m_targetConfigurationHasBeenSet = true;
    m_targetConfiguration = std::forward<TargetConfigurationT>(value);
  }
  template <typename TargetConfigurationT = ExpressGatewayServiceConfiguration>
  UpdatedExpressGatewayService& WithTargetConfiguration(TargetConfigurationT&& value) {
    SetTargetConfiguration(std::forward<TargetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the Express service that is being updated was
   * created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdatedExpressGatewayService& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the Express service that is being updated was
   * most recently updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdatedExpressGatewayService& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_cluster;

  Aws::String m_serviceName;

  ExpressGatewayServiceStatus m_status;

  ExpressGatewayServiceConfiguration m_targetConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_serviceArnHasBeenSet = false;
  bool m_clusterHasBeenSet = false;
  bool m_serviceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_targetConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
