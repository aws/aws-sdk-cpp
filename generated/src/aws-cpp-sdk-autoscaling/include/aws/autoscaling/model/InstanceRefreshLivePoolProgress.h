/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>Reports the progress of an instance refresh on instances that are in the Auto
   * Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceRefreshLivePoolProgress">AWS
   * API Reference</a></p>
   */
  class InstanceRefreshLivePoolProgress
  {
  public:
    AWS_AUTOSCALING_API InstanceRefreshLivePoolProgress();
    AWS_AUTOSCALING_API InstanceRefreshLivePoolProgress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceRefreshLivePoolProgress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The percentage of instances in the Auto Scaling group that have been
     * replaced. For each instance replacement, Amazon EC2 Auto Scaling tracks the
     * instance's health status and warm-up time. When the instance's health status
     * changes to healthy and the specified warm-up time passes, the instance is
     * considered updated and is added to the percentage complete.</p>
     */
    inline int GetPercentageComplete() const{ return m_percentageComplete; }

    /**
     * <p>The percentage of instances in the Auto Scaling group that have been
     * replaced. For each instance replacement, Amazon EC2 Auto Scaling tracks the
     * instance's health status and warm-up time. When the instance's health status
     * changes to healthy and the specified warm-up time passes, the instance is
     * considered updated and is added to the percentage complete.</p>
     */
    inline bool PercentageCompleteHasBeenSet() const { return m_percentageCompleteHasBeenSet; }

    /**
     * <p>The percentage of instances in the Auto Scaling group that have been
     * replaced. For each instance replacement, Amazon EC2 Auto Scaling tracks the
     * instance's health status and warm-up time. When the instance's health status
     * changes to healthy and the specified warm-up time passes, the instance is
     * considered updated and is added to the percentage complete.</p>
     */
    inline void SetPercentageComplete(int value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }

    /**
     * <p>The percentage of instances in the Auto Scaling group that have been
     * replaced. For each instance replacement, Amazon EC2 Auto Scaling tracks the
     * instance's health status and warm-up time. When the instance's health status
     * changes to healthy and the specified warm-up time passes, the instance is
     * considered updated and is added to the percentage complete.</p>
     */
    inline InstanceRefreshLivePoolProgress& WithPercentageComplete(int value) { SetPercentageComplete(value); return *this;}


    /**
     * <p>The number of instances remaining to update.</p>
     */
    inline int GetInstancesToUpdate() const{ return m_instancesToUpdate; }

    /**
     * <p>The number of instances remaining to update.</p>
     */
    inline bool InstancesToUpdateHasBeenSet() const { return m_instancesToUpdateHasBeenSet; }

    /**
     * <p>The number of instances remaining to update.</p>
     */
    inline void SetInstancesToUpdate(int value) { m_instancesToUpdateHasBeenSet = true; m_instancesToUpdate = value; }

    /**
     * <p>The number of instances remaining to update.</p>
     */
    inline InstanceRefreshLivePoolProgress& WithInstancesToUpdate(int value) { SetInstancesToUpdate(value); return *this;}

  private:

    int m_percentageComplete;
    bool m_percentageCompleteHasBeenSet = false;

    int m_instancesToUpdate;
    bool m_instancesToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
