﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicy.h>
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
  class AWS_CLOUDFRONT_API GetCachePolicy2020_05_31Result
  {
  public:
    GetCachePolicy2020_05_31Result();
    GetCachePolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCachePolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The cache policy.</p>
     */
    inline const CachePolicy& GetCachePolicy() const{ return m_cachePolicy; }

    /**
     * <p>The cache policy.</p>
     */
    inline void SetCachePolicy(const CachePolicy& value) { m_cachePolicy = value; }

    /**
     * <p>The cache policy.</p>
     */
    inline void SetCachePolicy(CachePolicy&& value) { m_cachePolicy = std::move(value); }

    /**
     * <p>The cache policy.</p>
     */
    inline GetCachePolicy2020_05_31Result& WithCachePolicy(const CachePolicy& value) { SetCachePolicy(value); return *this;}

    /**
     * <p>The cache policy.</p>
     */
    inline GetCachePolicy2020_05_31Result& WithCachePolicy(CachePolicy&& value) { SetCachePolicy(std::move(value)); return *this;}


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
    inline GetCachePolicy2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline GetCachePolicy2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the cache policy.</p>
     */
    inline GetCachePolicy2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    CachePolicy m_cachePolicy;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
