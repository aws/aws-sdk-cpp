/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/AppCookieStickinessPolicy.h>
#include <aws/elasticloadbalancing/model/LBCookieStickinessPolicy.h>
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
   * <p>The policies for a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/Policies">AWS
   * API Reference</a></p>
   */
  class Policies
  {
  public:
    AWS_ELASTICLOADBALANCING_API Policies();
    AWS_ELASTICLOADBALANCING_API Policies(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API Policies& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline const Aws::Vector<AppCookieStickinessPolicy>& GetAppCookieStickinessPolicies() const{ return m_appCookieStickinessPolicies; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline bool AppCookieStickinessPoliciesHasBeenSet() const { return m_appCookieStickinessPoliciesHasBeenSet; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline void SetAppCookieStickinessPolicies(const Aws::Vector<AppCookieStickinessPolicy>& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = value; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline void SetAppCookieStickinessPolicies(Aws::Vector<AppCookieStickinessPolicy>&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = std::move(value); }

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline Policies& WithAppCookieStickinessPolicies(const Aws::Vector<AppCookieStickinessPolicy>& value) { SetAppCookieStickinessPolicies(value); return *this;}

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline Policies& WithAppCookieStickinessPolicies(Aws::Vector<AppCookieStickinessPolicy>&& value) { SetAppCookieStickinessPolicies(std::move(value)); return *this;}

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline Policies& AddAppCookieStickinessPolicies(const AppCookieStickinessPolicy& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.push_back(value); return *this; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline Policies& AddAppCookieStickinessPolicies(AppCookieStickinessPolicy&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline const Aws::Vector<LBCookieStickinessPolicy>& GetLBCookieStickinessPolicies() const{ return m_lBCookieStickinessPolicies; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline bool LBCookieStickinessPoliciesHasBeenSet() const { return m_lBCookieStickinessPoliciesHasBeenSet; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline void SetLBCookieStickinessPolicies(const Aws::Vector<LBCookieStickinessPolicy>& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies = value; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline void SetLBCookieStickinessPolicies(Aws::Vector<LBCookieStickinessPolicy>&& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies = std::move(value); }

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline Policies& WithLBCookieStickinessPolicies(const Aws::Vector<LBCookieStickinessPolicy>& value) { SetLBCookieStickinessPolicies(value); return *this;}

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline Policies& WithLBCookieStickinessPolicies(Aws::Vector<LBCookieStickinessPolicy>&& value) { SetLBCookieStickinessPolicies(std::move(value)); return *this;}

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline Policies& AddLBCookieStickinessPolicies(const LBCookieStickinessPolicy& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies.push_back(value); return *this; }

    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline Policies& AddLBCookieStickinessPolicies(LBCookieStickinessPolicy&& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOtherPolicies() const{ return m_otherPolicies; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline bool OtherPoliciesHasBeenSet() const { return m_otherPoliciesHasBeenSet; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline void SetOtherPolicies(const Aws::Vector<Aws::String>& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = value; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline void SetOtherPolicies(Aws::Vector<Aws::String>&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = std::move(value); }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline Policies& WithOtherPolicies(const Aws::Vector<Aws::String>& value) { SetOtherPolicies(value); return *this;}

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline Policies& WithOtherPolicies(Aws::Vector<Aws::String>&& value) { SetOtherPolicies(std::move(value)); return *this;}

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline Policies& AddOtherPolicies(const Aws::String& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(value); return *this; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline Policies& AddOtherPolicies(Aws::String&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(std::move(value)); return *this; }

    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline Policies& AddOtherPolicies(const char* value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.push_back(value); return *this; }

  private:

    Aws::Vector<AppCookieStickinessPolicy> m_appCookieStickinessPolicies;
    bool m_appCookieStickinessPoliciesHasBeenSet = false;

    Aws::Vector<LBCookieStickinessPolicy> m_lBCookieStickinessPolicies;
    bool m_lBCookieStickinessPoliciesHasBeenSet = false;

    Aws::Vector<Aws::String> m_otherPolicies;
    bool m_otherPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
