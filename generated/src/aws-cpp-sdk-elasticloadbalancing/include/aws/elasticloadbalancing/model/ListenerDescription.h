/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancing/model/Listener.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>The policies enabled for a listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ListenerDescription">AWS
   * API Reference</a></p>
   */
  class ListenerDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API ListenerDescription() = default;
    AWS_ELASTICLOADBALANCING_API ListenerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API ListenerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The listener.</p>
     */
    inline const Listener& GetListener() const { return m_listener; }
    inline bool ListenerHasBeenSet() const { return m_listenerHasBeenSet; }
    template<typename ListenerT = Listener>
    void SetListener(ListenerT&& value) { m_listenerHasBeenSet = true; m_listener = std::forward<ListenerT>(value); }
    template<typename ListenerT = Listener>
    ListenerDescription& WithListener(ListenerT&& value) { SetListener(std::forward<ListenerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const { return m_policyNames; }
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    void SetPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::forward<PolicyNamesT>(value); }
    template<typename PolicyNamesT = Aws::Vector<Aws::String>>
    ListenerDescription& WithPolicyNames(PolicyNamesT&& value) { SetPolicyNames(std::forward<PolicyNamesT>(value)); return *this;}
    template<typename PolicyNamesT = Aws::String>
    ListenerDescription& AddPolicyNames(PolicyNamesT&& value) { m_policyNamesHasBeenSet = true; m_policyNames.emplace_back(std::forward<PolicyNamesT>(value)); return *this; }
    ///@}
  private:

    Listener m_listener;
    bool m_listenerHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
