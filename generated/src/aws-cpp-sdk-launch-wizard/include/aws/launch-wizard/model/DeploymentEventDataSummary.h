/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/EventStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>A summary of the deployment event data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentEventDataSummary">AWS
 * API Reference</a></p>
 */
class DeploymentEventDataSummary {
 public:
  AWS_LAUNCHWIZARD_API DeploymentEventDataSummary() = default;
  AWS_LAUNCHWIZARD_API DeploymentEventDataSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API DeploymentEventDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the deployment event.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DeploymentEventDataSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the deployment event.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DeploymentEventDataSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the deployment event.</p>
   */
  inline EventStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EventStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeploymentEventDataSummary& WithStatus(EventStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason of the deployment event status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DeploymentEventDataSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the deployment event.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  DeploymentEventDataSummary& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  DeploymentEventDataSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  DeploymentEventDataSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  EventStatus m_status{EventStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_timestamp{};

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
