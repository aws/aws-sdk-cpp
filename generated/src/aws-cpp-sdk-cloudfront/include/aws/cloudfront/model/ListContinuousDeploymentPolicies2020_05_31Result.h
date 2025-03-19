/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyList.h>
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
  class ListContinuousDeploymentPolicies2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline const ContinuousDeploymentPolicyList& GetContinuousDeploymentPolicyList() const { return m_continuousDeploymentPolicyList; }
    template<typename ContinuousDeploymentPolicyListT = ContinuousDeploymentPolicyList>
    void SetContinuousDeploymentPolicyList(ContinuousDeploymentPolicyListT&& value) { m_continuousDeploymentPolicyListHasBeenSet = true; m_continuousDeploymentPolicyList = std::forward<ContinuousDeploymentPolicyListT>(value); }
    template<typename ContinuousDeploymentPolicyListT = ContinuousDeploymentPolicyList>
    ListContinuousDeploymentPolicies2020_05_31Result& WithContinuousDeploymentPolicyList(ContinuousDeploymentPolicyListT&& value) { SetContinuousDeploymentPolicyList(std::forward<ContinuousDeploymentPolicyListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContinuousDeploymentPolicies2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContinuousDeploymentPolicyList m_continuousDeploymentPolicyList;
    bool m_continuousDeploymentPolicyListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
