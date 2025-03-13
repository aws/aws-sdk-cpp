/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/WarmPoolState.h>
#include <aws/autoscaling/model/WarmPoolStatus.h>
#include <aws/autoscaling/model/InstanceReusePolicy.h>
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
  class WarmPoolConfiguration
  {
  public:
    AWS_AUTOSCALING_API WarmPoolConfiguration() = default;
    AWS_AUTOSCALING_API WarmPoolConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API WarmPoolConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum number of instances that are allowed to be in the warm pool or in
     * any state except <code>Terminated</code> for the Auto Scaling group.</p>
     */
    inline int GetMaxGroupPreparedCapacity() const { return m_maxGroupPreparedCapacity; }
    inline bool MaxGroupPreparedCapacityHasBeenSet() const { return m_maxGroupPreparedCapacityHasBeenSet; }
    inline void SetMaxGroupPreparedCapacity(int value) { m_maxGroupPreparedCapacityHasBeenSet = true; m_maxGroupPreparedCapacity = value; }
    inline WarmPoolConfiguration& WithMaxGroupPreparedCapacity(int value) { SetMaxGroupPreparedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances to maintain in the warm pool.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline WarmPoolConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance state to transition to after the lifecycle actions are
     * complete.</p>
     */
    inline WarmPoolState GetPoolState() const { return m_poolState; }
    inline bool PoolStateHasBeenSet() const { return m_poolStateHasBeenSet; }
    inline void SetPoolState(WarmPoolState value) { m_poolStateHasBeenSet = true; m_poolState = value; }
    inline WarmPoolConfiguration& WithPoolState(WarmPoolState value) { SetPoolState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a warm pool that is marked for deletion.</p>
     */
    inline WarmPoolStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WarmPoolStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WarmPoolConfiguration& WithStatus(WarmPoolStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance reuse policy.</p>
     */
    inline const InstanceReusePolicy& GetInstanceReusePolicy() const { return m_instanceReusePolicy; }
    inline bool InstanceReusePolicyHasBeenSet() const { return m_instanceReusePolicyHasBeenSet; }
    template<typename InstanceReusePolicyT = InstanceReusePolicy>
    void SetInstanceReusePolicy(InstanceReusePolicyT&& value) { m_instanceReusePolicyHasBeenSet = true; m_instanceReusePolicy = std::forward<InstanceReusePolicyT>(value); }
    template<typename InstanceReusePolicyT = InstanceReusePolicy>
    WarmPoolConfiguration& WithInstanceReusePolicy(InstanceReusePolicyT&& value) { SetInstanceReusePolicy(std::forward<InstanceReusePolicyT>(value)); return *this;}
    ///@}
  private:

    int m_maxGroupPreparedCapacity{0};
    bool m_maxGroupPreparedCapacityHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    WarmPoolState m_poolState{WarmPoolState::NOT_SET};
    bool m_poolStateHasBeenSet = false;

    WarmPoolStatus m_status{WarmPoolStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    InstanceReusePolicy m_instanceReusePolicy;
    bool m_instanceReusePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
