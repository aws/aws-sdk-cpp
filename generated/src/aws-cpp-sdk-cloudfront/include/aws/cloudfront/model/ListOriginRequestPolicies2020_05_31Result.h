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
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListOriginRequestPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of origin request policies.</p>
     */
    inline const OriginRequestPolicyList& GetOriginRequestPolicyList() const { return m_originRequestPolicyList; }
    template<typename OriginRequestPolicyListT = OriginRequestPolicyList>
    void SetOriginRequestPolicyList(OriginRequestPolicyListT&& value) { m_originRequestPolicyListHasBeenSet = true; m_originRequestPolicyList = std::forward<OriginRequestPolicyListT>(value); }
    template<typename OriginRequestPolicyListT = OriginRequestPolicyList>
    ListOriginRequestPolicies2020_05_31Result& WithOriginRequestPolicyList(OriginRequestPolicyListT&& value) { SetOriginRequestPolicyList(std::forward<OriginRequestPolicyListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOriginRequestPolicies2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyList m_originRequestPolicyList;
    bool m_originRequestPolicyListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
