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
    AWS_CONNECT_API MetricFilterV2();
    AWS_CONNECT_API MetricFilterV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricFilterV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline const Aws::String& GetMetricFilterKey() const{ return m_metricFilterKey; }

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline bool MetricFilterKeyHasBeenSet() const { return m_metricFilterKeyHasBeenSet; }

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline void SetMetricFilterKey(const Aws::String& value) { m_metricFilterKeyHasBeenSet = true; m_metricFilterKey = value; }

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline void SetMetricFilterKey(Aws::String&& value) { m_metricFilterKeyHasBeenSet = true; m_metricFilterKey = std::move(value); }

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline void SetMetricFilterKey(const char* value) { m_metricFilterKeyHasBeenSet = true; m_metricFilterKey.assign(value); }

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline MetricFilterV2& WithMetricFilterKey(const Aws::String& value) { SetMetricFilterKey(value); return *this;}

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline MetricFilterV2& WithMetricFilterKey(Aws::String&& value) { SetMetricFilterKey(std::move(value)); return *this;}

    /**
     * <p>The key to use for filtering data. </p> <p>Valid metric filter keys:
     * <code>INITIATION_METHOD</code>, <code>DISCONNECT_REASON</code> </p>
     */
    inline MetricFilterV2& WithMetricFilterKey(const char* value) { SetMetricFilterKey(value); return *this;}


    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricFilterValues() const{ return m_metricFilterValues; }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline bool MetricFilterValuesHasBeenSet() const { return m_metricFilterValuesHasBeenSet; }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline void SetMetricFilterValues(const Aws::Vector<Aws::String>& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues = value; }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline void SetMetricFilterValues(Aws::Vector<Aws::String>&& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues = std::move(value); }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline MetricFilterV2& WithMetricFilterValues(const Aws::Vector<Aws::String>& value) { SetMetricFilterValues(value); return *this;}

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline MetricFilterV2& WithMetricFilterValues(Aws::Vector<Aws::String>&& value) { SetMetricFilterValues(std::move(value)); return *this;}

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline MetricFilterV2& AddMetricFilterValues(const Aws::String& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues.push_back(value); return *this; }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline MetricFilterV2& AddMetricFilterValues(Aws::String&& value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The values to use for filtering data. </p> <p>Valid metric filter values for
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>TRANSFER</code> | <code>QUEUE_TRANSFER</code> | <code>CALLBACK</code> |
     * <code>API</code> </p> <p>Valid metric filter values for
     * <code>DISCONNECT_REASON</code>: <code>CUSTOMER_DISCONNECT</code> |
     * <code>AGENT_DISCONNECT</code> | <code>THIRD_PARTY_DISCONNECT</code> |
     * <code>TELECOM_PROBLEM</code> | <code>BARGED</code> |
     * <code>CONTACT_FLOW_DISCONNECT</code> | <code>OTHER</code> | <code>EXPIRED</code>
     * | <code>API</code> </p>
     */
    inline MetricFilterV2& AddMetricFilterValues(const char* value) { m_metricFilterValuesHasBeenSet = true; m_metricFilterValues.push_back(value); return *this; }

  private:

    Aws::String m_metricFilterKey;
    bool m_metricFilterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricFilterValues;
    bool m_metricFilterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
