/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HistoricalMetricName.h>
#include <aws/connect/model/Threshold.h>
#include <aws/connect/model/Statistic.h>
#include <aws/connect/model/Unit.h>
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
   * <p>Contains information about a historical metric. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetric">AWS
   * API Reference</a></p>
   */
  class HistoricalMetric
  {
  public:
    AWS_CONNECT_API HistoricalMetric() = default;
    AWS_CONNECT_API HistoricalMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric. Following is a list of each supported metric mapped
     * to the UI name, linked to a detailed description in the <i>Amazon Connect
     * Administrator Guide</i>. </p> <dl> <dt>ABANDON_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-abandon-time">Average
     * queue abandon time</a> </p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#after-contact-work-time">After
     * contact work time</a> </p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#api-contacts-handled">API
     * contacts handled</a> </p> </dd> <dt>AVG_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-hold-time">Average
     * customer hold time</a> </p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#callback-contacts-handled">Callback
     * contacts handled</a> </p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-abandoned">Contacts
     * abandoned</a> </p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-agent-hung-up-first">Contacts
     * agent hung up first</a> </p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-consulted">Contacts
     * consulted</a> </p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled">Contacts
     * handled</a> </p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled-incoming">Contacts
     * handled incoming</a> </p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled-outbound">Contacts
     * handled outbound</a> </p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-hold-disconnect">Contacts
     * hold disconnect</a> </p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-non-response">AGENT_NON_RESPONSE</a>
     * </p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-queued">Contacts
     * queued</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-in">Contacts
     * transferred in</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-queue">Contacts
     * transferred out queue</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out">Contacts
     * transferred out</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-queue">Contacts
     * transferred out queue</a> </p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-handle-time">Average
     * handle time</a> </p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interaction-and-customer-hold-time">Average
     * agent interaction and customer hold time</a> </p> </dd>
     * <dt>INTERACTION_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#aaverage-agent-interaction-time">Average
     * agent interaction time</a> </p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#occupancy">Occupancy</a>
     * </p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic:
     * AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html##average-queue-answer-time">Average
     * queue answer time</a> </p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: MAX</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#minimum-flow-time">Minimum
     * flow time</a> </p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can include up to 20
     * SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p> <p>Statistic:
     * AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any whole number
     * from 1 to 604800 (inclusive), in seconds. For <code>Comparison</code>, you must
     * enter <code>LT</code> (for "Less than"). </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#service-level">Service
     * level X</a> </p> </dd> </dl>
     */
    inline HistoricalMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(HistoricalMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline HistoricalMetric& WithName(HistoricalMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline const Threshold& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Threshold>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Threshold>
    HistoricalMetric& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline HistoricalMetric& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline HistoricalMetric& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}
  private:

    HistoricalMetricName m_name{HistoricalMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;

    Statistic m_statistic{Statistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
