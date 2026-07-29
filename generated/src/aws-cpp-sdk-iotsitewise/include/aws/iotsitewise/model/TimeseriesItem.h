/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/FormatSettings.h>
#include <aws/iotsitewise/model/TrimSettings.h>

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
 * &lt;p&gt;A single timeseries item to process. Exactly one of timeSeriesId or
 * propertyAlias must be provided.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TimeseriesItem">AWS
 * API Reference</a></p>
 */
class TimeseriesItem {
 public:
  AWS_IOTSITEWISE_API TimeseriesItem() = default;
  AWS_IOTSITEWISE_API TimeseriesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API TimeseriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The unique identifier for the timeseries. Mutually exclusive with
   * propertyAlias.&lt;/p&gt;
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  TimeseriesItem& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The customer-friendly alias for the timeseries. Mutually exclusive with
   * timeSeriesId.&lt;/p&gt;
   */
  inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
  inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
  template <typename PropertyAliasT = Aws::String>
  void SetPropertyAlias(PropertyAliasT&& value) {
    m_propertyAliasHasBeenSet = true;
    m_propertyAlias = std::forward<PropertyAliasT>(value);
  }
  template <typename PropertyAliasT = Aws::String>
  TimeseriesItem& WithPropertyAlias(PropertyAliasT&& value) {
    SetPropertyAlias(std::forward<PropertyAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The trim settings for the time range to export. Required for VIDEO and
   * TELEMETRY data types; optional for ANNOTATION data types.&lt;/p&gt;
   */
  inline const TrimSettings& GetTrimSettings() const { return m_trimSettings; }
  inline bool TrimSettingsHasBeenSet() const { return m_trimSettingsHasBeenSet; }
  template <typename TrimSettingsT = TrimSettings>
  void SetTrimSettings(TrimSettingsT&& value) {
    m_trimSettingsHasBeenSet = true;
    m_trimSettings = std::forward<TrimSettingsT>(value);
  }
  template <typename TrimSettingsT = TrimSettings>
  TimeseriesItem& WithTrimSettings(TrimSettingsT&& value) {
    SetTrimSettings(std::forward<TrimSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The optional format settings for the output.&lt;/p&gt;
   */
  inline const FormatSettings& GetFormatSettings() const { return m_formatSettings; }
  inline bool FormatSettingsHasBeenSet() const { return m_formatSettingsHasBeenSet; }
  template <typename FormatSettingsT = FormatSettings>
  void SetFormatSettings(FormatSettingsT&& value) {
    m_formatSettingsHasBeenSet = true;
    m_formatSettings = std::forward<FormatSettingsT>(value);
  }
  template <typename FormatSettingsT = FormatSettings>
  TimeseriesItem& WithFormatSettings(FormatSettingsT&& value) {
    SetFormatSettings(std::forward<FormatSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_timeSeriesId;

  Aws::String m_propertyAlias;

  TrimSettings m_trimSettings;

  FormatSettings m_formatSettings;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_propertyAliasHasBeenSet = false;
  bool m_trimSettingsHasBeenSet = false;
  bool m_formatSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
