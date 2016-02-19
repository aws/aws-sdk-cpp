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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>

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

  class AWS_CLOUDWATCH_API MetricDataBatch
  {
  public:
    MetricDataBatch();
    MetricDataBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDataBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline MetricDataBatch& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline MetricDataBatch& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline MetricDataBatch& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    
    inline MetricDataBatch& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    
    inline MetricDataBatch& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    
    inline MetricDataBatch& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    
    inline MetricDataBatch& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    
    inline MetricDataBatch& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(value); return *this;}

    
    inline MetricDataBatch& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    
    inline MetricDataBatch& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    
    inline bool GetAutoDecompose() const{ return m_autoDecompose; }

    
    inline void SetAutoDecompose(bool value) { m_autoDecomposeHasBeenSet = true; m_autoDecompose = value; }

    
    inline MetricDataBatch& WithAutoDecompose(bool value) { SetAutoDecompose(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet;
    bool m_autoDecompose;
    bool m_autoDecomposeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
