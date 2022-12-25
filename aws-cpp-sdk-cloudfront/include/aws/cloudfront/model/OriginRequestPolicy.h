/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
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
   * <p>An origin request policy.</p> <p>When it's attached to a cache behavior, the
   * origin request policy determines the values that CloudFront includes in requests
   * that it sends to the origin. Each request that CloudFront sends to the origin
   * includes the following:</p> <ul> <li> <p>The request body and the URL path
   * (without the domain name) from the viewer request.</p> </li> <li> <p>The headers
   * that CloudFront automatically includes in every origin request, including
   * <code>Host</code>, <code>User-Agent</code>, and <code>X-Amz-Cf-Id</code>.</p>
   * </li> <li> <p>All HTTP headers, cookies, and URL query strings that are
   * specified in the cache policy or the origin request policy. These can include
   * items from the viewer request and, in the case of headers, additional ones that
   * are added by CloudFront.</p> </li> </ul> <p>CloudFront sends a request when it
   * can't find an object in its cache that matches the request. If you want to send
   * values to the origin and also include them in the cache key, use
   * <code>CachePolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicy">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicy
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicy();
    AWS_CLOUDFRONT_API OriginRequestPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline OriginRequestPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline OriginRequestPolicy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline OriginRequestPolicy& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline OriginRequestPolicy& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline OriginRequestPolicy& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const{ return m_originRequestPolicyConfig; }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline bool OriginRequestPolicyConfigHasBeenSet() const { return m_originRequestPolicyConfigHasBeenSet; }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = value; }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::move(value); }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline OriginRequestPolicy& WithOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { SetOriginRequestPolicyConfig(value); return *this;}

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline OriginRequestPolicy& WithOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { SetOriginRequestPolicyConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    OriginRequestPolicyConfig m_originRequestPolicyConfig;
    bool m_originRequestPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
