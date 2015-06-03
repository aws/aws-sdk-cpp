/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>

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
  /*
    <p> The <code>MetricDatum</code> data type encapsulates the information sent with <a>PutMetricData</a> to either create a new metric or add new values to be aggregated into an existing metric. </p>
  */
  class AWS_CLOUDWATCH_API MetricDatum
  {
  public:
    MetricDatum();
    MetricDatum(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDatum& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> The name of the metric. </p>
    */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    /*
     <p> The name of the metric. </p>
    */
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }

    /*
     <p> The name of the metric. </p>
    */
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }

    /*
     <p> The name of the metric. </p>
    */
    inline MetricDatum&  WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /*
     <p> The name of the metric. </p>
    */
    inline MetricDatum& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /*
     <p> A list of dimensions associated with the metric. Note, when using the Dimensions value in a query, you need to append .member.N to it (e.g., Dimensions.member.N). </p>
    */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    /*
     <p> A list of dimensions associated with the metric. Note, when using the Dimensions value in a query, you need to append .member.N to it (e.g., Dimensions.member.N). </p>
    */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /*
     <p> A list of dimensions associated with the metric. Note, when using the Dimensions value in a query, you need to append .member.N to it (e.g., Dimensions.member.N). </p>
    */
    inline MetricDatum&  WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /*
     <p> A list of dimensions associated with the metric. Note, when using the Dimensions value in a query, you need to append .member.N to it (e.g., Dimensions.member.N). </p>
    */
    inline MetricDatum& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /*
     <p> The time stamp used for the metric. If not specified, the default value is set to the time the metric data was received. Amazon CloudWatch uses Coordinated Universal Time (UTC) when returning time stamps, which do not accommodate seasonal adjustments such as daylight savings time. For more information, see <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Time stamps</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p>
    */
    inline double GetTimestamp() const{ return m_timestamp; }
    /*
     <p> The time stamp used for the metric. If not specified, the default value is set to the time the metric data was received. Amazon CloudWatch uses Coordinated Universal Time (UTC) when returning time stamps, which do not accommodate seasonal adjustments such as daylight savings time. For more information, see <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Time stamps</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p>
    */
    inline void SetTimestamp(double value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /*
     <p> The time stamp used for the metric. If not specified, the default value is set to the time the metric data was received. Amazon CloudWatch uses Coordinated Universal Time (UTC) when returning time stamps, which do not accommodate seasonal adjustments such as daylight savings time. For more information, see <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Time stamps</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p>
    */
    inline MetricDatum&  WithTimestamp(double value) { SetTimestamp(value); return *this;}

    /*
     <p> The value for the metric. </p> <important>Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch truncates values with very large exponents. Values with base-10 exponents greater than 126 (1 x 10^126) are truncated. Likewise, values with base-10 exponents less than -130 (1 x 10^-130) are also truncated. </important>
    */
    inline double GetValue() const{ return m_value; }
    /*
     <p> The value for the metric. </p> <important>Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch truncates values with very large exponents. Values with base-10 exponents greater than 126 (1 x 10^126) are truncated. Likewise, values with base-10 exponents less than -130 (1 x 10^-130) are also truncated. </important>
    */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /*
     <p> The value for the metric. </p> <important>Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch truncates values with very large exponents. Values with base-10 exponents greater than 126 (1 x 10^126) are truncated. Likewise, values with base-10 exponents less than -130 (1 x 10^-130) are also truncated. </important>
    */
    inline MetricDatum&  WithValue(double value) { SetValue(value); return *this;}

    /*
     <p> A set of statistical values describing the metric. </p>
    */
    inline const StatisticSet& GetStatisticValues() const{ return m_statisticValues; }
    /*
     <p> A set of statistical values describing the metric. </p>
    */
    inline void SetStatisticValues(const StatisticSet& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }

    /*
     <p> A set of statistical values describing the metric. </p>
    */
    inline MetricDatum&  WithStatisticValues(const StatisticSet& value) { SetStatisticValues(value); return *this;}

    /*
     <p> The unit of the metric. </p>
    */
    inline const StandardUnit& GetUnit() const{ return m_unit; }
    /*
     <p> The unit of the metric. </p>
    */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /*
     <p> The unit of the metric. </p>
    */
    inline MetricDatum&  WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

  private:
    Aws::String m_metricName;
    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
    double m_timestamp;
    bool m_timestampHasBeenSet;
    double m_value;
    bool m_valueHasBeenSet;
    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
