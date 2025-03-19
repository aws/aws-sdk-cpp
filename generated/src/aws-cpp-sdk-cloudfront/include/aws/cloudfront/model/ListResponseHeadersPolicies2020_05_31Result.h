/**
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
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListResponseHeadersPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of response headers policies.</p>
     */
    inline const ResponseHeadersPolicyList& GetResponseHeadersPolicyList() const { return m_responseHeadersPolicyList; }
    template<typename ResponseHeadersPolicyListT = ResponseHeadersPolicyList>
    void SetResponseHeadersPolicyList(ResponseHeadersPolicyListT&& value) { m_responseHeadersPolicyListHasBeenSet = true; m_responseHeadersPolicyList = std::forward<ResponseHeadersPolicyListT>(value); }
    template<typename ResponseHeadersPolicyListT = ResponseHeadersPolicyList>
    ListResponseHeadersPolicies2020_05_31Result& WithResponseHeadersPolicyList(ResponseHeadersPolicyListT&& value) { SetResponseHeadersPolicyList(std::forward<ResponseHeadersPolicyListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResponseHeadersPolicies2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyList m_responseHeadersPolicyList;
    bool m_responseHeadersPolicyListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
