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
    AWS_CLOUDFRONT_API OriginRequestPolicy() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The unique identifier for the origin request policy.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OriginRequestPolicy& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the origin request policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    OriginRequestPolicy& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const { return m_originRequestPolicyConfig; }
    inline bool OriginRequestPolicyConfigHasBeenSet() const { return m_originRequestPolicyConfigHasBeenSet; }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    void SetOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::forward<OriginRequestPolicyConfigT>(value); }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    OriginRequestPolicy& WithOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { SetOriginRequestPolicyConfig(std::forward<OriginRequestPolicyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    OriginRequestPolicyConfig m_originRequestPolicyConfig;
    bool m_originRequestPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
