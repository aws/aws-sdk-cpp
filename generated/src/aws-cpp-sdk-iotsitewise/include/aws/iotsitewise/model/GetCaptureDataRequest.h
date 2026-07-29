/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/FormatSettings.h>
#include <aws/iotsitewise/model/TimeInNanos.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request to retrieve video data for a specific time range. Exactly one of
 * timeSeriesId or propertyAlias must be provided.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetCaptureDataRequest">AWS
 * API Reference</a></p>
 */
class GetCaptureDataRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API GetCaptureDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCaptureData"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace that contains the capture source.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  GetCaptureDataRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the video data range.</p>
   */
  inline const TimeInNanos& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = TimeInNanos>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = TimeInNanos>
  GetCaptureDataRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the video data range. Must be greater than startTime.</p>
   */
  inline const TimeInNanos& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = TimeInNanos>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = TimeInNanos>
  GetCaptureDataRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time series ID that identifies the capture source. Mutually exclusive
   * with propertyAlias.</p>
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  GetCaptureDataRequest& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The property alias that identifies the capture source. Mutually exclusive
   * with timeSeriesId.</p>
   */
  inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
  inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
  template <typename PropertyAliasT = Aws::String>
  void SetPropertyAlias(PropertyAliasT&& value) {
    m_propertyAliasHasBeenSet = true;
    m_propertyAlias = std::forward<PropertyAliasT>(value);
  }
  template <typename PropertyAliasT = Aws::String>
  GetCaptureDataRequest& WithPropertyAlias(PropertyAliasT&& value) {
    SetPropertyAlias(std::forward<PropertyAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional format settings for the output.</p>
   */
  inline const FormatSettings& GetFormatSettings() const { return m_formatSettings; }
  inline bool FormatSettingsHasBeenSet() const { return m_formatSettingsHasBeenSet; }
  template <typename FormatSettingsT = FormatSettings>
  void SetFormatSettings(FormatSettingsT&& value) {
    m_formatSettingsHasBeenSet = true;
    m_formatSettings = std::forward<FormatSettingsT>(value);
  }
  template <typename FormatSettingsT = FormatSettings>
  GetCaptureDataRequest& WithFormatSettings(FormatSettingsT&& value) {
    SetFormatSettings(std::forward<FormatSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token from a previous response used to continue retrieving data.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetCaptureDataRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  TimeInNanos m_startTime;

  TimeInNanos m_endTime;

  Aws::String m_timeSeriesId;

  Aws::String m_propertyAlias;

  FormatSettings m_formatSettings;

  Aws::String m_nextToken;
  bool m_workspaceNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_propertyAliasHasBeenSet = false;
  bool m_formatSettingsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
