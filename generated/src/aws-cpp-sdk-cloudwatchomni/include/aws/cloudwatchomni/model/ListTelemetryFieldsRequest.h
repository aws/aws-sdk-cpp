/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/TelemetryType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class ListTelemetryFieldsRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API ListTelemetryFieldsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTelemetryFields"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the dataset to list fields for.</p>
   */
  inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
  inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
  template <typename DataSetNameT = Aws::String>
  void SetDataSetName(DataSetNameT&& value) {
    m_dataSetNameHasBeenSet = true;
    m_dataSetName = std::forward<DataSetNameT>(value);
  }
  template <typename DataSetNameT = Aws::String>
  ListTelemetryFieldsRequest& WithDataSetName(DataSetNameT&& value) {
    SetDataSetName(std::forward<DataSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of telemetry to filter fields by.</p>
   */
  inline TelemetryType GetTelemetryType() const { return m_telemetryType; }
  inline bool TelemetryTypeHasBeenSet() const { return m_telemetryTypeHasBeenSet; }
  inline void SetTelemetryType(TelemetryType value) {
    m_telemetryTypeHasBeenSet = true;
    m_telemetryType = value;
  }
  inline ListTelemetryFieldsRequest& WithTelemetryType(TelemetryType value) {
    SetTelemetryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive start of the lookback window. When omitted, the service defaults to
   * the configured lookback before endTime.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListTelemetryFieldsRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive end of the lookback window. When omitted, the service defaults to
   * the current time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListTelemetryFieldsRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results. Reserved for future pagination;
   * the service does not paginate at this time and returns null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTelemetryFieldsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSetName;

  TelemetryType m_telemetryType{TelemetryType::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_nextToken;
  bool m_dataSetNameHasBeenSet = false;
  bool m_telemetryTypeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
