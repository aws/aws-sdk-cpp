/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTDataPlane {
namespace Model {

/**
 * <p>Contains information about a subscription for an MQTT client, including the
 * topic filter and Quality of Service (QoS) level.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/SubscriptionSummary">AWS
 * API Reference</a></p>
 */
class SubscriptionSummary {
 public:
  AWS_IOTDATAPLANE_API SubscriptionSummary() = default;
  AWS_IOTDATAPLANE_API SubscriptionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTDATAPLANE_API SubscriptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The topic filter pattern that the client is subscribed to. May include MQTT
   * wildcards such as + (single-level) and # (multi-level).</p>
   */
  inline const Aws::String& GetTopicFilter() const { return m_topicFilter; }
  inline bool TopicFilterHasBeenSet() const { return m_topicFilterHasBeenSet; }
  template <typename TopicFilterT = Aws::String>
  void SetTopicFilter(TopicFilterT&& value) {
    m_topicFilterHasBeenSet = true;
    m_topicFilter = std::forward<TopicFilterT>(value);
  }
  template <typename TopicFilterT = Aws::String>
  SubscriptionSummary& WithTopicFilter(TopicFilterT&& value) {
    SetTopicFilter(std::forward<TopicFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quality of Service (QoS) level for the subscription. Valid values are 0
   * (at most once) and 1 (at least once).</p>
   */
  inline int GetQos() const { return m_qos; }
  inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }
  inline void SetQos(int value) {
    m_qosHasBeenSet = true;
    m_qos = value;
  }
  inline SubscriptionSummary& WithQos(int value) {
    SetQos(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicFilter;

  int m_qos{0};
  bool m_topicFilterHasBeenSet = false;
  bool m_qosHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
