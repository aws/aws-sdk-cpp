/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TimeInterval.h>

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
 * <p>Optional filters that restrict a search to a subset of the workspace's
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SearchFilters">AWS
 * API Reference</a></p>
 */
class SearchFilters {
 public:
  AWS_IOTSITEWISE_API SearchFilters() = default;
  AWS_IOTSITEWISE_API SearchFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API SearchFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Restricts the search to these time series.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTimeSeriesIds() const { return m_timeSeriesIds; }
  inline bool TimeSeriesIdsHasBeenSet() const { return m_timeSeriesIdsHasBeenSet; }
  template <typename TimeSeriesIdsT = Aws::Vector<Aws::String>>
  void SetTimeSeriesIds(TimeSeriesIdsT&& value) {
    m_timeSeriesIdsHasBeenSet = true;
    m_timeSeriesIds = std::forward<TimeSeriesIdsT>(value);
  }
  template <typename TimeSeriesIdsT = Aws::Vector<Aws::String>>
  SearchFilters& WithTimeSeriesIds(TimeSeriesIdsT&& value) {
    SetTimeSeriesIds(std::forward<TimeSeriesIdsT>(value));
    return *this;
  }
  template <typename TimeSeriesIdsT = Aws::String>
  SearchFilters& AddTimeSeriesIds(TimeSeriesIdsT&& value) {
    m_timeSeriesIdsHasBeenSet = true;
    m_timeSeriesIds.emplace_back(std::forward<TimeSeriesIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restricts the search to these datasets.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDatasetIds() const { return m_datasetIds; }
  inline bool DatasetIdsHasBeenSet() const { return m_datasetIdsHasBeenSet; }
  template <typename DatasetIdsT = Aws::Vector<Aws::String>>
  void SetDatasetIds(DatasetIdsT&& value) {
    m_datasetIdsHasBeenSet = true;
    m_datasetIds = std::forward<DatasetIdsT>(value);
  }
  template <typename DatasetIdsT = Aws::Vector<Aws::String>>
  SearchFilters& WithDatasetIds(DatasetIdsT&& value) {
    SetDatasetIds(std::forward<DatasetIdsT>(value));
    return *this;
  }
  template <typename DatasetIdsT = Aws::String>
  SearchFilters& AddDatasetIds(DatasetIdsT&& value) {
    m_datasetIdsHasBeenSet = true;
    m_datasetIds.emplace_back(std::forward<DatasetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restricts the search to these time intervals.</p>
   */
  inline const Aws::Vector<TimeInterval>& GetTimeIntervals() const { return m_timeIntervals; }
  inline bool TimeIntervalsHasBeenSet() const { return m_timeIntervalsHasBeenSet; }
  template <typename TimeIntervalsT = Aws::Vector<TimeInterval>>
  void SetTimeIntervals(TimeIntervalsT&& value) {
    m_timeIntervalsHasBeenSet = true;
    m_timeIntervals = std::forward<TimeIntervalsT>(value);
  }
  template <typename TimeIntervalsT = Aws::Vector<TimeInterval>>
  SearchFilters& WithTimeIntervals(TimeIntervalsT&& value) {
    SetTimeIntervals(std::forward<TimeIntervalsT>(value));
    return *this;
  }
  template <typename TimeIntervalsT = TimeInterval>
  SearchFilters& AddTimeIntervals(TimeIntervalsT&& value) {
    m_timeIntervalsHasBeenSet = true;
    m_timeIntervals.emplace_back(std::forward<TimeIntervalsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_timeSeriesIds;

  Aws::Vector<Aws::String> m_datasetIds;

  Aws::Vector<TimeInterval> m_timeIntervals;
  bool m_timeSeriesIdsHasBeenSet = false;
  bool m_datasetIdsHasBeenSet = false;
  bool m_timeIntervalsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
