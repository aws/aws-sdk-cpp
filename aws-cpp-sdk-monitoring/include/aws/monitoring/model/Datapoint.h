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
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StandardUnit.h>

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
   * <p> The <code>Datapoint</code> data type encapsulates the statistical data that
   * Amazon CloudWatch computes from metric data. </p>
   */
  class AWS_CLOUDWATCH_API Datapoint
  {
  public:
    Datapoint();
    Datapoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    Datapoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The time stamp used for the datapoint.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time stamp used for the datapoint.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp used for the datapoint.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp used for the datapoint.</p>
     */
    inline Datapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time stamp used for the datapoint.</p>
     */
    inline Datapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The number of metric values that contributed to the aggregate value of this
     * datapoint.</p>
     */
    inline double GetSampleCount() const{ return m_sampleCount; }

    /**
     * <p>The number of metric values that contributed to the aggregate value of this
     * datapoint.</p>
     */
    inline void SetSampleCount(double value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }

    /**
     * <p>The number of metric values that contributed to the aggregate value of this
     * datapoint.</p>
     */
    inline Datapoint& WithSampleCount(double value) { SetSampleCount(value); return *this;}

    /**
     * <p>The average of metric values that correspond to the datapoint.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average of metric values that correspond to the datapoint.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average of metric values that correspond to the datapoint.</p>
     */
    inline Datapoint& WithAverage(double value) { SetAverage(value); return *this;}

    /**
     * <p>The sum of metric values used for the datapoint.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of metric values used for the datapoint.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of metric values used for the datapoint.</p>
     */
    inline Datapoint& WithSum(double value) { SetSum(value); return *this;}

    /**
     * <p>The minimum metric value used for the datapoint.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum metric value used for the datapoint.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum metric value used for the datapoint.</p>
     */
    inline Datapoint& WithMinimum(double value) { SetMinimum(value); return *this;}

    /**
     * <p>The maximum of the metric value used for the datapoint.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum of the metric value used for the datapoint.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum of the metric value used for the datapoint.</p>
     */
    inline Datapoint& WithMaximum(double value) { SetMaximum(value); return *this;}

    /**
     * <p>The standard unit used for the datapoint.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The standard unit used for the datapoint.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The standard unit used for the datapoint.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The standard unit used for the datapoint.</p>
     */
    inline Datapoint& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The standard unit used for the datapoint.</p>
     */
    inline Datapoint& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

  private:
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    double m_sampleCount;
    bool m_sampleCountHasBeenSet;
    double m_average;
    bool m_averageHasBeenSet;
    double m_sum;
    bool m_sumHasBeenSet;
    double m_minimum;
    bool m_minimumHasBeenSet;
    double m_maximum;
    bool m_maximumHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
