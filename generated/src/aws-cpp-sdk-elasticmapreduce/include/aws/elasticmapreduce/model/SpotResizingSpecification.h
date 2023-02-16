/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>The resize specification for Spot Instances in the instance fleet, which
   * contains the resize timeout period. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SpotResizingSpecification">AWS
   * API Reference</a></p>
   */
  class SpotResizingSpecification
  {
  public:
    AWS_EMR_API SpotResizingSpecification();
    AWS_EMR_API SpotResizingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SpotResizingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Spot resize timeout in minutes. If Spot Instances are not provisioned within
     * this time, the resize workflow will stop provisioning of Spot instances. Minimum
     * value is 5 minutes and maximum value is 10,080 minutes (7 days). The timeout
     * applies to all resize workflows on the Instance Fleet. The resize could be
     * triggered by Amazon EMR Managed Scaling or by the customer (via Amazon EMR
     * Console, Amazon EMR CLI modify-instance-fleet or Amazon EMR SDK
     * ModifyInstanceFleet API) or by Amazon EMR due to Amazon EC2 Spot
     * Reclamation.</p>
     */
    inline int GetTimeoutDurationMinutes() const{ return m_timeoutDurationMinutes; }

    /**
     * <p>Spot resize timeout in minutes. If Spot Instances are not provisioned within
     * this time, the resize workflow will stop provisioning of Spot instances. Minimum
     * value is 5 minutes and maximum value is 10,080 minutes (7 days). The timeout
     * applies to all resize workflows on the Instance Fleet. The resize could be
     * triggered by Amazon EMR Managed Scaling or by the customer (via Amazon EMR
     * Console, Amazon EMR CLI modify-instance-fleet or Amazon EMR SDK
     * ModifyInstanceFleet API) or by Amazon EMR due to Amazon EC2 Spot
     * Reclamation.</p>
     */
    inline bool TimeoutDurationMinutesHasBeenSet() const { return m_timeoutDurationMinutesHasBeenSet; }

    /**
     * <p>Spot resize timeout in minutes. If Spot Instances are not provisioned within
     * this time, the resize workflow will stop provisioning of Spot instances. Minimum
     * value is 5 minutes and maximum value is 10,080 minutes (7 days). The timeout
     * applies to all resize workflows on the Instance Fleet. The resize could be
     * triggered by Amazon EMR Managed Scaling or by the customer (via Amazon EMR
     * Console, Amazon EMR CLI modify-instance-fleet or Amazon EMR SDK
     * ModifyInstanceFleet API) or by Amazon EMR due to Amazon EC2 Spot
     * Reclamation.</p>
     */
    inline void SetTimeoutDurationMinutes(int value) { m_timeoutDurationMinutesHasBeenSet = true; m_timeoutDurationMinutes = value; }

    /**
     * <p>Spot resize timeout in minutes. If Spot Instances are not provisioned within
     * this time, the resize workflow will stop provisioning of Spot instances. Minimum
     * value is 5 minutes and maximum value is 10,080 minutes (7 days). The timeout
     * applies to all resize workflows on the Instance Fleet. The resize could be
     * triggered by Amazon EMR Managed Scaling or by the customer (via Amazon EMR
     * Console, Amazon EMR CLI modify-instance-fleet or Amazon EMR SDK
     * ModifyInstanceFleet API) or by Amazon EMR due to Amazon EC2 Spot
     * Reclamation.</p>
     */
    inline SpotResizingSpecification& WithTimeoutDurationMinutes(int value) { SetTimeoutDurationMinutes(value); return *this;}

  private:

    int m_timeoutDurationMinutes;
    bool m_timeoutDurationMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
