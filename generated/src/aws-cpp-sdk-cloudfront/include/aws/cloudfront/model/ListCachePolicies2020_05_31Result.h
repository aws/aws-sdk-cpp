/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyList.h>
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
  class ListCachePolicies2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of cache policies.</p>
     */
    inline const CachePolicyList& GetCachePolicyList() const { return m_cachePolicyList; }
    template<typename CachePolicyListT = CachePolicyList>
    void SetCachePolicyList(CachePolicyListT&& value) { m_cachePolicyListHasBeenSet = true; m_cachePolicyList = std::forward<CachePolicyListT>(value); }
    template<typename CachePolicyListT = CachePolicyList>
    ListCachePolicies2020_05_31Result& WithCachePolicyList(CachePolicyListT&& value) { SetCachePolicyList(std::forward<CachePolicyListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCachePolicies2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CachePolicyList m_cachePolicyList;
    bool m_cachePolicyListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
