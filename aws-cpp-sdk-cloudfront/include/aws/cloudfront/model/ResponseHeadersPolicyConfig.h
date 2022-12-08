/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyCorsConfig.h>
#include <aws/cloudfront/model/ResponseHeadersPolicySecurityHeadersConfig.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyServerTimingHeadersConfig.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyCustomHeadersConfig.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A response headers policy configuration.</p> <p>A response headers policy
   * configuration contains metadata about the response headers policy, and
   * configurations for sets of HTTP response headers and their values. CloudFront
   * adds the headers in the policy to HTTP responses that it sends for requests that
   * match a cache behavior associated with the policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline ResponseHeadersPolicyConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline ResponseHeadersPolicyConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline ResponseHeadersPolicyConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline ResponseHeadersPolicyConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline ResponseHeadersPolicyConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline ResponseHeadersPolicyConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline const ResponseHeadersPolicyCorsConfig& GetCorsConfig() const{ return m_corsConfig; }

    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline bool CorsConfigHasBeenSet() const { return m_corsConfigHasBeenSet; }

    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline void SetCorsConfig(const ResponseHeadersPolicyCorsConfig& value) { m_corsConfigHasBeenSet = true; m_corsConfig = value; }

    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline void SetCorsConfig(ResponseHeadersPolicyCorsConfig&& value) { m_corsConfigHasBeenSet = true; m_corsConfig = std::move(value); }

    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline ResponseHeadersPolicyConfig& WithCorsConfig(const ResponseHeadersPolicyCorsConfig& value) { SetCorsConfig(value); return *this;}

    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline ResponseHeadersPolicyConfig& WithCorsConfig(ResponseHeadersPolicyCorsConfig&& value) { SetCorsConfig(std::move(value)); return *this;}


    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicySecurityHeadersConfig& GetSecurityHeadersConfig() const{ return m_securityHeadersConfig; }

    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline bool SecurityHeadersConfigHasBeenSet() const { return m_securityHeadersConfigHasBeenSet; }

    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline void SetSecurityHeadersConfig(const ResponseHeadersPolicySecurityHeadersConfig& value) { m_securityHeadersConfigHasBeenSet = true; m_securityHeadersConfig = value; }

    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline void SetSecurityHeadersConfig(ResponseHeadersPolicySecurityHeadersConfig&& value) { m_securityHeadersConfigHasBeenSet = true; m_securityHeadersConfig = std::move(value); }

    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline ResponseHeadersPolicyConfig& WithSecurityHeadersConfig(const ResponseHeadersPolicySecurityHeadersConfig& value) { SetSecurityHeadersConfig(value); return *this;}

    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline ResponseHeadersPolicyConfig& WithSecurityHeadersConfig(ResponseHeadersPolicySecurityHeadersConfig&& value) { SetSecurityHeadersConfig(std::move(value)); return *this;}


    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline const ResponseHeadersPolicyServerTimingHeadersConfig& GetServerTimingHeadersConfig() const{ return m_serverTimingHeadersConfig; }

    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline bool ServerTimingHeadersConfigHasBeenSet() const { return m_serverTimingHeadersConfigHasBeenSet; }

    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline void SetServerTimingHeadersConfig(const ResponseHeadersPolicyServerTimingHeadersConfig& value) { m_serverTimingHeadersConfigHasBeenSet = true; m_serverTimingHeadersConfig = value; }

    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline void SetServerTimingHeadersConfig(ResponseHeadersPolicyServerTimingHeadersConfig&& value) { m_serverTimingHeadersConfigHasBeenSet = true; m_serverTimingHeadersConfig = std::move(value); }

    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline ResponseHeadersPolicyConfig& WithServerTimingHeadersConfig(const ResponseHeadersPolicyServerTimingHeadersConfig& value) { SetServerTimingHeadersConfig(value); return *this;}

    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline ResponseHeadersPolicyConfig& WithServerTimingHeadersConfig(ResponseHeadersPolicyServerTimingHeadersConfig&& value) { SetServerTimingHeadersConfig(std::move(value)); return *this;}


    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicyCustomHeadersConfig& GetCustomHeadersConfig() const{ return m_customHeadersConfig; }

    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline bool CustomHeadersConfigHasBeenSet() const { return m_customHeadersConfigHasBeenSet; }

    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline void SetCustomHeadersConfig(const ResponseHeadersPolicyCustomHeadersConfig& value) { m_customHeadersConfigHasBeenSet = true; m_customHeadersConfig = value; }

    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline void SetCustomHeadersConfig(ResponseHeadersPolicyCustomHeadersConfig&& value) { m_customHeadersConfigHasBeenSet = true; m_customHeadersConfig = std::move(value); }

    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline ResponseHeadersPolicyConfig& WithCustomHeadersConfig(const ResponseHeadersPolicyCustomHeadersConfig& value) { SetCustomHeadersConfig(value); return *this;}

    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline ResponseHeadersPolicyConfig& WithCustomHeadersConfig(ResponseHeadersPolicyCustomHeadersConfig&& value) { SetCustomHeadersConfig(std::move(value)); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResponseHeadersPolicyCorsConfig m_corsConfig;
    bool m_corsConfigHasBeenSet = false;

    ResponseHeadersPolicySecurityHeadersConfig m_securityHeadersConfig;
    bool m_securityHeadersConfigHasBeenSet = false;

    ResponseHeadersPolicyServerTimingHeadersConfig m_serverTimingHeadersConfig;
    bool m_serverTimingHeadersConfigHasBeenSet = false;

    ResponseHeadersPolicyCustomHeadersConfig m_customHeadersConfig;
    bool m_customHeadersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
