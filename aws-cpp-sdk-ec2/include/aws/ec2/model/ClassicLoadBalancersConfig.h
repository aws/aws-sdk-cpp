/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ClassicLoadBalancersConfig
  {
  public:
    ClassicLoadBalancersConfig();
    ClassicLoadBalancersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClassicLoadBalancersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline const Aws::Vector<ClassicLoadBalancer>& GetClassicLoadBalancers() const{ return m_classicLoadBalancers; }

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline void SetClassicLoadBalancers(const Aws::Vector<ClassicLoadBalancer>& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers = value; }

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline void SetClassicLoadBalancers(Aws::Vector<ClassicLoadBalancer>&& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers = std::move(value); }

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline ClassicLoadBalancersConfig& WithClassicLoadBalancers(const Aws::Vector<ClassicLoadBalancer>& value) { SetClassicLoadBalancers(value); return *this;}

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline ClassicLoadBalancersConfig& WithClassicLoadBalancers(Aws::Vector<ClassicLoadBalancer>&& value) { SetClassicLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline ClassicLoadBalancersConfig& AddClassicLoadBalancers(const ClassicLoadBalancer& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers.push_back(value); return *this; }

    /**
     * <p>One or more Classic Load Balancers.</p>
     */
    inline ClassicLoadBalancersConfig& AddClassicLoadBalancers(ClassicLoadBalancer&& value) { m_classicLoadBalancersHasBeenSet = true; m_classicLoadBalancers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ClassicLoadBalancer> m_classicLoadBalancers;
    bool m_classicLoadBalancersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
