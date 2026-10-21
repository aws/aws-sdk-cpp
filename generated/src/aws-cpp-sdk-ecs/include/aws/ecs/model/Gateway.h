/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AccessType.h>
#include <aws/ecs/model/DescribeGatewayConfiguration.h>
#include <aws/ecs/model/GatewayResourceFailure.h>
#include <aws/ecs/model/GatewayStatus.h>
#include <aws/ecs/model/PropagateGatewayTags.h>
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
 * <p>The details of a gateway, including its configuration, status, and the
 * infrastructure settings for its type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Gateway">AWS API
 * Reference</a></p>
 */
class Gateway {
 public:
  AWS_ECS_API Gateway() = default;
  AWS_ECS_API Gateway(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  Gateway& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the gateway.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Gateway& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the gateway.</p>
   */
  inline GatewayStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GatewayStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Gateway& WithStatus(GatewayStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current status. This value is populated
   * when the gateway is in a failure state, such as <code>UPDATE_FAILED</code>.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  Gateway& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-resource failure details for asynchronous gateway processes, such as
   * an <code>UpdateGateway</code> operation that couldn't update every load
   * balancer.</p>
   */
  inline const Aws::Vector<GatewayResourceFailure>& GetFailures() const { return m_failures; }
  inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }
  template <typename FailuresT = Aws::Vector<GatewayResourceFailure>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<GatewayResourceFailure>>
  Gateway& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = GatewayResourceFailure>
  Gateway& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the gateway uses to
   * manage infrastructure on your behalf.</p>
   */
  inline const Aws::String& GetInfrastructureRoleArn() const { return m_infrastructureRoleArn; }
  inline bool InfrastructureRoleArnHasBeenSet() const { return m_infrastructureRoleArnHasBeenSet; }
  template <typename InfrastructureRoleArnT = Aws::String>
  void SetInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    m_infrastructureRoleArnHasBeenSet = true;
    m_infrastructureRoleArn = std::forward<InfrastructureRoleArnT>(value);
  }
  template <typename InfrastructureRoleArnT = Aws::String>
  Gateway& WithInfrastructureRoleArn(InfrastructureRoleArnT&& value) {
    SetInfrastructureRoleArn(std::forward<InfrastructureRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether deletion protection is enabled for the gateway.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline Gateway& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type-specific configuration for the gateway.</p>
   */
  inline const DescribeGatewayConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = DescribeGatewayConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = DescribeGatewayConfiguration>
  Gateway& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the gateway is publicly accessible (<code>PUBLIC</code>) or
   * private (<code>PRIVATE</code>). The gateway derives this value from its scheme
   * when you create the gateway, and the value is immutable.</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline Gateway& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the gateway propagates its tags to the infrastructure it
   * manages.</p>
   */
  inline PropagateGatewayTags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(PropagateGatewayTags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline Gateway& WithPropagateTags(PropagateGatewayTags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata applied to the gateway. Each tag consists of a key and an
   * optional value.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Gateway& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Gateway& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the gateway was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Gateway& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the gateway was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Gateway& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayArn;

  Aws::String m_name;

  GatewayStatus m_status{GatewayStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Vector<GatewayResourceFailure> m_failures;

  Aws::String m_infrastructureRoleArn;

  bool m_deletionProtection{false};

  DescribeGatewayConfiguration m_configuration;

  AccessType m_accessType{AccessType::NOT_SET};

  PropagateGatewayTags m_propagateTags{PropagateGatewayTags::NOT_SET};

  Aws::Vector<Tag> m_tags;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_gatewayArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_failuresHasBeenSet = false;
  bool m_infrastructureRoleArnHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
  bool m_propagateTagsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
