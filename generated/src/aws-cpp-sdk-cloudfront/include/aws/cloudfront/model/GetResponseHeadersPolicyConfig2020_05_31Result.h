/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
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
  class GetResponseHeadersPolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains a response headers policy.</p>
     */
    inline const ResponseHeadersPolicyConfig& GetResponseHeadersPolicyConfig() const { return m_responseHeadersPolicyConfig; }
    template<typename ResponseHeadersPolicyConfigT = ResponseHeadersPolicyConfig>
    void SetResponseHeadersPolicyConfig(ResponseHeadersPolicyConfigT&& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = std::forward<ResponseHeadersPolicyConfigT>(value); }
    template<typename ResponseHeadersPolicyConfigT = ResponseHeadersPolicyConfig>
    GetResponseHeadersPolicyConfig2020_05_31Result& WithResponseHeadersPolicyConfig(ResponseHeadersPolicyConfigT&& value) { SetResponseHeadersPolicyConfig(std::forward<ResponseHeadersPolicyConfigT>(value)); return *this;}
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
    GetResponseHeadersPolicyConfig2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResponseHeadersPolicyConfig2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyConfig m_responseHeadersPolicyConfig;
    bool m_responseHeadersPolicyConfigHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
