/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a load balancer listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisLoadBalancerListener">AWS
   * API Reference</a></p>
   */
  class AnalysisLoadBalancerListener
  {
  public:
    AWS_EC2_API AnalysisLoadBalancerListener();
    AWS_EC2_API AnalysisLoadBalancerListener(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisLoadBalancerListener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline AnalysisLoadBalancerListener& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}


    /**
     * <p>[Classic Load Balancers] The back-end port for the listener.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>[Classic Load Balancers] The back-end port for the listener.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>[Classic Load Balancers] The back-end port for the listener.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>[Classic Load Balancers] The back-end port for the listener.</p>
     */
    inline AnalysisLoadBalancerListener& WithInstancePort(int value) { SetInstancePort(value); return *this;}

  private:

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet = false;

    int m_instancePort;
    bool m_instancePortHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
