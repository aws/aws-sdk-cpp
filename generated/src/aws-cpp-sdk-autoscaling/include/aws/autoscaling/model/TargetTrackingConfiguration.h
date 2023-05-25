/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TargetTrackingConfiguration
  {
  public:
    AWS_AUTOSCALING_API TargetTrackingConfiguration();
    AWS_AUTOSCALING_API TargetTrackingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TargetTrackingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const PredefinedMetricSpecification& GetPredefinedMetricSpecification() const{ return m_predefinedMetricSpecification; }

    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool PredefinedMetricSpecificationHasBeenSet() const { return m_predefinedMetricSpecificationHasBeenSet; }

    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = value; }

    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { m_predefinedMetricSpecificationHasBeenSet = true; m_predefinedMetricSpecification = std::move(value); }

    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedMetricSpecification(const PredefinedMetricSpecification& value) { SetPredefinedMetricSpecification(value); return *this;}

    /**
     * <p>A predefined metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithPredefinedMetricSpecification(PredefinedMetricSpecification&& value) { SetPredefinedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline const CustomizedMetricSpecification& GetCustomizedMetricSpecification() const{ return m_customizedMetricSpecification; }

    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline bool CustomizedMetricSpecificationHasBeenSet() const { return m_customizedMetricSpecificationHasBeenSet; }

    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = value; }

    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline void SetCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { m_customizedMetricSpecificationHasBeenSet = true; m_customizedMetricSpecification = std::move(value); }

    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithCustomizedMetricSpecification(const CustomizedMetricSpecification& value) { SetCustomizedMetricSpecification(value); return *this;}

    /**
     * <p>A customized metric. You must specify either a predefined metric or a
     * customized metric.</p>
     */
    inline TargetTrackingConfiguration& WithCustomizedMetricSpecification(CustomizedMetricSpecification&& value) { SetCustomizedMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The target value for the metric.</p>  <p>Some metrics are based on a
     * count instead of a percentage, such as the request count for an Application Load
     * Balancer or the number of messages in an SQS queue. If the scaling policy
     * specifies one of these metrics, specify the target utilization as the optimal
     * average request or message count per instance during any one-minute interval.
     * </p> 
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The target value for the metric.</p>  <p>Some metrics are based on a
     * count instead of a percentage, such as the request count for an Application Load
     * Balancer or the number of messages in an SQS queue. If the scaling policy
     * specifies one of these metrics, specify the target utilization as the optimal
     * average request or message count per instance during any one-minute interval.
     * </p> 
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The target value for the metric.</p>  <p>Some metrics are based on a
     * count instead of a percentage, such as the request count for an Application Load
     * Balancer or the number of messages in an SQS queue. If the scaling policy
     * specifies one of these metrics, specify the target utilization as the optimal
     * average request or message count per instance during any one-minute interval.
     * </p> 
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The target value for the metric.</p>  <p>Some metrics are based on a
     * count instead of a percentage, such as the request count for an Application Load
     * Balancer or the number of messages in an SQS queue. If the scaling policy
     * specifies one of these metrics, specify the target utilization as the optimal
     * average request or message count per instance during any one-minute interval.
     * </p> 
     */
    inline TargetTrackingConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}


    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * <code>false</code>.</p>
     */
    inline bool GetDisableScaleIn() const{ return m_disableScaleIn; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * <code>false</code>.</p>
     */
    inline bool DisableScaleInHasBeenSet() const { return m_disableScaleInHasBeenSet; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * <code>false</code>.</p>
     */
    inline void SetDisableScaleIn(bool value) { m_disableScaleInHasBeenSet = true; m_disableScaleIn = value; }

    /**
     * <p>Indicates whether scaling in by the target tracking scaling policy is
     * disabled. If scaling in is disabled, the target tracking scaling policy doesn't
     * remove instances from the Auto Scaling group. Otherwise, the target tracking
     * scaling policy can remove instances from the Auto Scaling group. The default is
     * <code>false</code>.</p>
     */
    inline TargetTrackingConfiguration& WithDisableScaleIn(bool value) { SetDisableScaleIn(value); return *this;}

  private:

    PredefinedMetricSpecification m_predefinedMetricSpecification;
    bool m_predefinedMetricSpecificationHasBeenSet = false;

    CustomizedMetricSpecification m_customizedMetricSpecification;
    bool m_customizedMetricSpecificationHasBeenSet = false;

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;

    bool m_disableScaleIn;
    bool m_disableScaleInHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
