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
   * <p>Describes information used to start an instance refresh. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RefreshPreferences">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API RefreshPreferences
  {
  public:
    RefreshPreferences();
    RefreshPreferences(const Aws::Utils::Xml::XmlNode& xmlNode);
    RefreshPreferences& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The amount of capacity in the Auto Scaling group that must remain healthy
     * during an instance refresh to allow the operation to continue, as a percentage
     * of the desired capacity of the Auto Scaling group (rounded up to the nearest
     * integer). The default is <code>90</code>. </p>
     */
    inline int GetMinHealthyPercentage() const{ return m_minHealthyPercentage; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must remain healthy
     * during an instance refresh to allow the operation to continue, as a percentage
     * of the desired capacity of the Auto Scaling group (rounded up to the nearest
     * integer). The default is <code>90</code>. </p>
     */
    inline bool MinHealthyPercentageHasBeenSet() const { return m_minHealthyPercentageHasBeenSet; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must remain healthy
     * during an instance refresh to allow the operation to continue, as a percentage
     * of the desired capacity of the Auto Scaling group (rounded up to the nearest
     * integer). The default is <code>90</code>. </p>
     */
    inline void SetMinHealthyPercentage(int value) { m_minHealthyPercentageHasBeenSet = true; m_minHealthyPercentage = value; }

    /**
     * <p>The amount of capacity in the Auto Scaling group that must remain healthy
     * during an instance refresh to allow the operation to continue, as a percentage
     * of the desired capacity of the Auto Scaling group (rounded up to the nearest
     * integer). The default is <code>90</code>. </p>
     */
    inline RefreshPreferences& WithMinHealthyPercentage(int value) { SetMinHealthyPercentage(value); return *this;}


    /**
     * <p>The number of seconds until a newly launched instance is configured and ready
     * to use. During this time, Amazon EC2 Auto Scaling does not immediately move on
     * to the next replacement. The default is to use the value for the health check
     * grace period defined for the group.</p>
     */
    inline int GetInstanceWarmup() const{ return m_instanceWarmup; }

    /**
     * <p>The number of seconds until a newly launched instance is configured and ready
     * to use. During this time, Amazon EC2 Auto Scaling does not immediately move on
     * to the next replacement. The default is to use the value for the health check
     * grace period defined for the group.</p>
     */
    inline bool InstanceWarmupHasBeenSet() const { return m_instanceWarmupHasBeenSet; }

    /**
     * <p>The number of seconds until a newly launched instance is configured and ready
     * to use. During this time, Amazon EC2 Auto Scaling does not immediately move on
     * to the next replacement. The default is to use the value for the health check
     * grace period defined for the group.</p>
     */
    inline void SetInstanceWarmup(int value) { m_instanceWarmupHasBeenSet = true; m_instanceWarmup = value; }

    /**
     * <p>The number of seconds until a newly launched instance is configured and ready
     * to use. During this time, Amazon EC2 Auto Scaling does not immediately move on
     * to the next replacement. The default is to use the value for the health check
     * grace period defined for the group.</p>
     */
    inline RefreshPreferences& WithInstanceWarmup(int value) { SetInstanceWarmup(value); return *this;}

  private:

    int m_minHealthyPercentage;
    bool m_minHealthyPercentageHasBeenSet;

    int m_instanceWarmup;
    bool m_instanceWarmupHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
