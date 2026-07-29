/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentTrimSettings.h>

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
 * &lt;p&gt;Configuration for event detection enrichment on video time-series
 * data.&lt;/p&gt; &lt;p&gt;Event detection generates embeddings from video data
 * enabling natural language similarity search on events. This allows customers
 * to:&lt;/p&gt; &lt;ul&gt; &lt;li&gt;Query video events using semantic search
 * after enrichment completes&lt;/li&gt; &lt;li&gt;Find relevant video segments
 * through natural language queries&lt;/li&gt; &lt;li&gt;Search across video
 * time-series data stored in IoT SiteWise&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;You must
 * specify the dataset, exactly one time-series identifier (timeSeriesId OR
 * propertyAlias), and trim settings defining the video time window to
 * process.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/EventDetection">AWS
 * API Reference</a></p>
 */
class EventDetection {
 public:
  AWS_IOTSITEWISE_API EventDetection() = default;
  AWS_IOTSITEWISE_API EventDetection(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API EventDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The IoT SiteWise dataset ID containing the video time-series data to
   * analyze. Query IoT SiteWise to discover available datasets in your
   * workspace.&lt;/p&gt;
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  EventDetection& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;Unique system identifier for the video time series to analyze. Specify
   * either timeSeriesId or propertyAlias, but not both. Use this when you have the
   * system-generated time series identifier from IoT SiteWise.&lt;/p&gt;
   */
  inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
  inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
  template <typename TimeSeriesIdT = Aws::String>
  void SetTimeSeriesId(TimeSeriesIdT&& value) {
    m_timeSeriesIdHasBeenSet = true;
    m_timeSeriesId = std::forward<TimeSeriesIdT>(value);
  }
  template <typename TimeSeriesIdT = Aws::String>
  EventDetection& WithTimeSeriesId(TimeSeriesIdT&& value) {
    SetTimeSeriesId(std::forward<TimeSeriesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;Human-readable alias for the video time series to analyze (e.g.,
   * /camera/warehouse/zone-a). Specify either propertyAlias or timeSeriesId, but not
   * both. Use this when you have configured friendly aliases in IoT SiteWise for
   * better readability.&lt;/p&gt;
   */
  inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
  inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
  template <typename PropertyAliasT = Aws::String>
  void SetPropertyAlias(PropertyAliasT&& value) {
    m_propertyAliasHasBeenSet = true;
    m_propertyAlias = std::forward<PropertyAliasT>(value);
  }
  template <typename PropertyAliasT = Aws::String>
  EventDetection& WithPropertyAlias(PropertyAliasT&& value) {
    SetPropertyAlias(std::forward<PropertyAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;Time range settings defining which portion of the video time-series
   * data to process. Required to ensure predictable processing time and prevent
   * analyzing unbounded datasets. Start and end times must be within the dataset's
   * time bounds.&lt;/p&gt;
   */
  inline const EnrichmentTrimSettings& GetTrimSettings() const { return m_trimSettings; }
  inline bool TrimSettingsHasBeenSet() const { return m_trimSettingsHasBeenSet; }
  template <typename TrimSettingsT = EnrichmentTrimSettings>
  void SetTrimSettings(TrimSettingsT&& value) {
    m_trimSettingsHasBeenSet = true;
    m_trimSettings = std::forward<TrimSettingsT>(value);
  }
  template <typename TrimSettingsT = EnrichmentTrimSettings>
  EventDetection& WithTrimSettings(TrimSettingsT&& value) {
    SetTrimSettings(std::forward<TrimSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_timeSeriesId;

  Aws::String m_propertyAlias;

  EnrichmentTrimSettings m_trimSettings;
  bool m_datasetIdHasBeenSet = false;
  bool m_timeSeriesIdHasBeenSet = false;
  bool m_propertyAliasHasBeenSet = false;
  bool m_trimSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
