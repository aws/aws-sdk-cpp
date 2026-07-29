/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DataSegmentErrorCode.h>
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
 * <p>Contains error information for a data segment disassociation that
 * failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/FailedDataSegmentDisassociation">AWS
 * API Reference</a></p>
 */
class FailedDataSegmentDisassociation {
 public:
  AWS_IOTSITEWISE_API FailedDataSegmentDisassociation() = default;
  AWS_IOTSITEWISE_API FailedDataSegmentDisassociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API FailedDataSegmentDisassociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the source dataset.</p>
   */
  inline const Aws::String& GetSourceDatasetId() const { return m_sourceDatasetId; }
  inline bool SourceDatasetIdHasBeenSet() const { return m_sourceDatasetIdHasBeenSet; }
  template <typename SourceDatasetIdT = Aws::String>
  void SetSourceDatasetId(SourceDatasetIdT&& value) {
    m_sourceDatasetIdHasBeenSet = true;
    m_sourceDatasetId = std::forward<SourceDatasetIdT>(value);
  }
  template <typename SourceDatasetIdT = Aws::String>
  FailedDataSegmentDisassociation& WithSourceDatasetId(SourceDatasetIdT&& value) {
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
  FailedDataSegmentDisassociation& WithTimeSeriesId(TimeSeriesIdT&& value) {
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
  FailedDataSegmentDisassociation& WithStartTimestamp(StartTimestampT&& value) {
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
  FailedDataSegmentDisassociation& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code for the failed disassociation.</p>
   */
  inline DataSegmentErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(DataSegmentErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline FailedDataSegmentDisassociation& WithErrorCode(DataSegmentErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message for the failed disassociation.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  FailedDataSegmentDisassociation& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceDatasetId;

  Aws::String m_timeSeriesId;

  TimeInNanos m_startTimestamp;

  TimeInNanos m_endTimestamp;

  DataSegmentErrorCode m_errorCode{DataSegmentErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_sourceDatasetIdHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_startTimestampHasBeenSet = false;
  bool m_endTimestampHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
