/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/DistributionTenantAssociationFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class ListDistributionTenants2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionTenants2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionTenants"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const DistributionTenantAssociationFilter& GetAssociationFilter() const { return m_associationFilter; }
    inline bool AssociationFilterHasBeenSet() const { return m_associationFilterHasBeenSet; }
    template<typename AssociationFilterT = DistributionTenantAssociationFilter>
    void SetAssociationFilter(AssociationFilterT&& value) { m_associationFilterHasBeenSet = true; m_associationFilter = std::forward<AssociationFilterT>(value); }
    template<typename AssociationFilterT = DistributionTenantAssociationFilter>
    ListDistributionTenants2020_05_31Request& WithAssociationFilter(AssociationFilterT&& value) { SetAssociationFilter(std::forward<AssociationFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListDistributionTenants2020_05_31Request& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of distribution tenants to return.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListDistributionTenants2020_05_31Request& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    DistributionTenantAssociationFilter m_associationFilter;
    bool m_associationFilterHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
