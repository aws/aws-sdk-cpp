/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AppCookieStickinessPolicy
  {
  public:
    AWS_ELASTICLOADBALANCING_API AppCookieStickinessPolicy();
    AWS_ELASTICLOADBALANCING_API AppCookieStickinessPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API AppCookieStickinessPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The mnemonic name for the policy being created. The name must be unique
     * within a set of policies for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline AppCookieStickinessPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline AppCookieStickinessPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline AppCookieStickinessPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application cookie used for stickiness.</p>
     */
    inline const Aws::String& GetCookieName() const{ return m_cookieName; }
    inline bool CookieNameHasBeenSet() const { return m_cookieNameHasBeenSet; }
    inline void SetCookieName(const Aws::String& value) { m_cookieNameHasBeenSet = true; m_cookieName = value; }
    inline void SetCookieName(Aws::String&& value) { m_cookieNameHasBeenSet = true; m_cookieName = std::move(value); }
    inline void SetCookieName(const char* value) { m_cookieNameHasBeenSet = true; m_cookieName.assign(value); }
    inline AppCookieStickinessPolicy& WithCookieName(const Aws::String& value) { SetCookieName(value); return *this;}
    inline AppCookieStickinessPolicy& WithCookieName(Aws::String&& value) { SetCookieName(std::move(value)); return *this;}
    inline AppCookieStickinessPolicy& WithCookieName(const char* value) { SetCookieName(value); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_cookieName;
    bool m_cookieNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
