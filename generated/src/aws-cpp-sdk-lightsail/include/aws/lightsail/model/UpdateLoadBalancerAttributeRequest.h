/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerAttributeName.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateLoadBalancerAttributeRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateLoadBalancerAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLoadBalancerAttribute"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline const LoadBalancerAttributeName& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline void SetAttributeName(const LoadBalancerAttributeName& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline void SetAttributeName(LoadBalancerAttributeName&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeName(const LoadBalancerAttributeName& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to update.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeName(LoadBalancerAttributeName&& value) { SetAttributeName(std::move(value)); return *this;}


    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value that you want to specify for the attribute name.</p> <p>The
     * following values are supported depending on what you specify for the
     * <code>attributeName</code> request parameter:</p> <ul> <li> <p>If you specify
     * <code>HealthCheckPath</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be the
     * path to ping on the target (for example,
     * <code>/weather/us/wa/seattle</code>).</p> </li> <li> <p>If you specify
     * <code>SessionStickinessEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate session stickiness or <code>false</code> to
     * deactivate session stickiness.</p> </li> <li> <p>If you specify
     * <code>SessionStickiness_LB_CookieDurationSeconds</code> for the
     * <code>attributeName</code> request parameter, then the
     * <code>attributeValue</code> request parameter must be an interger that
     * represents the cookie duration in seconds.</p> </li> <li> <p>If you specify
     * <code>HttpsRedirectionEnabled</code> for the <code>attributeName</code> request
     * parameter, then the <code>attributeValue</code> request parameter must be
     * <code>true</code> to activate HTTP to HTTPS redirection or <code>false</code> to
     * deactivate HTTP to HTTPS redirection.</p> </li> <li> <p>If you specify
     * <code>TlsPolicyName</code> for the <code>attributeName</code> request parameter,
     * then the <code>attributeValue</code> request parameter must be the name of the
     * TLS policy.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> </li> </ul>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    LoadBalancerAttributeName m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
