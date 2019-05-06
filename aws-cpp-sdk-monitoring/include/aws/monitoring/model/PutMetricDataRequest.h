/*
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
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API PutMetricDataRequest : public CloudWatchRequest
  {
  public:
    PutMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricData"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline PutMetricDataRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline PutMetricDataRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace for the metric data.</p> <p>You cannot specify a namespace that
     * begins with "AWS/". Namespaces that begin with "AWS/" are reserved for use by
     * Amazon Web Services products.</p>
     */
    inline PutMetricDataRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p>The data for the metric. The array can include no more than 20 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
