/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
 * <p>A single matching segment of time-series data returned by a
 * search.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SearchResult">AWS
 * API Reference</a></p>
 */
class SearchResult {
 public:
  AWS_IOTSITEWISE_API SearchResult() = default;
  AWS_IOTSITEWISE_API SearchResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API SearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the search that produced this result.</p>
   */
  inline const Aws::String& GetSearchId() const { return m_searchId; }
  inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
  template <typename SearchIdT = Aws::String>
  void SetSearchId(SearchIdT&& value) {
    m_searchIdHasBeenSet = true;
    m_searchId = std::forward<SearchIdT>(value);
  }
  template <typename SearchIdT = Aws::String>
  SearchResult& WithSearchId(SearchIdT&& value) {
    SetSearchId(std::forward<SearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace the search ran against.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  SearchResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the dataset that contains the matching data.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  SearchResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the time series that contains the matching data.</p>
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  SearchResult& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the matching time-series segment, in nanoseconds since the Unix
   * epoch.</p>
   */
  inline const TimeInNanos& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = TimeInNanos>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = TimeInNanos>
  SearchResult& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the matching time-series segment, in nanoseconds since the Unix
   * epoch.</p>
   */
  inline const TimeInNanos& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = TimeInNanos>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = TimeInNanos>
  SearchResult& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most relevant point within the matching segment, in
   * nanoseconds since the Unix epoch.</p>
   */
  inline const TimeInNanos& GetTopTimestamp() const { return m_topTimestamp; }
  inline bool TopTimestampHasBeenSet() const { return m_topTimestampHasBeenSet; }
  template <typename TopTimestampT = TimeInNanos>
  void SetTopTimestamp(TopTimestampT&& value) {
    m_topTimestampHasBeenSet = true;
    m_topTimestamp = std::forward<TopTimestampT>(value);
  }
  template <typename TopTimestampT = TimeInNanos>
  SearchResult& WithTopTimestamp(TopTimestampT&& value) {
    SetTopTimestamp(std::forward<TopTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relevance score of this result. Higher scores indicate a stronger
   * match.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline SearchResult& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchId;

  Aws::String m_workspaceName;

  Aws::String m_datasetId;

  Aws::String m_timeSeriesId;

  TimeInNanos m_startTimestamp;

  TimeInNanos m_endTimestamp;

  TimeInNanos m_topTimestamp;

  double m_score{0.0};
  bool m_searchIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_startTimestampHasBeenSet = false;
  bool m_endTimestampHasBeenSet = false;
  bool m_topTimestampHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
