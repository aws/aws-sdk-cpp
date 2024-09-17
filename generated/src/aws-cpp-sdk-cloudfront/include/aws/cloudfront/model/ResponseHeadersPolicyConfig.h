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
#include <aws/cloudfront/model/ResponseHeadersPolicyRemoveHeadersConfig.h>
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
   * configurations for sets of HTTP response headers.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline ResponseHeadersPolicyConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline ResponseHeadersPolicyConfig& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResponseHeadersPolicyConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResponseHeadersPolicyConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline const ResponseHeadersPolicyCorsConfig& GetCorsConfig() const{ return m_corsConfig; }
    inline bool CorsConfigHasBeenSet() const { return m_corsConfigHasBeenSet; }
    inline void SetCorsConfig(const ResponseHeadersPolicyCorsConfig& value) { m_corsConfigHasBeenSet = true; m_corsConfig = value; }
    inline void SetCorsConfig(ResponseHeadersPolicyCorsConfig&& value) { m_corsConfigHasBeenSet = true; m_corsConfig = std::move(value); }
    inline ResponseHeadersPolicyConfig& WithCorsConfig(const ResponseHeadersPolicyCorsConfig& value) { SetCorsConfig(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithCorsConfig(ResponseHeadersPolicyCorsConfig&& value) { SetCorsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicySecurityHeadersConfig& GetSecurityHeadersConfig() const{ return m_securityHeadersConfig; }
    inline bool SecurityHeadersConfigHasBeenSet() const { return m_securityHeadersConfigHasBeenSet; }
    inline void SetSecurityHeadersConfig(const ResponseHeadersPolicySecurityHeadersConfig& value) { m_securityHeadersConfigHasBeenSet = true; m_securityHeadersConfig = value; }
    inline void SetSecurityHeadersConfig(ResponseHeadersPolicySecurityHeadersConfig&& value) { m_securityHeadersConfigHasBeenSet = true; m_securityHeadersConfig = std::move(value); }
    inline ResponseHeadersPolicyConfig& WithSecurityHeadersConfig(const ResponseHeadersPolicySecurityHeadersConfig& value) { SetSecurityHeadersConfig(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithSecurityHeadersConfig(ResponseHeadersPolicySecurityHeadersConfig&& value) { SetSecurityHeadersConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline const ResponseHeadersPolicyServerTimingHeadersConfig& GetServerTimingHeadersConfig() const{ return m_serverTimingHeadersConfig; }
    inline bool ServerTimingHeadersConfigHasBeenSet() const { return m_serverTimingHeadersConfigHasBeenSet; }
    inline void SetServerTimingHeadersConfig(const ResponseHeadersPolicyServerTimingHeadersConfig& value) { m_serverTimingHeadersConfigHasBeenSet = true; m_serverTimingHeadersConfig = value; }
    inline void SetServerTimingHeadersConfig(ResponseHeadersPolicyServerTimingHeadersConfig&& value) { m_serverTimingHeadersConfigHasBeenSet = true; m_serverTimingHeadersConfig = std::move(value); }
    inline ResponseHeadersPolicyConfig& WithServerTimingHeadersConfig(const ResponseHeadersPolicyServerTimingHeadersConfig& value) { SetServerTimingHeadersConfig(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithServerTimingHeadersConfig(ResponseHeadersPolicyServerTimingHeadersConfig&& value) { SetServerTimingHeadersConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicyCustomHeadersConfig& GetCustomHeadersConfig() const{ return m_customHeadersConfig; }
    inline bool CustomHeadersConfigHasBeenSet() const { return m_customHeadersConfigHasBeenSet; }
    inline void SetCustomHeadersConfig(const ResponseHeadersPolicyCustomHeadersConfig& value) { m_customHeadersConfigHasBeenSet = true; m_customHeadersConfig = value; }
    inline void SetCustomHeadersConfig(ResponseHeadersPolicyCustomHeadersConfig&& value) { m_customHeadersConfigHasBeenSet = true; m_customHeadersConfig = std::move(value); }
    inline ResponseHeadersPolicyConfig& WithCustomHeadersConfig(const ResponseHeadersPolicyCustomHeadersConfig& value) { SetCustomHeadersConfig(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithCustomHeadersConfig(ResponseHeadersPolicyCustomHeadersConfig&& value) { SetCustomHeadersConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of HTTP headers to remove from the HTTP
     * response.</p>
     */
    inline const ResponseHeadersPolicyRemoveHeadersConfig& GetRemoveHeadersConfig() const{ return m_removeHeadersConfig; }
    inline bool RemoveHeadersConfigHasBeenSet() const { return m_removeHeadersConfigHasBeenSet; }
    inline void SetRemoveHeadersConfig(const ResponseHeadersPolicyRemoveHeadersConfig& value) { m_removeHeadersConfigHasBeenSet = true; m_removeHeadersConfig = value; }
    inline void SetRemoveHeadersConfig(ResponseHeadersPolicyRemoveHeadersConfig&& value) { m_removeHeadersConfigHasBeenSet = true; m_removeHeadersConfig = std::move(value); }
    inline ResponseHeadersPolicyConfig& WithRemoveHeadersConfig(const ResponseHeadersPolicyRemoveHeadersConfig& value) { SetRemoveHeadersConfig(value); return *this;}
    inline ResponseHeadersPolicyConfig& WithRemoveHeadersConfig(ResponseHeadersPolicyRemoveHeadersConfig&& value) { SetRemoveHeadersConfig(std::move(value)); return *this;}
    ///@}
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

    ResponseHeadersPolicyRemoveHeadersConfig m_removeHeadersConfig;
    bool m_removeHeadersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
