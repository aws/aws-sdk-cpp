/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
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
  class GetOriginRequestPolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const { return m_originRequestPolicyConfig; }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    void SetOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::forward<OriginRequestPolicyConfigT>(value); }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    GetOriginRequestPolicyConfig2020_05_31Result& WithOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { SetOriginRequestPolicyConfig(std::forward<OriginRequestPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetOriginRequestPolicyConfig2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOriginRequestPolicyConfig2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyConfig m_originRequestPolicyConfig;
    bool m_originRequestPolicyConfigHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
