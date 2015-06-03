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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_AUTOSCALING_API StepAdjustment
  {
  public:
    StepAdjustment();
    StepAdjustment(const Aws::Utils::Xml::XmlNode& xmlNode);
    StepAdjustment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline double GetMetricIntervalLowerBound() const{ return m_metricIntervalLowerBound; }
    
    inline void SetMetricIntervalLowerBound(double value) { m_metricIntervalLowerBoundHasBeenSet = true; m_metricIntervalLowerBound = value; }

    
    inline StepAdjustment&  WithMetricIntervalLowerBound(double value) { SetMetricIntervalLowerBound(value); return *this;}

    
    inline double GetMetricIntervalUpperBound() const{ return m_metricIntervalUpperBound; }
    
    inline void SetMetricIntervalUpperBound(double value) { m_metricIntervalUpperBoundHasBeenSet = true; m_metricIntervalUpperBound = value; }

    
    inline StepAdjustment&  WithMetricIntervalUpperBound(double value) { SetMetricIntervalUpperBound(value); return *this;}

    
    inline long GetScalingAdjustment() const{ return m_scalingAdjustment; }
    
    inline void SetScalingAdjustment(long value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    
    inline StepAdjustment&  WithScalingAdjustment(long value) { SetScalingAdjustment(value); return *this;}

  private:
    double m_metricIntervalLowerBound;
    bool m_metricIntervalLowerBoundHasBeenSet;
    double m_metricIntervalUpperBound;
    bool m_metricIntervalUpperBoundHasBeenSet;
    long m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
