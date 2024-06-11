/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
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
   * <p>A response headers policy.</p> <p>A response headers policy contains
   * information about a set of HTTP response headers.</p> <p>After you create a
   * response headers policy, you can use its ID to attach it to one or more cache
   * behaviors in a CloudFront distribution. When it's attached to a cache behavior,
   * the response headers policy affects the HTTP headers that CloudFront includes in
   * HTTP responses to requests that match the cache behavior. CloudFront adds or
   * removes response headers according to the configuration of the response headers
   * policy.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/modifying-response-headers.html">Adding
   * or removing HTTP headers in CloudFront responses</a> in the <i>Amazon CloudFront
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicy">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicy
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicy();
    AWS_CLOUDFRONT_API ResponseHeadersPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the response headers policy.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResponseHeadersPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResponseHeadersPolicy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResponseHeadersPolicy& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the response headers policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ResponseHeadersPolicy& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ResponseHeadersPolicy& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A response headers policy configuration.</p>
     */
    inline const ResponseHeadersPolicyConfig& GetResponseHeadersPolicyConfig() const{ return m_responseHeadersPolicyConfig; }
    inline bool ResponseHeadersPolicyConfigHasBeenSet() const { return m_responseHeadersPolicyConfigHasBeenSet; }
    inline void SetResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = value; }
    inline void SetResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = std::move(value); }
    inline ResponseHeadersPolicy& WithResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { SetResponseHeadersPolicyConfig(value); return *this;}
    inline ResponseHeadersPolicy& WithResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { SetResponseHeadersPolicyConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    ResponseHeadersPolicyConfig m_responseHeadersPolicyConfig;
    bool m_responseHeadersPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
