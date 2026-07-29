/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetItem.h>
#include <aws/iotsitewise/model/TimeseriesItem.h>

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
 * &lt;p&gt;Input source for processing. Specify exactly one
 * option.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ProcessingInput">AWS
 * API Reference</a></p>
 */
class ProcessingInput {
 public:
  AWS_IOTSITEWISE_API ProcessingInput() = default;
  AWS_IOTSITEWISE_API ProcessingInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ProcessingInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;List of individual timeseries items to process.&lt;/p&gt;
   */
  inline const Aws::Vector<TimeseriesItem>& GetTimeseries() const { return m_timeseries; }
  inline bool TimeseriesHasBeenSet() const { return m_timeseriesHasBeenSet; }
  template <typename TimeseriesT = Aws::Vector<TimeseriesItem>>
  void SetTimeseries(TimeseriesT&& value) {
    m_timeseriesHasBeenSet = true;
    m_timeseries = std::forward<TimeseriesT>(value);
  }
  template <typename TimeseriesT = Aws::Vector<TimeseriesItem>>
  ProcessingInput& WithTimeseries(TimeseriesT&& value) {
    SetTimeseries(std::forward<TimeseriesT>(value));
    return *this;
  }
  template <typename TimeseriesT = TimeseriesItem>
  ProcessingInput& AddTimeseries(TimeseriesT&& value) {
    m_timeseriesHasBeenSet = true;
    m_timeseries.emplace_back(std::forward<TimeseriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;A dataset containing multiple items to process.&lt;/p&gt;
   */
  inline const DatasetItem& GetDataset() const { return m_dataset; }
  inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
  template <typename DatasetT = DatasetItem>
  void SetDataset(DatasetT&& value) {
    m_datasetHasBeenSet = true;
    m_dataset = std::forward<DatasetT>(value);
  }
  template <typename DatasetT = DatasetItem>
  ProcessingInput& WithDataset(DatasetT&& value) {
    SetDataset(std::forward<DatasetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TimeseriesItem> m_timeseries;

  DatasetItem m_dataset;
  bool m_timeseriesHasBeenSet = false;
  bool m_datasetHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
