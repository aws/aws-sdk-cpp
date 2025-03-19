/**
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
namespace CloudFront
{
namespace Model
{

  /**
   */
  class ListDistributionsByRealtimeLogConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionsByRealtimeLogConfig2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByRealtimeLogConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigName() const { return m_realtimeLogConfigName; }
    inline bool RealtimeLogConfigNameHasBeenSet() const { return m_realtimeLogConfigNameHasBeenSet; }
    template<typename RealtimeLogConfigNameT = Aws::String>
    void SetRealtimeLogConfigName(RealtimeLogConfigNameT&& value) { m_realtimeLogConfigNameHasBeenSet = true; m_realtimeLogConfigName = std::forward<RealtimeLogConfigNameT>(value); }
    template<typename RealtimeLogConfigNameT = Aws::String>
    ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigName(RealtimeLogConfigNameT&& value) { SetRealtimeLogConfigName(std::forward<RealtimeLogConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigArn() const { return m_realtimeLogConfigArn; }
    inline bool RealtimeLogConfigArnHasBeenSet() const { return m_realtimeLogConfigArnHasBeenSet; }
    template<typename RealtimeLogConfigArnT = Aws::String>
    void SetRealtimeLogConfigArn(RealtimeLogConfigArnT&& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = std::forward<RealtimeLogConfigArnT>(value); }
    template<typename RealtimeLogConfigArnT = Aws::String>
    ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigArn(RealtimeLogConfigArnT&& value) { SetRealtimeLogConfigArn(std::forward<RealtimeLogConfigArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_realtimeLogConfigName;
    bool m_realtimeLogConfigNameHasBeenSet = false;

    Aws::String m_realtimeLogConfigArn;
    bool m_realtimeLogConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
