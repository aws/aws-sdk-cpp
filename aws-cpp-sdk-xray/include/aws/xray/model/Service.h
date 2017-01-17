﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/ServiceStatistics.h>
#include <aws/xray/model/Edge.h>
#include <aws/xray/model/HistogramEntry.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about an application that processed requests, users that made
   * requests, or downstream services, resources and applications that an application
   * used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Service">AWS API
   * Reference</a></p>
   */
  class AWS_XRAY_API Service
  {
  public:
    Service();
    Service(const Aws::Utils::Json::JsonValue& jsonValue);
    Service& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline Service& WithReferenceId(int value) { SetReferenceId(value); return *this;}

    /**
     * <p>The canonical name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The canonical name of the service.</p>
     */
    inline Service& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The canonical name of the service.</p>
     */
    inline Service& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline Service& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline Service& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(value); return *this;}

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline Service& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline Service& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline Service& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>Indicates that the service was the first service to process a request.</p>
     */
    inline bool GetRoot() const{ return m_root; }

    /**
     * <p>Indicates that the service was the first service to process a request.</p>
     */
    inline void SetRoot(bool value) { m_rootHasBeenSet = true; m_root = value; }

    /**
     * <p>Indicates that the service was the first service to process a request.</p>
     */
    inline Service& WithRoot(bool value) { SetRoot(value); return *this;}

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline Service& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline Service& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>Identifier of the AWS account in which the service runs.</p>
     */
    inline Service& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline Service& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline Service& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of service.</p> <ul> <li> <p>AWS Resource - The type of an AWS
     * resource. For example, <code>AWS::EC2::Instance</code> for a application running
     * on Amazon EC2 or <code>AWS::DynamoDB::Table</code> for an Amazon DynamoDB table
     * that the application used.</p> </li> <li> <p>AWS Service - The type of an AWS
     * service. For example, <code>AWS::DynamoDB</code> for downstream calls to Amazon
     * DynamoDB that didn't target a specific table.</p> </li> <li> <p>
     * <code>client</code> - Represents the clients that sent requests to a root
     * service.</p> </li> <li> <p> <code>remote</code> - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline Service& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The service's state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The service's state.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The service's state.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The service's state.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The service's state.</p>
     */
    inline Service& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The service's state.</p>
     */
    inline Service& WithState(Aws::String&& value) { SetState(value); return *this;}

    /**
     * <p>The service's state.</p>
     */
    inline Service& WithState(const char* value) { SetState(value); return *this;}

    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline Service& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline Service& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline Service& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline Service& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>Connections to downstream services.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const{ return m_edges; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline void SetEdges(const Aws::Vector<Edge>& value) { m_edgesHasBeenSet = true; m_edges = value; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline void SetEdges(Aws::Vector<Edge>&& value) { m_edgesHasBeenSet = true; m_edges = value; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline Service& WithEdges(const Aws::Vector<Edge>& value) { SetEdges(value); return *this;}

    /**
     * <p>Connections to downstream services.</p>
     */
    inline Service& WithEdges(Aws::Vector<Edge>&& value) { SetEdges(value); return *this;}

    /**
     * <p>Connections to downstream services.</p>
     */
    inline Service& AddEdges(const Edge& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline Service& AddEdges(Edge&& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }

    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline const ServiceStatistics& GetSummaryStatistics() const{ return m_summaryStatistics; }

    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline void SetSummaryStatistics(const ServiceStatistics& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = value; }

    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline void SetSummaryStatistics(ServiceStatistics&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = value; }

    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline Service& WithSummaryStatistics(const ServiceStatistics& value) { SetSummaryStatistics(value); return *this;}

    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline Service& WithSummaryStatistics(ServiceStatistics&& value) { SetSummaryStatistics(value); return *this;}

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetDurationHistogram() const{ return m_durationHistogram; }

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline void SetDurationHistogram(const Aws::Vector<HistogramEntry>& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram = value; }

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline void SetDurationHistogram(Aws::Vector<HistogramEntry>&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram = value; }

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline Service& WithDurationHistogram(const Aws::Vector<HistogramEntry>& value) { SetDurationHistogram(value); return *this;}

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline Service& WithDurationHistogram(Aws::Vector<HistogramEntry>&& value) { SetDurationHistogram(value); return *this;}

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline Service& AddDurationHistogram(const HistogramEntry& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram.push_back(value); return *this; }

    /**
     * <p>Histogram mapping the spread of trace durations</p>
     */
    inline Service& AddDurationHistogram(HistogramEntry&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram.push_back(value); return *this; }

  private:
    int m_referenceId;
    bool m_referenceIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;
    bool m_root;
    bool m_rootHasBeenSet;
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet;
    ServiceStatistics m_summaryStatistics;
    bool m_summaryStatisticsHasBeenSet;
    Aws::Vector<HistogramEntry> m_durationHistogram;
    bool m_durationHistogramHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
