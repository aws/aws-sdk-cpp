/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicy.h>
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
  class CreateResponseHeadersPolicy2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateResponseHeadersPolicy2020_05_31Result() = default;
    AWS_CLOUDFRONT_API CreateResponseHeadersPolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateResponseHeadersPolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains a response headers policy.</p>
     */
    inline const ResponseHeadersPolicy& GetResponseHeadersPolicy() const { return m_responseHeadersPolicy; }
    template<typename ResponseHeadersPolicyT = ResponseHeadersPolicy>
    void SetResponseHeadersPolicy(ResponseHeadersPolicyT&& value) { m_responseHeadersPolicyHasBeenSet = true; m_responseHeadersPolicy = std::forward<ResponseHeadersPolicyT>(value); }
    template<typename ResponseHeadersPolicyT = ResponseHeadersPolicy>
    CreateResponseHeadersPolicy2020_05_31Result& WithResponseHeadersPolicy(ResponseHeadersPolicyT&& value) { SetResponseHeadersPolicy(std::forward<ResponseHeadersPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the response headers policy.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateResponseHeadersPolicy2020_05_31Result& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    CreateResponseHeadersPolicy2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResponseHeadersPolicy2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicy m_responseHeadersPolicy;
    bool m_responseHeadersPolicyHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
