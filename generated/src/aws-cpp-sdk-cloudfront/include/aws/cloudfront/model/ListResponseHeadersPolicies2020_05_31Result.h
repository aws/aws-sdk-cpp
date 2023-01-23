/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyList.h>
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


    /**
     * <p>A list of response headers policies.</p>
     */
    inline const ResponseHeadersPolicyList& GetResponseHeadersPolicyList() const{ return m_responseHeadersPolicyList; }

    /**
     * <p>A list of response headers policies.</p>
     */
    inline void SetResponseHeadersPolicyList(const ResponseHeadersPolicyList& value) { m_responseHeadersPolicyList = value; }

    /**
     * <p>A list of response headers policies.</p>
     */
    inline void SetResponseHeadersPolicyList(ResponseHeadersPolicyList&& value) { m_responseHeadersPolicyList = std::move(value); }

    /**
     * <p>A list of response headers policies.</p>
     */
    inline ListResponseHeadersPolicies2020_05_31Result& WithResponseHeadersPolicyList(const ResponseHeadersPolicyList& value) { SetResponseHeadersPolicyList(value); return *this;}

    /**
     * <p>A list of response headers policies.</p>
     */
    inline ListResponseHeadersPolicies2020_05_31Result& WithResponseHeadersPolicyList(ResponseHeadersPolicyList&& value) { SetResponseHeadersPolicyList(std::move(value)); return *this;}

  private:

    ResponseHeadersPolicyList m_responseHeadersPolicyList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
