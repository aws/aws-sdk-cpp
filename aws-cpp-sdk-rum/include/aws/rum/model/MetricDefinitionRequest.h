/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>Use this structure to define one extended metric that RUM will send to
   * CloudWatch or CloudWatch Evidently. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-vended-metrics.html">
   * Additional metrics that you can send to CloudWatch and CloudWatch
   * Evidently</a>.</p> <p>Only certain combinations of values for <code>Name</code>,
   * <code>ValueKey</code>, and <code>EventPattern</code> are valid. In addition to
   * what is displayed in the list below, the <code>EventPattern</code> can also
   * include information used by the <code>DimensionKeys</code> field.</p> <ul> <li>
   * <p>If <code>Name</code> is <code>PerformanceNavigationDuration</code>, then
   * <code>ValueKey</code>must be <code>event_details.duration</code> and the
   * <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.performance_navigation_event"]}</code> </p>
   * </li> <li> <p>If <code>Name</code> is <code>PerformanceResourceDuration</code>,
   * then <code>ValueKey</code>must be <code>event_details.duration</code> and the
   * <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.performance_resource_event"]}</code> </p>
   * </li> <li> <p>If <code>Name</code> is
   * <code>NavigationSatisfiedTransaction</code>, then <code>ValueKey</code>must be
   * null and the <code>EventPattern</code> must include <code>{ "event_type":
   * ["com.amazon.rum.performance_navigation_event"], "event_details": { "duration":
   * [{ "numeric": ["&gt;",2000] }] } }</code> </p> </li> <li> <p>If
   * <code>Name</code> is <code>NavigationToleratedTransaction</code>, then
   * <code>ValueKey</code>must be null and the <code>EventPattern</code> must include
   * <code>{ "event_type": ["com.amazon.rum.performance_navigation_event"],
   * "event_details": { "duration": [{ "numeric": ["&gt;=",2000,"&lt;"8000] }] }
   * }</code> </p> </li> <li> <p>If <code>Name</code> is
   * <code>NavigationFrustratedTransaction</code>, then <code>ValueKey</code>must be
   * null and the <code>EventPattern</code> must include <code>{ "event_type":
   * ["com.amazon.rum.performance_navigation_event"], "event_details": { "duration":
   * [{ "numeric": ["&gt;=",8000] }] } }</code> </p> </li> <li> <p>If
   * <code>Name</code> is <code>WebVitalsCumulativeLayoutShift</code>, then
   * <code>ValueKey</code>must be <code>event_details.value</code> and the
   * <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.cumulative_layout_shift_event"]}</code>
   * </p> </li> <li> <p>If <code>Name</code> is
   * <code>WebVitalsFirstInputDelay</code>, then <code>ValueKey</code>must be
   * <code>event_details.value</code> and the <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.first_input_delay_event"]}</code> </p>
   * </li> <li> <p>If <code>Name</code> is
   * <code>WebVitalsLargestContentfulPaint</code>, then <code>ValueKey</code>must be
   * <code>event_details.value</code> and the <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.largest_contentful_paint_event"]}</code>
   * </p> </li> <li> <p>If <code>Name</code> is <code>JsErrorCount</code>, then
   * <code>ValueKey</code>must be null and the <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.js_error_event"]}</code> </p> </li> <li>
   * <p>If <code>Name</code> is <code>HttpErrorCount</code>, then
   * <code>ValueKey</code>must be null and the <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.http_event"]}</code> </p> </li> <li> <p>If
   * <code>Name</code> is <code>SessionCount</code>, then <code>ValueKey</code>must
   * be null and the <code>EventPattern</code> must include
   * <code>{"event_type":["com.amazon.rum.session_start_event"]}</code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/MetricDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class MetricDefinitionRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API MetricDefinitionRequest();
    AWS_CLOUDWATCHRUM_API MetricDefinitionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API MetricDefinitionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensionKeys() const{ return m_dimensionKeys; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline void SetDimensionKeys(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys = value; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline void SetDimensionKeys(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys = std::move(value); }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& WithDimensionKeys(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensionKeys(value); return *this;}

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& WithDimensionKeys(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensionKeys(std::move(value)); return *this;}

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(const Aws::String& key, const Aws::String& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, value); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(Aws::String&& key, const Aws::String& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), value); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(const Aws::String& key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(Aws::String&& key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(const char* key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(Aws::String&& key, const char* value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), value); return *this; }

    /**
     * <p>Use this field only if you are sending the metric to CloudWatch.</p> <p>This
     * field is a map of field paths to dimension names. It defines the dimensions to
     * associate with this metric in CloudWatch. Valid values for the entries in this
     * field are the following:</p> <ul> <li> <p> <code>"metadata.pageId":
     * "PageId"</code> </p> </li> <li> <p> <code>"metadata.browserName":
     * "BrowserName"</code> </p> </li> <li> <p> <code>"metadata.deviceType":
     * "DeviceType"</code> </p> </li> <li> <p> <code>"metadata.osName": "OSName"</code>
     * </p> </li> <li> <p> <code>"metadata.countryCode": "CountryCode"</code> </p>
     * </li> <li> <p> <code>"event_details.fileType": "FileType"</code> </p> </li>
     * </ul> <p> All dimensions listed in this field must also be included in
     * <code>EventPattern</code>.</p>
     */
    inline MetricDefinitionRequest& AddDimensionKeys(const char* key, const char* value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, value); return *this; }


    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline MetricDefinitionRequest& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline MetricDefinitionRequest& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern that defines the metric, specified as a JSON object. RUM checks
     * events that happen in a user's session against the pattern, and events that
     * match the pattern are sent to the metric destination.</p> <p>When you define
     * extended metrics, the metric definition is not valid if
     * <code>EventPattern</code> is omitted.</p> <p>Example event patterns:</p> <ul>
     * <li> <p> <code>'{ "event_type": ["com.amazon.rum.js_error_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Firefox" ] }, "event_details": { "duration": [{
     * "numeric": [ "&lt;", 2000 ] }] } }'</code> </p> </li> <li> <p> <code>'{
     * "event_type": ["com.amazon.rum.performance_navigation_event"], "metadata": {
     * "browserName": [ "Chrome", "Safari" ], "countryCode": [ "US" ] },
     * "event_details": { "duration": [{ "numeric": [ "&gt;=", 2000, "&lt;", 8000 ] }]
     * } }'</code> </p> </li> </ul> <p>If the metrics destination' is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline MetricDefinitionRequest& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline MetricDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline MetricDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the metric that is defined in this structure. Valid values are
     * the following:</p> <ul> <li> <p> <code>PerformanceNavigationDuration</code> </p>
     * </li> <li> <p> <code>PerformanceResourceDuration </code> </p> </li> <li> <p>
     * <code>NavigationSatisfiedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationToleratedTransaction</code> </p> </li> <li> <p>
     * <code>NavigationFrustratedTransaction</code> </p> </li> <li> <p>
     * <code>WebVitalsCumulativeLayoutShift</code> </p> </li> <li> <p>
     * <code>WebVitalsFirstInputDelay</code> </p> </li> <li> <p>
     * <code>WebVitalsLargestContentfulPaint</code> </p> </li> <li> <p>
     * <code>JsErrorCount</code> </p> </li> <li> <p> <code>HttpErrorCount</code> </p>
     * </li> <li> <p> <code>SessionCount</code> </p> </li> </ul>
     */
    inline MetricDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline const Aws::String& GetUnitLabel() const{ return m_unitLabel; }

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline void SetUnitLabel(const Aws::String& value) { m_unitLabelHasBeenSet = true; m_unitLabel = value; }

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline void SetUnitLabel(Aws::String&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::move(value); }

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline void SetUnitLabel(const char* value) { m_unitLabelHasBeenSet = true; m_unitLabel.assign(value); }

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline MetricDefinitionRequest& WithUnitLabel(const Aws::String& value) { SetUnitLabel(value); return *this;}

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline MetricDefinitionRequest& WithUnitLabel(Aws::String&& value) { SetUnitLabel(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch metric unit to use for this metric. If you omit this field,
     * the metric is recorded with no unit.</p>
     */
    inline MetricDefinitionRequest& WithUnitLabel(const char* value) { SetUnitLabel(value); return *this;}


    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline const Aws::String& GetValueKey() const{ return m_valueKey; }

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline void SetValueKey(const Aws::String& value) { m_valueKeyHasBeenSet = true; m_valueKey = value; }

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline void SetValueKey(Aws::String&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::move(value); }

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline void SetValueKey(const char* value) { m_valueKeyHasBeenSet = true; m_valueKey.assign(value); }

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline MetricDefinitionRequest& WithValueKey(const Aws::String& value) { SetValueKey(value); return *this;}

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline MetricDefinitionRequest& WithValueKey(Aws::String&& value) { SetValueKey(std::move(value)); return *this;}

    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     * <p>If you omit this field, a hardcoded value of 1 is pushed as the metric value.
     * This is useful if you just want to count the number of events that the filter
     * catches. </p> <p>If this metric is sent to CloudWatch Evidently, this field will
     * be passed to Evidently raw and Evidently will handle data extraction from the
     * event.</p>
     */
    inline MetricDefinitionRequest& WithValueKey(const char* value) { SetValueKey(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensionKeys;
    bool m_dimensionKeysHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_unitLabel;
    bool m_unitLabelHasBeenSet = false;

    Aws::String m_valueKey;
    bool m_valueKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
