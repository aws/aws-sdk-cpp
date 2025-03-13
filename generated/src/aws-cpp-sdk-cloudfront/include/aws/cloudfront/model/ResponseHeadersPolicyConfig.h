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
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A comment to describe the response headers policy.</p> <p>The comment cannot
     * be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ResponseHeadersPolicyConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name to identify the response headers policy.</p> <p>The name must be
     * unique for response headers policies in this Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResponseHeadersPolicyConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of HTTP response headers that are used for
     * cross-origin resource sharing (CORS).</p>
     */
    inline const ResponseHeadersPolicyCorsConfig& GetCorsConfig() const { return m_corsConfig; }
    inline bool CorsConfigHasBeenSet() const { return m_corsConfigHasBeenSet; }
    template<typename CorsConfigT = ResponseHeadersPolicyCorsConfig>
    void SetCorsConfig(CorsConfigT&& value) { m_corsConfigHasBeenSet = true; m_corsConfig = std::forward<CorsConfigT>(value); }
    template<typename CorsConfigT = ResponseHeadersPolicyCorsConfig>
    ResponseHeadersPolicyConfig& WithCorsConfig(CorsConfigT&& value) { SetCorsConfig(std::forward<CorsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of security-related HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicySecurityHeadersConfig& GetSecurityHeadersConfig() const { return m_securityHeadersConfig; }
    inline bool SecurityHeadersConfigHasBeenSet() const { return m_securityHeadersConfigHasBeenSet; }
    template<typename SecurityHeadersConfigT = ResponseHeadersPolicySecurityHeadersConfig>
    void SetSecurityHeadersConfig(SecurityHeadersConfigT&& value) { m_securityHeadersConfigHasBeenSet = true; m_securityHeadersConfig = std::forward<SecurityHeadersConfigT>(value); }
    template<typename SecurityHeadersConfigT = ResponseHeadersPolicySecurityHeadersConfig>
    ResponseHeadersPolicyConfig& WithSecurityHeadersConfig(SecurityHeadersConfigT&& value) { SetSecurityHeadersConfig(std::forward<SecurityHeadersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
     * responses sent from CloudFront.</p>
     */
    inline const ResponseHeadersPolicyServerTimingHeadersConfig& GetServerTimingHeadersConfig() const { return m_serverTimingHeadersConfig; }
    inline bool ServerTimingHeadersConfigHasBeenSet() const { return m_serverTimingHeadersConfigHasBeenSet; }
    template<typename ServerTimingHeadersConfigT = ResponseHeadersPolicyServerTimingHeadersConfig>
    void SetServerTimingHeadersConfig(ServerTimingHeadersConfigT&& value) { m_serverTimingHeadersConfigHasBeenSet = true; m_serverTimingHeadersConfig = std::forward<ServerTimingHeadersConfigT>(value); }
    template<typename ServerTimingHeadersConfigT = ResponseHeadersPolicyServerTimingHeadersConfig>
    ResponseHeadersPolicyConfig& WithServerTimingHeadersConfig(ServerTimingHeadersConfigT&& value) { SetServerTimingHeadersConfig(std::forward<ServerTimingHeadersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of custom HTTP response headers.</p>
     */
    inline const ResponseHeadersPolicyCustomHeadersConfig& GetCustomHeadersConfig() const { return m_customHeadersConfig; }
    inline bool CustomHeadersConfigHasBeenSet() const { return m_customHeadersConfigHasBeenSet; }
    template<typename CustomHeadersConfigT = ResponseHeadersPolicyCustomHeadersConfig>
    void SetCustomHeadersConfig(CustomHeadersConfigT&& value) { m_customHeadersConfigHasBeenSet = true; m_customHeadersConfig = std::forward<CustomHeadersConfigT>(value); }
    template<typename CustomHeadersConfigT = ResponseHeadersPolicyCustomHeadersConfig>
    ResponseHeadersPolicyConfig& WithCustomHeadersConfig(CustomHeadersConfigT&& value) { SetCustomHeadersConfig(std::forward<CustomHeadersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a set of HTTP headers to remove from the HTTP
     * response.</p>
     */
    inline const ResponseHeadersPolicyRemoveHeadersConfig& GetRemoveHeadersConfig() const { return m_removeHeadersConfig; }
    inline bool RemoveHeadersConfigHasBeenSet() const { return m_removeHeadersConfigHasBeenSet; }
    template<typename RemoveHeadersConfigT = ResponseHeadersPolicyRemoveHeadersConfig>
    void SetRemoveHeadersConfig(RemoveHeadersConfigT&& value) { m_removeHeadersConfigHasBeenSet = true; m_removeHeadersConfig = std::forward<RemoveHeadersConfigT>(value); }
    template<typename RemoveHeadersConfigT = ResponseHeadersPolicyRemoveHeadersConfig>
    ResponseHeadersPolicyConfig& WithRemoveHeadersConfig(RemoveHeadersConfigT&& value) { SetRemoveHeadersConfig(std::forward<RemoveHeadersConfigT>(value)); return *this;}
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
