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
  class AWS_ELASTICLOADBALANCING_API ListenerDescription
  {
  public:
    ListenerDescription();
    ListenerDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    ListenerDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_listenerHasBeenSet;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
