/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicy.h>
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
  class CreateContinuousDeploymentPolicy2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result() = default;
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A continuous deployment policy.</p>
     */
    inline const ContinuousDeploymentPolicy& GetContinuousDeploymentPolicy() const { return m_continuousDeploymentPolicy; }
    template<typename ContinuousDeploymentPolicyT = ContinuousDeploymentPolicy>
    void SetContinuousDeploymentPolicy(ContinuousDeploymentPolicyT&& value) { m_continuousDeploymentPolicyHasBeenSet = true; m_continuousDeploymentPolicy = std::forward<ContinuousDeploymentPolicyT>(value); }
    template<typename ContinuousDeploymentPolicyT = ContinuousDeploymentPolicy>
    CreateContinuousDeploymentPolicy2020_05_31Result& WithContinuousDeploymentPolicy(ContinuousDeploymentPolicyT&& value) { SetContinuousDeploymentPolicy(std::forward<ContinuousDeploymentPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the continuous deployment policy.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateContinuousDeploymentPolicy2020_05_31Result& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    CreateContinuousDeploymentPolicy2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContinuousDeploymentPolicy2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContinuousDeploymentPolicy m_continuousDeploymentPolicy;
    bool m_continuousDeploymentPolicyHasBeenSet = false;

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
