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
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetCachePolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The cache policy configuration.</p>
     */
    inline const CachePolicyConfig& GetCachePolicyConfig() const { return m_cachePolicyConfig; }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    void SetCachePolicyConfig(CachePolicyConfigT&& value) { m_cachePolicyConfigHasBeenSet = true; m_cachePolicyConfig = std::forward<CachePolicyConfigT>(value); }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    GetCachePolicyConfig2020_05_31Result& WithCachePolicyConfig(CachePolicyConfigT&& value) { SetCachePolicyConfig(std::forward<CachePolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the cache policy.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetCachePolicyConfig2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCachePolicyConfig2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CachePolicyConfig m_cachePolicyConfig;
    bool m_cachePolicyConfigHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
