/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/Listener.h>
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
   * <p>Describes the details of a LoadBalancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/LoadBalancerDescription">AWS
   * API Reference</a></p>
   */
  class LoadBalancerDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API LoadBalancerDescription() = default;
    AWS_ELASTICBEANSTALK_API LoadBalancerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API LoadBalancerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the LoadBalancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancerDescription& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the LoadBalancer.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    LoadBalancerDescription& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Listeners used by the LoadBalancer.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const { return m_listeners; }
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }
    template<typename ListenersT = Aws::Vector<Listener>>
    void SetListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners = std::forward<ListenersT>(value); }
    template<typename ListenersT = Aws::Vector<Listener>>
    LoadBalancerDescription& WithListeners(ListenersT&& value) { SetListeners(std::forward<ListenersT>(value)); return *this;}
    template<typename ListenersT = Listener>
    LoadBalancerDescription& AddListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners.emplace_back(std::forward<ListenersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
