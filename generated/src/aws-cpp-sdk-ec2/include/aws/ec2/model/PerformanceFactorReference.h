/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Specify an instance family to use as the baseline reference for CPU
   * performance. All instance types that match your specified attributes will be
   * compared against the CPU performance of the referenced instance family,
   * regardless of CPU manufacturer or architecture.</p>  <p>Currently, only
   * one instance family can be specified in the list.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PerformanceFactorReference">AWS
   * API Reference</a></p>
   */
  class PerformanceFactorReference
  {
  public:
    AWS_EC2_API PerformanceFactorReference() = default;
    AWS_EC2_API PerformanceFactorReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PerformanceFactorReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance family to use as a baseline reference.</p>  <p>Ensure that
     * you specify the correct value for the instance family. The instance family is
     * everything before the period (<code>.</code>) in the instance type name. For
     * example, in the instance type <code>c6i.large</code>, the instance family is
     * <code>c6i</code>, not <code>c6</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/instance-type-names.html">Amazon
     * EC2 instance type naming conventions</a> in <i>Amazon EC2 Instance
     * Types</i>.</p>  <p>The following instance families are <i>not
     * supported</i> for performance protection:</p> <ul> <li> <p> <code>c1</code> </p>
     * </li> <li> <p> <code>g3</code> | <code>g3s</code> </p> </li> <li> <p>
     * <code>hpc7g</code> </p> </li> <li> <p> <code>m1</code> | <code>m2</code> </p>
     * </li> <li> <p> <code>mac1</code> | <code>mac2</code> | <code>mac2-m1ultra</code>
     * | <code>mac2-m2</code> | <code>mac2-m2pro</code> </p> </li> <li> <p>
     * <code>p3dn</code> | <code>p4d</code> | <code>p5</code> </p> </li> <li> <p>
     * <code>t1</code> </p> </li> <li> <p> <code>u-12tb1</code> | <code>u-18tb1</code>
     * | <code>u-24tb1</code> | <code>u-3tb1</code> | <code>u-6tb1</code> |
     * <code>u-9tb1</code> | <code>u7i-12tb</code> | <code>u7in-16tb</code> |
     * <code>u7in-24tb</code> | <code>u7in-32tb</code> </p> </li> </ul> <p>If you
     * enable performance protection by specifying a supported instance family, the
     * returned instance types will exclude the above unsupported instance
     * families.</p> <p>If you specify an unsupported instance family as a value for
     * baseline performance, the API returns an empty response for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements">GetInstanceTypesFromInstanceRequirements</a>
     * and an exception for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet">RequestSpotFleet</a>,
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyFleet">ModifyFleet</a>,
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifySpotFleetRequest">ModifySpotFleetRequest</a>.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    PerformanceFactorReference& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
