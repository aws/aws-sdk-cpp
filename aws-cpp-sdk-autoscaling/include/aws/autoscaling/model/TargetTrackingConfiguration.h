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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/PredefinedMetricSpecification.h>
#include <aws/autoscaling/model/CustomizedMetricSpecification.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Represents a target tracking scaling policy configuration to use with Amazon
   * EC2 Auto Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TargetTrackingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API TargetTrackingConfiguration
  {
  public:
    TargetTrackingConfiguration();
    TargetTrackingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetTrackingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const PredefinedMetricSpecification& GetPredefinedMetricSpecification() const{ return m_predefinedMetricSpecification; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool PredefinedMetricSpecificationHasBeenSet() const { return m_predefinedMetricSpecificationHasBeenSet; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = value; }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = std::move(value); }

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { SetPredefinedMetricSpecification(value); return *this;}

    /**
     * <p>A predefined metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { SetPredefinedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const CustomizedMetricSpecification& GetCustomizedMetricSpecification() const{ return m_customizedMetricSpecification; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool CustomizedMetricSpecificationHasBeenSet() const { return m_customizedMetricSpecificationHasBeenSet; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = value; }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = std::move(value); }

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { SetCustomizedMetricSpecification(value); return *this;}

    /**
     * <p>A customized metric. You can specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { SetCustomizedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The target value for the metric.</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The target value for the metric.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The target value for the metric.</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The target value for the metric.</p>
     */
    inline TargetTrackingConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}


    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * disabled.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * disabled.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * disabled.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * disabled.</p>
     */
    inline TargetTrackingConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}

  private:

    PredefinedMetricSpecification m_predefinedMetricSpecification;
    bool m_predefinedMetricSpecificationHasBeenSet;

    CustomizedMetricSpecification m_customizedMetricSpecification;
    bool m_customizedMetricSpecificationHasBeenSet;

    double m_targetValue;
    bool m_targetValueHasBeenSet;

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
