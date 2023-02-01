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
   * <p>Describes an instance reuse policy for a warm pool. </p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm
   * pools for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceReusePolicy">AWS
   * API Reference</a></p>
   */
  class InstanceReusePolicy
  {
  public:
    AWS_AUTOSCALING_API InstanceReusePolicy();
    AWS_AUTOSCALING_API InstanceReusePolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceReusePolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. </p>
     */
    inline bool GetReuseOnScaleIn() const{ return m_reuseOnScaleIn; }

    /**
     * <p>Specifies whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. </p>
     */
    inline bool ReuseOnScaleInHasBeenSet() const { return m_reuseOnScaleInHasBeenSet; }

    /**
     * <p>Specifies whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. </p>
     */
    inline void SetReuseOnScaleIn(bool value) { m_reuseOnScaleInHasBeenSet = true; m_reuseOnScaleIn = value; }

    /**
     * <p>Specifies whether instances in the Auto Scaling group can be returned to the
     * warm pool on scale in. </p>
     */
    inline InstanceReusePolicy& WithReuseOnScaleIn(bool value) { SetReuseOnScaleIn(value); return *this;}

  private:

    bool m_reuseOnScaleIn;
    bool m_reuseOnScaleInHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
