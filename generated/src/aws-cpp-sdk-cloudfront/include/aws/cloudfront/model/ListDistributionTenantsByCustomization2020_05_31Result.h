/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/DistributionTenantSummary.h>
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
  class ListDistributionTenantsByCustomization2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionTenantsByCustomization2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListDistributionTenantsByCustomization2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListDistributionTenantsByCustomization2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A token used for pagination of results returned in the response. You can use
     * the token from the previous request to define where the current request should
     * begin.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListDistributionTenantsByCustomization2020_05_31Result& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of distribution tenants with the specified customization.</p>
     */
    inline const Aws::Vector<DistributionTenantSummary>& GetDistributionTenantList() const { return m_distributionTenantList; }
    template<typename DistributionTenantListT = Aws::Vector<DistributionTenantSummary>>
    void SetDistributionTenantList(DistributionTenantListT&& value) { m_distributionTenantListHasBeenSet = true; m_distributionTenantList = std::forward<DistributionTenantListT>(value); }
    template<typename DistributionTenantListT = Aws::Vector<DistributionTenantSummary>>
    ListDistributionTenantsByCustomization2020_05_31Result& WithDistributionTenantList(DistributionTenantListT&& value) { SetDistributionTenantList(std::forward<DistributionTenantListT>(value)); return *this;}
    template<typename DistributionTenantListT = DistributionTenantSummary>
    ListDistributionTenantsByCustomization2020_05_31Result& AddDistributionTenantList(DistributionTenantListT&& value) { m_distributionTenantListHasBeenSet = true; m_distributionTenantList.emplace_back(std::forward<DistributionTenantListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDistributionTenantsByCustomization2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<DistributionTenantSummary> m_distributionTenantList;
    bool m_distributionTenantListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
