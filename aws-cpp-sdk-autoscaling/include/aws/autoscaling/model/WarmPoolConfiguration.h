/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/WarmPoolState.h>
#include <aws/autoscaling/model/WarmPoolStatus.h>
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
   * <p>Describes a warm pool configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/WarmPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API WarmPoolConfiguration
  {
  public:
    WarmPoolConfiguration();
    WarmPoolConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    WarmPoolConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The total maximum number of instances that are allowed to be in the warm pool
     * or in any state except <code>Terminated</code> for the Auto Scaling group.</p>
     */
    inline int GetMaxGroupPreparedCapacity() const{ return m_maxGroupPreparedCapacity; }

    /**
     * <p>The total maximum number of instances that are allowed to be in the warm pool
     * or in any state except <code>Terminated</code> for the Auto Scaling group.</p>
     */
    inline bool MaxGroupPreparedCapacityHasBeenSet() const { return m_maxGroupPreparedCapacityHasBeenSet; }

    /**
     * <p>The total maximum number of instances that are allowed to be in the warm pool
     * or in any state except <code>Terminated</code> for the Auto Scaling group.</p>
     */
    inline void SetMaxGroupPreparedCapacity(int value) { m_maxGroupPreparedCapacityHasBeenSet = true; m_maxGroupPreparedCapacity = value; }

    /**
     * <p>The total maximum number of instances that are allowed to be in the warm pool
     * or in any state except <code>Terminated</code> for the Auto Scaling group.</p>
     */
    inline WarmPoolConfiguration& WithMaxGroupPreparedCapacity(int value) { SetMaxGroupPreparedCapacity(value); return *this;}


    /**
     * <p>The minimum number of instances to maintain in the warm pool.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum number of instances to maintain in the warm pool.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum number of instances to maintain in the warm pool.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum number of instances to maintain in the warm pool.</p>
     */
    inline WarmPoolConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline const WarmPoolState& GetPoolState() const{ return m_poolState; }

    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline bool PoolStateHasBeenSet() const { return m_poolStateHasBeenSet; }

    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline void SetPoolState(const WarmPoolState& value) { m_poolStateHasBeenSet = true; m_poolState = value; }

    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline void SetPoolState(WarmPoolState&& value) { m_poolStateHasBeenSet = true; m_poolState = std::move(value); }

    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline WarmPoolConfiguration& WithPoolState(const WarmPoolState& value) { SetPoolState(value); return *this;}

    /**
     * <p>The instance state to transition to after the lifecycle actions are complete:
     * <code>Stopped</code> or <code>Running</code>.</p>
     */
    inline WarmPoolConfiguration& WithPoolState(WarmPoolState&& value) { SetPoolState(std::move(value)); return *this;}


    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline const WarmPoolStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline void SetStatus(const WarmPoolStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline void SetStatus(WarmPoolStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline WarmPoolConfiguration& WithStatus(const WarmPoolStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline WarmPoolConfiguration& WithStatus(WarmPoolStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxGroupPreparedCapacity;
    bool m_maxGroupPreparedCapacityHasBeenSet;

    int m_minSize;
    bool m_minSizeHasBeenSet;

    WarmPoolState m_poolState;
    bool m_poolStateHasBeenSet;

    WarmPoolStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
