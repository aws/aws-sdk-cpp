/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyType.h>
#include <aws/cloudfront/model/CachePolicy.h>
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
   * <p>Contains a cache policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachePolicySummary">AWS
   * API Reference</a></p>
   */
  class CachePolicySummary
  {
  public:
    AWS_CLOUDFRONT_API CachePolicySummary();
    AWS_CLOUDFRONT_API CachePolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachePolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of cache policy, either <code>managed</code> (created by Amazon Web
     * Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline const CachePolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CachePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CachePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CachePolicySummary& WithType(const CachePolicyType& value) { SetType(value); return *this;}
    inline CachePolicySummary& WithType(CachePolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache policy.</p>
     */
    inline const CachePolicy& GetCachePolicy() const{ return m_cachePolicy; }
    inline bool CachePolicyHasBeenSet() const { return m_cachePolicyHasBeenSet; }
    inline void SetCachePolicy(const CachePolicy& value) { m_cachePolicyHasBeenSet = true; m_cachePolicy = value; }
    inline void SetCachePolicy(CachePolicy&& value) { m_cachePolicyHasBeenSet = true; m_cachePolicy = std::move(value); }
    inline CachePolicySummary& WithCachePolicy(const CachePolicy& value) { SetCachePolicy(value); return *this;}
    inline CachePolicySummary& WithCachePolicy(CachePolicy&& value) { SetCachePolicy(std::move(value)); return *this;}
    ///@}
  private:

    CachePolicyType m_type;
    bool m_typeHasBeenSet = false;

    CachePolicy m_cachePolicy;
    bool m_cachePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
