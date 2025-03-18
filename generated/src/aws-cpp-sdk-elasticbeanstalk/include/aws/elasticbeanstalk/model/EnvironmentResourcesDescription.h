/**
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
  class EnvironmentResourcesDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentResourcesDescription() = default;
    AWS_ELASTICBEANSTALK_API EnvironmentResourcesDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentResourcesDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the LoadBalancer.</p>
     */
    inline const LoadBalancerDescription& GetLoadBalancer() const { return m_loadBalancer; }
    inline bool LoadBalancerHasBeenSet() const { return m_loadBalancerHasBeenSet; }
    template<typename LoadBalancerT = LoadBalancerDescription>
    void SetLoadBalancer(LoadBalancerT&& value) { m_loadBalancerHasBeenSet = true; m_loadBalancer = std::forward<LoadBalancerT>(value); }
    template<typename LoadBalancerT = LoadBalancerDescription>
    EnvironmentResourcesDescription& WithLoadBalancer(LoadBalancerT&& value) { SetLoadBalancer(std::forward<LoadBalancerT>(value)); return *this;}
    ///@}
  private:

    LoadBalancerDescription m_loadBalancer;
    bool m_loadBalancerHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
