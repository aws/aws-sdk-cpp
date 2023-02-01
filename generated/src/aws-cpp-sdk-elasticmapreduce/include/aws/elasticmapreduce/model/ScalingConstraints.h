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
   * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
   * Automatic scaling activities triggered by automatic scaling rules will not cause
   * an instance group to grow above or below these limits.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScalingConstraints">AWS
   * API Reference</a></p>
   */
  class ScalingConstraints
  {
  public:
    AWS_EMR_API ScalingConstraints();
    AWS_EMR_API ScalingConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScalingConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lower boundary of EC2 instances in an instance group below which scaling
     * activities are not allowed to shrink. Scale-in activities will not terminate
     * instances below this boundary.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The lower boundary of EC2 instances in an instance group below which scaling
     * activities are not allowed to shrink. Scale-in activities will not terminate
     * instances below this boundary.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The lower boundary of EC2 instances in an instance group below which scaling
     * activities are not allowed to shrink. Scale-in activities will not terminate
     * instances below this boundary.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The lower boundary of EC2 instances in an instance group below which scaling
     * activities are not allowed to shrink. Scale-in activities will not terminate
     * instances below this boundary.</p>
     */
    inline ScalingConstraints& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The upper boundary of EC2 instances in an instance group beyond which scaling
     * activities are not allowed to grow. Scale-out activities will not add instances
     * beyond this boundary.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The upper boundary of EC2 instances in an instance group beyond which scaling
     * activities are not allowed to grow. Scale-out activities will not add instances
     * beyond this boundary.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The upper boundary of EC2 instances in an instance group beyond which scaling
     * activities are not allowed to grow. Scale-out activities will not add instances
     * beyond this boundary.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The upper boundary of EC2 instances in an instance group beyond which scaling
     * activities are not allowed to grow. Scale-out activities will not add instances
     * beyond this boundary.</p>
     */
    inline ScalingConstraints& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}

  private:

    int m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
