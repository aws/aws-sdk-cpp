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
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result();
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of cache policies.</p>
     */
    inline const CachePolicyList& GetCachePolicyList() const{ return m_cachePolicyList; }

    /**
     * <p>A list of cache policies.</p>
     */
    inline void SetCachePolicyList(const CachePolicyList& value) { m_cachePolicyList = value; }

    /**
     * <p>A list of cache policies.</p>
     */
    inline void SetCachePolicyList(CachePolicyList&& value) { m_cachePolicyList = std::move(value); }

    /**
     * <p>A list of cache policies.</p>
     */
    inline ListCachePolicies2020_05_31Result& WithCachePolicyList(const CachePolicyList& value) { SetCachePolicyList(value); return *this;}

    /**
     * <p>A list of cache policies.</p>
     */
    inline ListCachePolicies2020_05_31Result& WithCachePolicyList(CachePolicyList&& value) { SetCachePolicyList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCachePolicies2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCachePolicies2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCachePolicies2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CachePolicyList m_cachePolicyList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
