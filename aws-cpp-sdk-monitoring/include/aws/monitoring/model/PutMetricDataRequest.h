/*
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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Describes the inputs for PutMetricData.</p>
   */
  class AWS_CLOUDWATCH_API PutMetricDataRequest : public CloudWatchRequest
  {
  public:
    PutMetricDataRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline PutMetricDataRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline PutMetricDataRequest& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the metric data.</p> <note> <p>You cannot specify a
     * namespace that begins with "AWS/". Namespaces that begin with "AWS/" are
     * reserved for other Amazon Web Services products that send metrics to Amazon
     * CloudWatch.</p> </note>
     */
    inline PutMetricDataRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline PutMetricDataRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline PutMetricDataRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(value); return *this;}

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline PutMetricDataRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p>A list of data describing the metric.</p>
     */
    inline PutMetricDataRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

  private:
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
