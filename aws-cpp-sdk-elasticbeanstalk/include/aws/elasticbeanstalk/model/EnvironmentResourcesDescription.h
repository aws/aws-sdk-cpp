﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/LoadBalancerDescription.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes the AWS resources in use by this environment. This data is not live
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentResourcesDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API EnvironmentResourcesDescription
  {
  public:
    EnvironmentResourcesDescription();
    EnvironmentResourcesDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnvironmentResourcesDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline const LoadBalancerDescription& GetLoadBalancer() const{ return m_loadBalancer; }

    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline bool LoadBalancerHasBeenSet() const { return m_loadBalancerHasBeenSet; }

    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline void SetLoadBalancer(const LoadBalancerDescription& value) { m_loadBalancerHasBeenSet = true; m_loadBalancer = value; }

    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline void SetLoadBalancer(LoadBalancerDescription&& value) { m_loadBalancerHasBeenSet = true; m_loadBalancer = std::move(value); }

    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline EnvironmentResourcesDescription& WithLoadBalancer(const LoadBalancerDescription& value) { SetLoadBalancer(value); return *this;}

    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline EnvironmentResourcesDescription& WithLoadBalancer(LoadBalancerDescription&& value) { SetLoadBalancer(std::move(value)); return *this;}

  private:

    LoadBalancerDescription m_loadBalancer;
    bool m_loadBalancerHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
