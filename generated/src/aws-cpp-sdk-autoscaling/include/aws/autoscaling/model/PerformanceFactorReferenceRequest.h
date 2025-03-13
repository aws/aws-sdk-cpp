/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Specify an instance family to use as the baseline reference for CPU
   * performance. All instance types that All instance types that match your
   * specified attributes will be compared against the CPU performance of the
   * referenced instance family, regardless of CPU manufacturer or architecture
   * differences. </p>  <p>Currently only one instance family can be specified
   * in the list.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PerformanceFactorReferenceRequest">AWS
   * API Reference</a></p>
   */
  class PerformanceFactorReferenceRequest
  {
  public:
    AWS_AUTOSCALING_API PerformanceFactorReferenceRequest() = default;
    AWS_AUTOSCALING_API PerformanceFactorReferenceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PerformanceFactorReferenceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The instance family to use as a baseline reference. </p>  <p>Make sure
     * that you specify the correct value for the instance family. The instance family
     * is everything before the period (.) in the instance type name. For example, in
     * the instance <code>c6i.large</code>, the instance family is <code>c6i</code>,
     * not <code>c6</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/instance-type-names.html">Amazon
     * EC2 instance type naming conventions</a> in <i>Amazon EC2 Instance
     * Types</i>.</p>  <p>The following instance types are <i>not supported</i>
     * for performance protection.</p> <ul> <li> <p> <code>c1</code> </p> </li> <li>
     * <p> <code>g3| g3s</code> </p> </li> <li> <p> <code>hpc7g</code> </p> </li> <li>
     * <p> <code>m1| m2</code> </p> </li> <li> <p> <code>mac1 | mac2 | mac2-m1ultra |
     * mac2-m2 | mac2-m2pro</code> </p> </li> <li> <p> <code>p3dn | p4d | p5</code>
     * </p> </li> <li> <p> <code>t1</code> </p> </li> <li> <p> <code>u-12tb1 | u-18tb1
     * | u-24tb1 | u-3tb1 | u-6tb1 | u-9tb1 | u7i-12tb | u7in-16tb | u7in-24tb |
     * u7in-32tb</code> </p> </li> </ul> <p>If you performance protection by specifying
     * a supported instance family, the returned instance types will exclude the
     * preceding unsupported instance families.</p> <p>If you specify an unsupported
     * instance family as a value for baseline performance, the API returns an empty
     * response.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    PerformanceFactorReferenceRequest& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
