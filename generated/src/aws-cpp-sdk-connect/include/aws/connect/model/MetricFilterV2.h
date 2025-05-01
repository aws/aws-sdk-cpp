/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the filter used when retrieving metrics.
   * <code>MetricFiltersV2</code> can be used on the following metrics:
   * <code>AVG_AGENT_CONNECTING_TIME</code>, <code>CONTACTS_CREATED</code>,
   * <code>CONTACTS_HANDLED</code>,
   * <code>SUM_CONTACTS_DISCONNECTED</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricFilterV2">AWS
   * API Reference</a></p>
   */
  class MetricFilterV2
  {
  public:
    AWS_CONNECT_API MetricFilterV2() = default;
    AWS_CONNECT_API MetricFilterV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricFilterV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys: </p>
     * <ul> <li> <p>ANSWERING_MACHINE_DETECTION_STATUS</p> </li> <li>
     * <p>CASE_STATUS</p> </li> <li> <p>DISCONNECT_REASON</p> </li> <li>
     * <p>FLOWS_ACTION_IDENTIFIER</p> </li> <li> <p>FLOWS_NEXT_ACTION_IDENTIFIER</p>
     * </li> <li> <p>FLOWS_OUTCOME_TYPE</p> </li> <li> <p>FLOWS_RESOURCE_TYPE</p> </li>
     * <li> <p>INITIATION_METHOD</p> </li> </ul>
     */
    inline const Aws::String& GetMetricFilterKey() const { return m_metricFilterKey; }
    inline bool MetricFilterKeyHasBeenSet() const { return m_metricFilterKeyHasBeenSet; }
    template<typename MetricFilterKeyT = Aws::String>
    void SetMetricFilterKey(MetricFilterKeyT&& value) { m_metricFilterKeyHasBeenSet = true; m_metricFilterKey = std::forward<MetricFilterKeyT>(value); }
    template<typename MetricFilterKeyT = Aws::String>
    MetricFilterV2& WithMetricFilterKey(MetricFilterKeyT&& value) { SetMetricFilterKey(std::forward<MetricFilterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use for filtering data. Values for metric-level filters can be
     * either a fixed set of values or a customized list, depending on the use
     * case.</p> <p>For valid values of metric-level filters
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code>, and
     * <code>ANSWERING_MACHINE_DETECTION_STATUS</code>, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/ctr-data-model.html#ctr-ContactTraceRecord">ContactTraceRecord</a>
     * in the <i>Amazon Connect Administrator Guide</i>. </p> <p>For valid values of
     * the metric-level filter <code>FLOWS_OUTCOME_TYPE</code>, see the description for
     * the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#flows-outcome">Flow
     * outcome</a> metric in the <i>Amazon Connect Administrator Guide</i>.</p> <p>For
     * valid values of the metric-level filter
     * <code>BOT_CONVERSATION_OUTCOME_TYPE</code>, see the description for the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#bot-conversations-completed-metric">Bot
     * conversations completed</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p> <p>For valid values of the metric-level filter
     * <code>BOT_INTENT_OUTCOME_TYPE</code>, see the description for the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#bot-intents-completed-metric">Bot
     * intents completed</a> metric in the <i>Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricFilterValues() const { return m_metricFilterValues; }
    inline bool MetricFilterValuesHasBeenSet() const { return m_metricFilterValuesHasBeenSet; }
    template<typename MetricFilterValuesT = Aws::Vector<Aws::String>>
    void SetMetricFilterValues(MetricFilterValuesT&& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues = std::forward<MetricFilterValuesT>(value); }
    template<typename MetricFilterValuesT = Aws::Vector<Aws::String>>
    MetricFilterV2& WithMetricFilterValues(MetricFilterValuesT&& value) { SetMetricFilterValues(std::forward<MetricFilterValuesT>(value)); return *this;}
    template<typename MetricFilterValuesT = Aws::String>
    MetricFilterV2& AddMetricFilterValues(MetricFilterValuesT&& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues.emplace_back(std::forward<MetricFilterValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, the API response contains results that filter
     * out the results matched by the metric-level filters condition. By default,
     * <code>Negate</code> is set to <code>false</code>. </p>
     */
    inline bool GetNegate() const { return m_negate; }
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }
    inline MetricFilterV2& WithNegate(bool value) { SetNegate(value); return *this;}
    ///@}
  private:

    Aws::String m_metricFilterKey;
    bool m_metricFilterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricFilterValues;
    bool m_metricFilterValuesHasBeenSet = false;

    bool m_negate{false};
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
