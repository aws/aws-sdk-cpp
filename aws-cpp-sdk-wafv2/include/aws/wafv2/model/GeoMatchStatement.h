/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ForwardedIPConfig.h>
#include <aws/wafv2/model/CountryCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>A rule statement used to identify web
   * requests based on country of origin. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GeoMatchStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API GeoMatchStatement
  {
  public:
    GeoMatchStatement();
    GeoMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    GeoMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline const Aws::Vector<CountryCode>& GetCountryCodes() const{ return m_countryCodes; }

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline bool CountryCodesHasBeenSet() const { return m_countryCodesHasBeenSet; }

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline void SetCountryCodes(const Aws::Vector<CountryCode>& value) { m_countryCodesHasBeenSet = true; m_countryCodes = value; }

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline void SetCountryCodes(Aws::Vector<CountryCode>&& value) { m_countryCodesHasBeenSet = true; m_countryCodes = std::move(value); }

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline GeoMatchStatement& WithCountryCodes(const Aws::Vector<CountryCode>& value) { SetCountryCodes(value); return *this;}

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline GeoMatchStatement& WithCountryCodes(Aws::Vector<CountryCode>&& value) { SetCountryCodes(std::move(value)); return *this;}

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline GeoMatchStatement& AddCountryCodes(const CountryCode& value) { m_countryCodesHasBeenSet = true; m_countryCodes.push_back(value); return *this; }

    /**
     * <p>An array of two-character country codes, for example, <code>[ "US", "CN"
     * ]</code>, from the alpha-2 country ISO codes of the ISO 3166 international
     * standard. </p>
     */
    inline GeoMatchStatement& AddCountryCodes(CountryCode&& value) { m_countryCodesHasBeenSet = true; m_countryCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline const ForwardedIPConfig& GetForwardedIPConfig() const{ return m_forwardedIPConfig; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline bool ForwardedIPConfigHasBeenSet() const { return m_forwardedIPConfigHasBeenSet; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetForwardedIPConfig(const ForwardedIPConfig& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = value; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetForwardedIPConfig(ForwardedIPConfig&& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = std::move(value); }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline GeoMatchStatement& WithForwardedIPConfig(const ForwardedIPConfig& value) { SetForwardedIPConfig(value); return *this;}

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, AWS WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline GeoMatchStatement& WithForwardedIPConfig(ForwardedIPConfig&& value) { SetForwardedIPConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<CountryCode> m_countryCodes;
    bool m_countryCodesHasBeenSet;

    ForwardedIPConfig m_forwardedIPConfig;
    bool m_forwardedIPConfigHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
