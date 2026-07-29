/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DataSegmentEnrichment.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/iotsitewise/model/TimeInNanos.h>

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
 * <p>Contains summary information about a data segment, including its source
 * dataset, time series, timestamp range, and enrichment status.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DataSegmentSummary">AWS
 * API Reference</a></p>
 */
class DataSegmentSummary {
 public:
  AWS_IOTSITEWISE_API DataSegmentSummary() = default;
  AWS_IOTSITEWISE_API DataSegmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DataSegmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the source dataset that contains the data segment.</p>
   */
  inline const Aws::String& GetSourceDatasetId() const { return m_sourceDatasetId; }
  inline bool SourceDatasetIdHasBeenSet() const { return m_sourceDatasetIdHasBeenSet; }
  template <typename SourceDatasetIdT = Aws::String>
  void SetSourceDatasetId(SourceDatasetIdT&& value) {
    m_sourceDatasetIdHasBeenSet = true;
    m_sourceDatasetId = std::forward<SourceDatasetIdT>(value);
  }
  template <typename SourceDatasetIdT = Aws::String>
  DataSegmentSummary& WithSourceDatasetId(SourceDatasetIdT&& value) {
    SetSourceDatasetId(std::forward<SourceDatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the time series.</p>
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  DataSegmentSummary& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The nanosecond-precision start time of the data segment.</p>
   */
  inline const TimeInNanos& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = TimeInNanos>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = TimeInNanos>
  DataSegmentSummary& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The nanosecond-precision end time of the data segment.</p>
   */
  inline const TimeInNanos& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = TimeInNanos>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = TimeInNanos>
  DataSegmentSummary& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias of the time series.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  DataSegmentSummary& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the time series.</p>
   */
  inline PropertyDataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(PropertyDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline DataSegmentSummary& WithDataType(PropertyDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enrichment information for the data segment.</p>
   */
  inline const DataSegmentEnrichment& GetEnrichment() const { return m_enrichment; }
  inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
  template <typename EnrichmentT = DataSegmentEnrichment>
  void SetEnrichment(EnrichmentT&& value) {
    m_enrichmentHasBeenSet = true;
    m_enrichment = std::forward<EnrichmentT>(value);
  }
  template <typename EnrichmentT = DataSegmentEnrichment>
  DataSegmentSummary& WithEnrichment(EnrichmentT&& value) {
    SetEnrichment(std::forward<EnrichmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceDatasetId;

  Aws::String m_timeSeriesId;

  TimeInNanos m_startTimestamp;

  TimeInNanos m_endTimestamp;

  Aws::String m_alias;

  PropertyDataType m_dataType{PropertyDataType::NOT_SET};

  DataSegmentEnrichment m_enrichment;
  bool m_sourceDatasetIdHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_startTimestampHasBeenSet = false;
  bool m_endTimestampHasBeenSet = false;
  bool m_aliasHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_enrichmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
