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
    AWS_ELASTICLOADBALANCING_API ListenerDescription();
    AWS_ELASTICLOADBALANCING_API ListenerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API ListenerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The listener.</p>
     */
    inline const Listener& GetListener() const{ return m_listener; }

    /**
     * <p>The listener.</p>
     */
    inline bool ListenerHasBeenSet() const { return m_listenerHasBeenSet; }

    /**
     * <p>The listener.</p>
     */
    inline void SetListener(const Listener& value) { m_listenerHasBeenSet = true; m_listener = value; }

    /**
     * <p>The listener.</p>
     */
    inline void SetListener(Listener&& value) { m_listenerHasBeenSet = true; m_listener = std::move(value); }

    /**
     * <p>The listener.</p>
     */
    inline ListenerDescription& WithListener(const Listener& value) { SetListener(value); return *this;}

    /**
     * <p>The listener.</p>
     */
    inline ListenerDescription& WithListener(Listener&& value) { SetListener(std::move(value)); return *this;}


    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline ListenerDescription& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline ListenerDescription& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline ListenerDescription& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline ListenerDescription& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The policies. If there are no policies enabled, the list is empty.</p>
     */
    inline ListenerDescription& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

  private:

    Listener m_listener;
    bool m_listenerHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
