﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to list invalidations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidationsRequest">AWS
   * API Reference</a></p>
   */
  class ListInvalidations2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListInvalidations2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvalidations"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The distribution's ID.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    ListInvalidations2020_05_31Request& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListInvalidations2020_05_31Request& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListInvalidations2020_05_31Request& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
