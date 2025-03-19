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
    AWS_ELASTICLOADBALANCING_API Policies() = default;
    AWS_ELASTICLOADBALANCING_API Policies(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API Policies& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The stickiness policies created using
     * <a>CreateAppCookieStickinessPolicy</a>.</p>
     */
    inline const Aws::Vector<AppCookieStickinessPolicy>& GetAppCookieStickinessPolicies() const { return m_appCookieStickinessPolicies; }
    inline bool AppCookieStickinessPoliciesHasBeenSet() const { return m_appCookieStickinessPoliciesHasBeenSet; }
    template<typename AppCookieStickinessPoliciesT = Aws::Vector<AppCookieStickinessPolicy>>
    void SetAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies = std::forward<AppCookieStickinessPoliciesT>(value); }
    template<typename AppCookieStickinessPoliciesT = Aws::Vector<AppCookieStickinessPolicy>>
    Policies& WithAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { SetAppCookieStickinessPolicies(std::forward<AppCookieStickinessPoliciesT>(value)); return *this;}
    template<typename AppCookieStickinessPoliciesT = AppCookieStickinessPolicy>
    Policies& AddAppCookieStickinessPolicies(AppCookieStickinessPoliciesT&& value) { m_appCookieStickinessPoliciesHasBeenSet = true; m_appCookieStickinessPolicies.emplace_back(std::forward<AppCookieStickinessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stickiness policies created using
     * <a>CreateLBCookieStickinessPolicy</a>.</p>
     */
    inline const Aws::Vector<LBCookieStickinessPolicy>& GetLBCookieStickinessPolicies() const { return m_lBCookieStickinessPolicies; }
    inline bool LBCookieStickinessPoliciesHasBeenSet() const { return m_lBCookieStickinessPoliciesHasBeenSet; }
    template<typename LBCookieStickinessPoliciesT = Aws::Vector<LBCookieStickinessPolicy>>
    void SetLBCookieStickinessPolicies(LBCookieStickinessPoliciesT&& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies = std::forward<LBCookieStickinessPoliciesT>(value); }
    template<typename LBCookieStickinessPoliciesT = Aws::Vector<LBCookieStickinessPolicy>>
    Policies& WithLBCookieStickinessPolicies(LBCookieStickinessPoliciesT&& value) { SetLBCookieStickinessPolicies(std::forward<LBCookieStickinessPoliciesT>(value)); return *this;}
    template<typename LBCookieStickinessPoliciesT = LBCookieStickinessPolicy>
    Policies& AddLBCookieStickinessPolicies(LBCookieStickinessPoliciesT&& value) { m_lBCookieStickinessPoliciesHasBeenSet = true; m_lBCookieStickinessPolicies.emplace_back(std::forward<LBCookieStickinessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies other than the stickiness policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOtherPolicies() const { return m_otherPolicies; }
    inline bool OtherPoliciesHasBeenSet() const { return m_otherPoliciesHasBeenSet; }
    template<typename OtherPoliciesT = Aws::Vector<Aws::String>>
    void SetOtherPolicies(OtherPoliciesT&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies = std::forward<OtherPoliciesT>(value); }
    template<typename OtherPoliciesT = Aws::Vector<Aws::String>>
    Policies& WithOtherPolicies(OtherPoliciesT&& value) { SetOtherPolicies(std::forward<OtherPoliciesT>(value)); return *this;}
    template<typename OtherPoliciesT = Aws::String>
    Policies& AddOtherPolicies(OtherPoliciesT&& value) { m_otherPoliciesHasBeenSet = true; m_otherPolicies.emplace_back(std::forward<OtherPoliciesT>(value)); return *this; }
    ///@}
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
