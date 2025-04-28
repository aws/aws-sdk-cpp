/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionTenant.h>
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
  class GetDistributionTenantByDomain2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetDistributionTenantByDomain2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetDistributionTenantByDomain2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetDistributionTenantByDomain2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DistributionTenant& GetDistributionTenant() const { return m_distributionTenant; }
    template<typename DistributionTenantT = DistributionTenant>
    void SetDistributionTenant(DistributionTenantT&& value) { m_distributionTenantHasBeenSet = true; m_distributionTenant = std::forward<DistributionTenantT>(value); }
    template<typename DistributionTenantT = DistributionTenant>
    GetDistributionTenantByDomain2020_05_31Result& WithDistributionTenant(DistributionTenantT&& value) { SetDistributionTenant(std::forward<DistributionTenantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the distribution tenant.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetDistributionTenantByDomain2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDistributionTenantByDomain2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DistributionTenant m_distributionTenant;
    bool m_distributionTenantHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
