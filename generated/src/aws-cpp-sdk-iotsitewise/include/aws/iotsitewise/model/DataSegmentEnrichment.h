/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentStatus.h>

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
 * <p>Contains enrichment status information for a data segment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DataSegmentEnrichment">AWS
 * API Reference</a></p>
 */
class DataSegmentEnrichment {
 public:
  AWS_IOTSITEWISE_API DataSegmentEnrichment() = default;
  AWS_IOTSITEWISE_API DataSegmentEnrichment(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DataSegmentEnrichment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enrichment status of the data segment.</p>
   */
  inline EnrichmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DataSegmentEnrichment& WithStatus(EnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the data segment was last enriched, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastEnrichedAt() const { return m_lastEnrichedAt; }
  inline bool LastEnrichedAtHasBeenSet() const { return m_lastEnrichedAtHasBeenSet; }
  template <typename LastEnrichedAtT = Aws::Utils::DateTime>
  void SetLastEnrichedAt(LastEnrichedAtT&& value) {
    m_lastEnrichedAtHasBeenSet = true;
    m_lastEnrichedAt = std::forward<LastEnrichedAtT>(value);
  }
  template <typename LastEnrichedAtT = Aws::Utils::DateTime>
  DataSegmentEnrichment& WithLastEnrichedAt(LastEnrichedAtT&& value) {
    SetLastEnrichedAt(std::forward<LastEnrichedAtT>(value));
    return *this;
  }
  ///@}
 private:
  EnrichmentStatus m_status{EnrichmentStatus::NOT_SET};

  Aws::Utils::DateTime m_lastEnrichedAt{};
  bool m_statusHasBeenSet = false;
  bool m_lastEnrichedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
