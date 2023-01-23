/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class GetCachePolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The cache policy configuration.</p>
     */
    inline const CachePolicyConfig& GetCachePolicyConfig() const{ return m_cachePolicyConfig; }

    /**
     * <p>The cache policy configuration.</p>
     */
    inline void SetCachePolicyConfig(const CachePolicyConfig& value) { m_cachePolicyConfig = value; }

    /**
     * <p>The cache policy configuration.</p>
     */
    inline void SetCachePolicyConfig(CachePolicyConfig&& value) { m_cachePolicyConfig = std::move(value); }

    /**
     * <p>The cache policy configuration.</p>
     */
    inline GetCachePolicyConfig2020_05_31Result& WithCachePolicyConfig(const CachePolicyConfig& value) { SetCachePolicyConfig(value); return *this;}

    /**
     * <p>The cache policy configuration.</p>
     */
    inline GetCachePolicyConfig2020_05_31Result& WithCachePolicyConfig(CachePolicyConfig&& value) { SetCachePolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The current version of the cache policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline GetCachePolicyConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline GetCachePolicyConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline GetCachePolicyConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    CachePolicyConfig m_cachePolicyConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
