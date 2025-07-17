/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/DistributionResourceId.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class ListDomainConflicts2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListDomainConflicts2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainConflicts"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The domain to check for conflicts.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ListDomainConflicts2020_05_31Request& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution resource identifier. This can be the standard distribution
     * or distribution tenant that has a valid certificate, which covers the domain
     * that you specify.</p>
     */
    inline const DistributionResourceId& GetDomainControlValidationResource() const { return m_domainControlValidationResource; }
    inline bool DomainControlValidationResourceHasBeenSet() const { return m_domainControlValidationResourceHasBeenSet; }
    template<typename DomainControlValidationResourceT = DistributionResourceId>
    void SetDomainControlValidationResource(DomainControlValidationResourceT&& value) { m_domainControlValidationResourceHasBeenSet = true; m_domainControlValidationResource = std::forward<DomainControlValidationResourceT>(value); }
    template<typename DomainControlValidationResourceT = DistributionResourceId>
    ListDomainConflicts2020_05_31Request& WithDomainControlValidationResource(DomainControlValidationResourceT&& value) { SetDomainControlValidationResource(std::forward<DomainControlValidationResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of domain conflicts to return.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListDomainConflicts2020_05_31Request& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of domain conflicts.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListDomainConflicts2020_05_31Request& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    DistributionResourceId m_domainControlValidationResource;
    bool m_domainControlValidationResourceHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
