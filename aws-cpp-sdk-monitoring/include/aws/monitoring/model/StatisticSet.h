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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Represents a set of statistics that describes a specific metric.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/StatisticSet">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API StatisticSet
  {
  public:
    StatisticSet();
    StatisticSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatisticSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of samples used for the statistic set.</p>
     */
    inline double GetSampleCount() const{ return m_sampleCount; }

    /**
     * <p>The number of samples used for the statistic set.</p>
     */
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }

    /**
     * <p>The number of samples used for the statistic set.</p>
     */
    inline void SetSampleCount(double value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }

    /**
     * <p>The number of samples used for the statistic set.</p>
     */
    inline StatisticSet& WithSampleCount(double value) { SetSampleCount(value); return *this;}


    /**
     * <p>The sum of values for the sample set.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of values for the sample set.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of values for the sample set.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of values for the sample set.</p>
     */
    inline StatisticSet& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The minimum value of the sample set.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value of the sample set.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum value of the sample set.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value of the sample set.</p>
     */
    inline StatisticSet& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The maximum value of the sample set.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value of the sample set.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum value of the sample set.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value of the sample set.</p>
     */
    inline StatisticSet& WithMaximum(double value) { SetMaximum(value); return *this;}

  private:

    double m_sampleCount;
    bool m_sampleCountHasBeenSet;

    double m_sum;
    bool m_sumHasBeenSet;

    double m_minimum;
    bool m_minimumHasBeenSet;

    double m_maximum;
    bool m_maximumHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
