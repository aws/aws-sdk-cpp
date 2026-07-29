/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetEnrichmentStatus.h>

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
 * <p>Contains enrichment status information for a specific data type in a
 * dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetEnrichmentEntry">AWS
 * API Reference</a></p>
 */
class DatasetEnrichmentEntry {
 public:
  AWS_IOTSITEWISE_API DatasetEnrichmentEntry() = default;
  AWS_IOTSITEWISE_API DatasetEnrichmentEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DatasetEnrichmentEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enrichment status of the data type in the dataset.</p>
   */
  inline DatasetEnrichmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DatasetEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DatasetEnrichmentEntry& WithStatus(DatasetEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the data was last enriched, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastEnrichedAt() const { return m_lastEnrichedAt; }
  inline bool LastEnrichedAtHasBeenSet() const { return m_lastEnrichedAtHasBeenSet; }
  template <typename LastEnrichedAtT = Aws::Utils::DateTime>
  void SetLastEnrichedAt(LastEnrichedAtT&& value) {
    m_lastEnrichedAtHasBeenSet = true;
    m_lastEnrichedAt = std::forward<LastEnrichedAtT>(value);
  }
  template <typename LastEnrichedAtT = Aws::Utils::DateTime>
  DatasetEnrichmentEntry& WithLastEnrichedAt(LastEnrichedAtT&& value) {
    SetLastEnrichedAt(std::forward<LastEnrichedAtT>(value));
    return *this;
  }
  ///@}
 private:
  DatasetEnrichmentStatus m_status{DatasetEnrichmentStatus::NOT_SET};

  Aws::Utils::DateTime m_lastEnrichedAt{};
  bool m_statusHasBeenSet = false;
  bool m_lastEnrichedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
