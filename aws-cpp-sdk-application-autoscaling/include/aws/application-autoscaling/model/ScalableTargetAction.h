/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>

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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents the minimum and maximum capacity for a scheduled
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ScalableTargetAction">AWS
   * API Reference</a></p>
   */
  class ScalableTargetAction
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API ScalableTargetAction();
    AWS_APPLICATIONAUTOSCALING_API ScalableTargetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API ScalableTargetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum capacity.</p> <p>For certain resources, the minimum value allowed
     * is 0. This includes Lambda provisioned concurrency, Spot Fleet, ECS services,
     * Aurora DB clusters, EMR clusters, and custom resources. For all other resources,
     * the minimum value allowed is 1.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum capacity.</p> <p>For certain resources, the minimum value allowed
     * is 0. This includes Lambda provisioned concurrency, Spot Fleet, ECS services,
     * Aurora DB clusters, EMR clusters, and custom resources. For all other resources,
     * the minimum value allowed is 1.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum capacity.</p> <p>For certain resources, the minimum value allowed
     * is 0. This includes Lambda provisioned concurrency, Spot Fleet, ECS services,
     * Aurora DB clusters, EMR clusters, and custom resources. For all other resources,
     * the minimum value allowed is 1.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum capacity.</p> <p>For certain resources, the minimum value allowed
     * is 0. This includes Lambda provisioned concurrency, Spot Fleet, ECS services,
     * Aurora DB clusters, EMR clusters, and custom resources. For all other resources,
     * the minimum value allowed is 1.</p>
     */
    inline ScalableTargetAction& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum capacity.</p> <p>Although you can specify a large maximum
     * capacity, note that service quotas may impose lower limits. Each service has its
     * own default quotas for the maximum capacity of the resource. If you want to
     * specify a higher limit, you can request an increase. For more information,
     * consult the documentation for that service. For information about the default
     * quotas for each service, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-service-information.html">Service
     * Endpoints and Quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum capacity.</p> <p>Although you can specify a large maximum
     * capacity, note that service quotas may impose lower limits. Each service has its
     * own default quotas for the maximum capacity of the resource. If you want to
     * specify a higher limit, you can request an increase. For more information,
     * consult the documentation for that service. For information about the default
     * quotas for each service, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-service-information.html">Service
     * Endpoints and Quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum capacity.</p> <p>Although you can specify a large maximum
     * capacity, note that service quotas may impose lower limits. Each service has its
     * own default quotas for the maximum capacity of the resource. If you want to
     * specify a higher limit, you can request an increase. For more information,
     * consult the documentation for that service. For information about the default
     * quotas for each service, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-service-information.html">Service
     * Endpoints and Quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum capacity.</p> <p>Although you can specify a large maximum
     * capacity, note that service quotas may impose lower limits. Each service has its
     * own default quotas for the maximum capacity of the resource. If you want to
     * specify a higher limit, you can request an increase. For more information,
     * consult the documentation for that service. For information about the default
     * quotas for each service, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-service-information.html">Service
     * Endpoints and Quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline ScalableTargetAction& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}

  private:

    int m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
