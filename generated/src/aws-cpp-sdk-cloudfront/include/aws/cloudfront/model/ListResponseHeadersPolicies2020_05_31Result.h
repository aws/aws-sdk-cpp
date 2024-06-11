﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyList.h>
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
  class ListResponseHeadersPolicies2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result();
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of response headers policies.</p>
     */
    inline const ResponseHeadersPolicyList& GetResponseHeadersPolicyList() const{ return m_responseHeadersPolicyList; }
    inline void SetResponseHeadersPolicyList(const ResponseHeadersPolicyList& value) { m_responseHeadersPolicyList = value; }
    inline void SetResponseHeadersPolicyList(ResponseHeadersPolicyList&& value) { m_responseHeadersPolicyList = std::move(value); }
    inline ListResponseHeadersPolicies2020_05_31Result& WithResponseHeadersPolicyList(const ResponseHeadersPolicyList& value) { SetResponseHeadersPolicyList(value); return *this;}
    inline ListResponseHeadersPolicies2020_05_31Result& WithResponseHeadersPolicyList(ResponseHeadersPolicyList&& value) { SetResponseHeadersPolicyList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResponseHeadersPolicies2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResponseHeadersPolicies2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResponseHeadersPolicies2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyList m_responseHeadersPolicyList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
