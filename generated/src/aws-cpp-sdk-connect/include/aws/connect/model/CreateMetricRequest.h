/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricCalculation.h>
#include <aws/connect/model/MetricStatus.h>
#include <aws/connect/model/MetricUnit.h>
#include <aws/connect/model/TrendIndicator.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateMetricRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateMetricRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMetric"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateMetricRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metric.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateMetricRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calculation definition for the metric, including the formula expression
   * and the component metrics it references.</p>
   */
  inline const MetricCalculation& GetMetricCalculation() const { return m_metricCalculation; }
  inline bool MetricCalculationHasBeenSet() const { return m_metricCalculationHasBeenSet; }
  template <typename MetricCalculationT = MetricCalculation>
  void SetMetricCalculation(MetricCalculationT&& value) {
    m_metricCalculationHasBeenSet = true;
    m_metricCalculation = std::forward<MetricCalculationT>(value);
  }
  template <typename MetricCalculationT = MetricCalculation>
  CreateMetricRequest& WithMetricCalculation(MetricCalculationT&& value) {
    SetMetricCalculation(std::forward<MetricCalculationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display unit for the metric's data.</p>
   */
  inline MetricUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(MetricUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline CreateMetricRequest& WithUnit(MetricUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish status of the metric. Set to <code>PUBLISHED</code> to make the
   * metric available for use in dashboards and reports, or <code>SAVED</code> to
   * keep it in draft state.</p>
   */
  inline MetricStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MetricStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateMetricRequest& WithStatus(MetricStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateMetricRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the metric.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateMetricRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How an increase in the metric value should be interpreted. Valid values:
   * <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>NEGATIVE</code>.</p>
   */
  inline TrendIndicator GetPositiveTrendIndicator() const { return m_positiveTrendIndicator; }
  inline bool PositiveTrendIndicatorHasBeenSet() const { return m_positiveTrendIndicatorHasBeenSet; }
  inline void SetPositiveTrendIndicator(TrendIndicator value) {
    m_positiveTrendIndicatorHasBeenSet = true;
    m_positiveTrendIndicator = value;
  }
  inline CreateMetricRequest& WithPositiveTrendIndicator(TrendIndicator value) {
    SetPositiveTrendIndicator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateMetricRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateMetricRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_name;

  MetricCalculation m_metricCalculation;

  MetricUnit m_unit{MetricUnit::NOT_SET};

  MetricStatus m_status{MetricStatus::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_description;

  TrendIndicator m_positiveTrendIndicator{TrendIndicator::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_instanceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_metricCalculationHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_descriptionHasBeenSet = false;
  bool m_positiveTrendIndicatorHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
