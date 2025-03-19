/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/PredictiveScalingPredefinedMetricPair.h>
#include <aws/autoscaling/model/PredictiveScalingPredefinedScalingMetric.h>
#include <aws/autoscaling/model/PredictiveScalingPredefinedLoadMetric.h>
#include <aws/autoscaling/model/PredictiveScalingCustomizedScalingMetric.h>
#include <aws/autoscaling/model/PredictiveScalingCustomizedLoadMetric.h>
#include <aws/autoscaling/model/PredictiveScalingCustomizedCapacityMetric.h>
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
   * <p>This structure specifies the metrics and target utilization settings for a
   * predictive scaling policy. </p> <p>You must specify either a metric pair, or a
   * load metric and a scaling metric individually. Specifying a metric pair instead
   * of individual metrics provides a simpler way to configure metrics for a scaling
   * policy. You choose the metric pair, and the policy automatically knows the
   * correct sum and average statistics to use for the load metric and the scaling
   * metric.</p> <p>Example</p> <ul> <li> <p>You create a predictive scaling policy
   * and specify <code>ALBRequestCount</code> as the value for the metric pair and
   * <code>1000.0</code> as the target value. For this type of metric, you must
   * provide the metric dimension for the corresponding target group, so you also
   * provide a resource label for the Application Load Balancer target group that is
   * attached to your Auto Scaling group.</p> </li> <li> <p>The number of requests
   * the target group receives per minute provides the load metric, and the request
   * count averaged between the members of the target group provides the scaling
   * metric. In CloudWatch, this refers to the <code>RequestCount</code> and
   * <code>RequestCountPerTarget</code> metrics, respectively.</p> </li> <li> <p>For
   * optimal use of predictive scaling, you adhere to the best practice of using a
   * dynamic scaling policy to automatically scale between the minimum capacity and
   * maximum capacity in response to real-time changes in resource utilization.</p>
   * </li> <li> <p>Amazon EC2 Auto Scaling consumes data points for the load metric
   * over the last 14 days and creates an hourly load forecast for predictive
   * scaling. (A minimum of 24 hours of data is required.)</p> </li> <li> <p>After
   * creating the load forecast, Amazon EC2 Auto Scaling determines when to reduce or
   * increase the capacity of your Auto Scaling group in each hour of the forecast
   * period so that the average number of requests received by each instance is as
   * close to 1000 requests per minute as possible at all times.</p> </li> </ul>
   * <p>For information about using custom metrics with predictive scaling, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/predictive-scaling-customized-metric-specification.html">Advanced
   * predictive scaling policy configurations using custom metrics</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredictiveScalingMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingMetricSpecification
  {
  public:
    AWS_AUTOSCALING_API PredictiveScalingMetricSpecification() = default;
    AWS_AUTOSCALING_API PredictiveScalingMetricSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredictiveScalingMetricSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the target utilization.</p>  <p>Some metrics are based on a
     * count instead of a percentage, such as the request count for an Application Load
     * Balancer or the number of messages in an SQS queue. If the scaling policy
     * specifies one of these metrics, specify the target utilization as the optimal
     * average request or message count per instance during any one-minute interval.
     * </p> 
     */
    inline double GetTargetValue() const { return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }
    inline PredictiveScalingMetricSpecification& WithTargetValue(double value) { SetTargetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predefined metric pair specification from which Amazon EC2 Auto Scaling
     * determines the appropriate scaling metric and load metric to use.</p>
     */
    inline const PredictiveScalingPredefinedMetricPair& GetPredefinedMetricPairSpecification() const { return m_predefinedMetricPairSpecification; }
    inline bool PredefinedMetricPairSpecificationHasBeenSet() const { return m_predefinedMetricPairSpecificationHasBeenSet; }
    template<typename PredefinedMetricPairSpecificationT = PredictiveScalingPredefinedMetricPair>
    void SetPredefinedMetricPairSpecification(PredefinedMetricPairSpecificationT&& value) { m_predefinedMetricPairSpecificationHasBeenSet = true; m_predefinedMetricPairSpecification = std::forward<PredefinedMetricPairSpecificationT>(value); }
    template<typename PredefinedMetricPairSpecificationT = PredictiveScalingPredefinedMetricPair>
    PredictiveScalingMetricSpecification& WithPredefinedMetricPairSpecification(PredefinedMetricPairSpecificationT&& value) { SetPredefinedMetricPairSpecification(std::forward<PredefinedMetricPairSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predefined scaling metric specification.</p>
     */
    inline const PredictiveScalingPredefinedScalingMetric& GetPredefinedScalingMetricSpecification() const { return m_predefinedScalingMetricSpecification; }
    inline bool PredefinedScalingMetricSpecificationHasBeenSet() const { return m_predefinedScalingMetricSpecificationHasBeenSet; }
    template<typename PredefinedScalingMetricSpecificationT = PredictiveScalingPredefinedScalingMetric>
    void SetPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecificationT&& value) { m_predefinedScalingMetricSpecificationHasBeenSet = true; m_predefinedScalingMetricSpecification = std::forward<PredefinedScalingMetricSpecificationT>(value); }
    template<typename PredefinedScalingMetricSpecificationT = PredictiveScalingPredefinedScalingMetric>
    PredictiveScalingMetricSpecification& WithPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecificationT&& value) { SetPredefinedScalingMetricSpecification(std::forward<PredefinedScalingMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predefined load metric specification.</p>
     */
    inline const PredictiveScalingPredefinedLoadMetric& GetPredefinedLoadMetricSpecification() const { return m_predefinedLoadMetricSpecification; }
    inline bool PredefinedLoadMetricSpecificationHasBeenSet() const { return m_predefinedLoadMetricSpecificationHasBeenSet; }
    template<typename PredefinedLoadMetricSpecificationT = PredictiveScalingPredefinedLoadMetric>
    void SetPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { m_predefinedLoadMetricSpecificationHasBeenSet = true; m_predefinedLoadMetricSpecification = std::forward<PredefinedLoadMetricSpecificationT>(value); }
    template<typename PredefinedLoadMetricSpecificationT = PredictiveScalingPredefinedLoadMetric>
    PredictiveScalingMetricSpecification& WithPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { SetPredefinedLoadMetricSpecification(std::forward<PredefinedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized scaling metric specification.</p>
     */
    inline const PredictiveScalingCustomizedScalingMetric& GetCustomizedScalingMetricSpecification() const { return m_customizedScalingMetricSpecification; }
    inline bool CustomizedScalingMetricSpecificationHasBeenSet() const { return m_customizedScalingMetricSpecificationHasBeenSet; }
    template<typename CustomizedScalingMetricSpecificationT = PredictiveScalingCustomizedScalingMetric>
    void SetCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecificationT&& value) { m_customizedScalingMetricSpecificationHasBeenSet = true; m_customizedScalingMetricSpecification = std::forward<CustomizedScalingMetricSpecificationT>(value); }
    template<typename CustomizedScalingMetricSpecificationT = PredictiveScalingCustomizedScalingMetric>
    PredictiveScalingMetricSpecification& WithCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecificationT&& value) { SetCustomizedScalingMetricSpecification(std::forward<CustomizedScalingMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized load metric specification.</p>
     */
    inline const PredictiveScalingCustomizedLoadMetric& GetCustomizedLoadMetricSpecification() const { return m_customizedLoadMetricSpecification; }
    inline bool CustomizedLoadMetricSpecificationHasBeenSet() const { return m_customizedLoadMetricSpecificationHasBeenSet; }
    template<typename CustomizedLoadMetricSpecificationT = PredictiveScalingCustomizedLoadMetric>
    void SetCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { m_customizedLoadMetricSpecificationHasBeenSet = true; m_customizedLoadMetricSpecification = std::forward<CustomizedLoadMetricSpecificationT>(value); }
    template<typename CustomizedLoadMetricSpecificationT = PredictiveScalingCustomizedLoadMetric>
    PredictiveScalingMetricSpecification& WithCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { SetCustomizedLoadMetricSpecification(std::forward<CustomizedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized capacity metric specification.</p>
     */
    inline const PredictiveScalingCustomizedCapacityMetric& GetCustomizedCapacityMetricSpecification() const { return m_customizedCapacityMetricSpecification; }
    inline bool CustomizedCapacityMetricSpecificationHasBeenSet() const { return m_customizedCapacityMetricSpecificationHasBeenSet; }
    template<typename CustomizedCapacityMetricSpecificationT = PredictiveScalingCustomizedCapacityMetric>
    void SetCustomizedCapacityMetricSpecification(CustomizedCapacityMetricSpecificationT&& value) { m_customizedCapacityMetricSpecificationHasBeenSet = true; m_customizedCapacityMetricSpecification = std::forward<CustomizedCapacityMetricSpecificationT>(value); }
    template<typename CustomizedCapacityMetricSpecificationT = PredictiveScalingCustomizedCapacityMetric>
    PredictiveScalingMetricSpecification& WithCustomizedCapacityMetricSpecification(CustomizedCapacityMetricSpecificationT&& value) { SetCustomizedCapacityMetricSpecification(std::forward<CustomizedCapacityMetricSpecificationT>(value)); return *this;}
    ///@}
  private:

    double m_targetValue{0.0};
    bool m_targetValueHasBeenSet = false;

    PredictiveScalingPredefinedMetricPair m_predefinedMetricPairSpecification;
    bool m_predefinedMetricPairSpecificationHasBeenSet = false;

    PredictiveScalingPredefinedScalingMetric m_predefinedScalingMetricSpecification;
    bool m_predefinedScalingMetricSpecificationHasBeenSet = false;

    PredictiveScalingPredefinedLoadMetric m_predefinedLoadMetricSpecification;
    bool m_predefinedLoadMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedScalingMetric m_customizedScalingMetricSpecification;
    bool m_customizedScalingMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedLoadMetric m_customizedLoadMetricSpecification;
    bool m_customizedLoadMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedCapacityMetric m_customizedCapacityMetricSpecification;
    bool m_customizedCapacityMetricSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
