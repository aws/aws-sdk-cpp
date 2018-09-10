﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StatusCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/MessageData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>A <code>GetMetricData</code> call returns an array of
   * <code>MetricDataResult</code> structures. Each of these structures includes the
   * data points for that metric, along with the time stamps of those data points and
   * other identifying information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDataResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API MetricDataResult
  {
  public:
    MetricDataResult();
    MetricDataResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDataResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline MetricDataResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline MetricDataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The short name you specified to represent this metric.</p>
     */
    inline MetricDataResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline MetricDataResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline MetricDataResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The human-readable label associated with the data.</p>
     */
    inline MetricDataResult& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline MetricDataResult& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline MetricDataResult& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline MetricDataResult& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }

    /**
     * <p>The time stamps for the data points, formatted in Unix timestamp format. The
     * number of time stamps always matches the number of values and the value for
     * Timestamps[x] is Values[x].</p>
     */
    inline MetricDataResult& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }


    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline MetricDataResult& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline MetricDataResult& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The data points for the metric corresponding to <code>Timestamps</code>. The
     * number of values always matches the number of time stamps and the time stamp for
     * Values[x] is Timestamps[x].</p>
     */
    inline MetricDataResult& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The status of the returned data. <code>Complete</code> indicates that all
     * data points in the requested time range were returned. <code>PartialData</code>
     * means that an incomplete set of data points were returned. You can use the
     * <code>NextToken</code> value that was returned and repeat your request to get
     * more data points. <code>NextToken</code> is not returned if you are performing a
     * math expression. <code>InternalError</code> indicates that an error occurred.
     * Retry your request using <code>NextToken</code>, if present.</p>
     */
    inline const StatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status of the returned data. <code>Complete</code> indicates that all
     * data points in the requested time range were returned. <code>PartialData</code>
     * means that an incomplete set of data points were returned. You can use the
     * <code>NextToken</code> value that was returned and repeat your request to get
     * more data points. <code>NextToken</code> is not returned if you are performing a
     * math expression. <code>InternalError</code> indicates that an error occurred.
     * Retry your request using <code>NextToken</code>, if present.</p>
     */
    inline void SetStatusCode(const StatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status of the returned data. <code>Complete</code> indicates that all
     * data points in the requested time range were returned. <code>PartialData</code>
     * means that an incomplete set of data points were returned. You can use the
     * <code>NextToken</code> value that was returned and repeat your request to get
     * more data points. <code>NextToken</code> is not returned if you are performing a
     * math expression. <code>InternalError</code> indicates that an error occurred.
     * Retry your request using <code>NextToken</code>, if present.</p>
     */
    inline void SetStatusCode(StatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status of the returned data. <code>Complete</code> indicates that all
     * data points in the requested time range were returned. <code>PartialData</code>
     * means that an incomplete set of data points were returned. You can use the
     * <code>NextToken</code> value that was returned and repeat your request to get
     * more data points. <code>NextToken</code> is not returned if you are performing a
     * math expression. <code>InternalError</code> indicates that an error occurred.
     * Retry your request using <code>NextToken</code>, if present.</p>
     */
    inline MetricDataResult& WithStatusCode(const StatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status of the returned data. <code>Complete</code> indicates that all
     * data points in the requested time range were returned. <code>PartialData</code>
     * means that an incomplete set of data points were returned. You can use the
     * <code>NextToken</code> value that was returned and repeat your request to get
     * more data points. <code>NextToken</code> is not returned if you are performing a
     * math expression. <code>InternalError</code> indicates that an error occurred.
     * Retry your request using <code>NextToken</code>, if present.</p>
     */
    inline MetricDataResult& WithStatusCode(StatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline const Aws::Vector<MessageData>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline void SetMessages(const Aws::Vector<MessageData>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline void SetMessages(Aws::Vector<MessageData>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline MetricDataResult& WithMessages(const Aws::Vector<MessageData>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline MetricDataResult& WithMessages(Aws::Vector<MessageData>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline MetricDataResult& AddMessages(const MessageData& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages with additional information about the data returned.</p>
     */
    inline MetricDataResult& AddMessages(MessageData&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet;

    StatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::Vector<MessageData> m_messages;
    bool m_messagesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
