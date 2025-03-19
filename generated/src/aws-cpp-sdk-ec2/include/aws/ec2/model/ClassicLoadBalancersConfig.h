/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ClassicLoadBalancer.h>
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
   * <p>Describes the Classic Load Balancers to attach to a Spot Fleet. Spot Fleet
   * registers the running Spot Instances with these Classic Load
   * Balancers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClassicLoadBalancersConfig">AWS
   * API Reference</a></p>
   */
  class ClassicLoadBalancersConfig
  {
  public:
    AWS_EC2_API ClassicLoadBalancersConfig() = default;
    AWS_EC2_API ClassicLoadBalancersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClassicLoadBalancersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline const Aws::Vector<ClassicLoadBalancer>& GetClassicLoadBalancers() const { return m_classicLoadBalancers; }
    inline bool ClassicLoadBalancersHasBeenSet() const { return m_classicLoadBalancersHasBeenSet; }
    template<typename ClassicLoadBalancersT = Aws::Vector<ClassicLoadBalancer>>
    void SetClassicLoadBalancers(ClassicLoadBalancersT&& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers = std::forward<ClassicLoadBalancersT>(value); }
    template<typename ClassicLoadBalancersT = Aws::Vector<ClassicLoadBalancer>>
    ClassicLoadBalancersConfig& WithClassicLoadBalancers(ClassicLoadBalancersT&& value) { SetClassicLoadBalancers(std::forward<ClassicLoadBalancersT>(value)); return *this;}
    template<typename ClassicLoadBalancersT = ClassicLoadBalancer>
    ClassicLoadBalancersConfig& AddClassicLoadBalancers(ClassicLoadBalancersT&& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers.emplace_back(std::forward<ClassicLoadBalancersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ClassicLoadBalancer> m_classicLoadBalancers;
    bool m_classicLoadBalancersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
