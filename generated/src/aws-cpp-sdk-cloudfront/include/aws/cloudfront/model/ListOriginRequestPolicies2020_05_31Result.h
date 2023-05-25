/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyList.h>
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
  class ListOriginRequestPolicies2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result();
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of origin request policies.</p>
     */
    inline const OriginRequestPolicyList& GetOriginRequestPolicyList() const{ return m_originRequestPolicyList; }

    /**
     * <p>A list of origin request policies.</p>
     */
    inline void SetOriginRequestPolicyList(const OriginRequestPolicyList& value) { m_originRequestPolicyList = value; }

    /**
     * <p>A list of origin request policies.</p>
     */
    inline void SetOriginRequestPolicyList(OriginRequestPolicyList&& value) { m_originRequestPolicyList = std::move(value); }

    /**
     * <p>A list of origin request policies.</p>
     */
    inline ListOriginRequestPolicies2020_05_31Result& WithOriginRequestPolicyList(const OriginRequestPolicyList& value) { SetOriginRequestPolicyList(value); return *this;}

    /**
     * <p>A list of origin request policies.</p>
     */
    inline ListOriginRequestPolicies2020_05_31Result& WithOriginRequestPolicyList(OriginRequestPolicyList&& value) { SetOriginRequestPolicyList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOriginRequestPolicies2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOriginRequestPolicies2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOriginRequestPolicies2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OriginRequestPolicyList m_originRequestPolicyList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
