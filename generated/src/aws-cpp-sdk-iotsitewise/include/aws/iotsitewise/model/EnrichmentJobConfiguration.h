/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EventDetection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Configuration for the enrichment job defining which analysis type to perform
 * on video time-series data. Currently supports event detection enrichment.
 * Exactly one member must be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/EnrichmentJobConfiguration">AWS
 * API Reference</a></p>
 */
class EnrichmentJobConfiguration {
 public:
  AWS_IOTSITEWISE_API EnrichmentJobConfiguration() = default;
  AWS_IOTSITEWISE_API EnrichmentJobConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API EnrichmentJobConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Event detection configuration that generates embeddings from video
   * time-series data enabling natural language similarity search on events. The
   * service processes video data and creates embeddings stored in IoT SiteWise for
   * semantic querying.</p>
   */
  inline const EventDetection& GetEventDetection() const { return m_eventDetection; }
  inline bool EventDetectionHasBeenSet() const { return m_eventDetectionHasBeenSet; }
  template <typename EventDetectionT = EventDetection>
  void SetEventDetection(EventDetectionT&& value) {
    m_eventDetectionHasBeenSet = true;
    m_eventDetection = std::forward<EventDetectionT>(value);
  }
  template <typename EventDetectionT = EventDetection>
  EnrichmentJobConfiguration& WithEventDetection(EventDetectionT&& value) {
    SetEventDetection(std::forward<EventDetectionT>(value));
    return *this;
  }
  ///@}
 private:
  EventDetection m_eventDetection;
  bool m_eventDetectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
