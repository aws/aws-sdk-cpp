/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyList.h>
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
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result();
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListContinuousDeploymentPolicies2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline const ContinuousDeploymentPolicyList& GetContinuousDeploymentPolicyList() const{ return m_continuousDeploymentPolicyList; }

    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline void SetContinuousDeploymentPolicyList(const ContinuousDeploymentPolicyList& value) { m_continuousDeploymentPolicyList = value; }

    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline void SetContinuousDeploymentPolicyList(ContinuousDeploymentPolicyList&& value) { m_continuousDeploymentPolicyList = std::move(value); }

    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline ListContinuousDeploymentPolicies2020_05_31Result& WithContinuousDeploymentPolicyList(const ContinuousDeploymentPolicyList& value) { SetContinuousDeploymentPolicyList(value); return *this;}

    /**
     * <p>A list of continuous deployment policies.</p>
     */
    inline ListContinuousDeploymentPolicies2020_05_31Result& WithContinuousDeploymentPolicyList(ContinuousDeploymentPolicyList&& value) { SetContinuousDeploymentPolicyList(std::move(value)); return *this;}

  private:

    ContinuousDeploymentPolicyList m_continuousDeploymentPolicyList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
