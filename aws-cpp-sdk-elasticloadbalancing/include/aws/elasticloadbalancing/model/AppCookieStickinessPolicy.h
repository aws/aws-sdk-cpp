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
   * <p>Information about a policy for application-controlled session
   * stickiness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AppCookieStickinessPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API AppCookieStickinessPolicy
  {
  public:
    AppCookieStickinessPolicy();
    AppCookieStickinessPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AppCookieStickinessPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline AppCookieStickinessPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline AppCookieStickinessPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline AppCookieStickinessPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline const Aws::String& GetCookieName() const{ return m_cookieName; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline bool CookieNameHasBeenSet() const { return m_cookieNameHasBeenSet; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const Aws::String& value) { m_cookieNameHasBeenSet = true; m_cookieName = value; }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(Aws::String&& value) { m_cookieNameHasBeenSet = true; m_cookieName = std::move(value); }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline void SetCookieName(const char* value) { m_cookieNameHasBeenSet = true; m_cookieName.assign(value); }

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AppCookieStickinessPolicy& WithCookieName(const Aws::String& value) { SetCookieName(value); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AppCookieStickinessPolicy& WithCookieName(Aws::String&& value) { SetCookieName(std::move(value)); return *this;}

    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline AppCookieStickinessPolicy& WithCookieName(const char* value) { SetCookieName(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_cookieName;
    bool m_cookieNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
