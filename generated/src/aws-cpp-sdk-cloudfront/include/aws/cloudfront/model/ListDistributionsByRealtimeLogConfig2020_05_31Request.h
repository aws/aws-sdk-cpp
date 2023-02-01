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
    AWS_CLOUDFRONT_API ListDistributionsByRealtimeLogConfig2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByRealtimeLogConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distributions. The response includes distributions in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of distributions that you want in the response.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigName() const{ return m_realtimeLogConfigName; }

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline bool RealtimeLogConfigNameHasBeenSet() const { return m_realtimeLogConfigNameHasBeenSet; }

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline void SetRealtimeLogConfigName(const Aws::String& value) { m_realtimeLogConfigNameHasBeenSet = true; m_realtimeLogConfigName = value; }

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline void SetRealtimeLogConfigName(Aws::String&& value) { m_realtimeLogConfigNameHasBeenSet = true; m_realtimeLogConfigName = std::move(value); }

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline void SetRealtimeLogConfigName(const char* value) { m_realtimeLogConfigNameHasBeenSet = true; m_realtimeLogConfigName.assign(value); }

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigName(const Aws::String& value) { SetRealtimeLogConfigName(value); return *this;}

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigName(Aws::String&& value) { SetRealtimeLogConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the real-time log configuration whose associated distributions
     * you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigName(const char* value) { SetRealtimeLogConfigName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigArn() const{ return m_realtimeLogConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline bool RealtimeLogConfigArnHasBeenSet() const { return m_realtimeLogConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline void SetRealtimeLogConfigArn(const Aws::String& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline void SetRealtimeLogConfigArn(Aws::String&& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline void SetRealtimeLogConfigArn(const char* value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigArn(const Aws::String& value) { SetRealtimeLogConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigArn(Aws::String&& value) { SetRealtimeLogConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration whose
     * associated distributions you want to list.</p>
     */
    inline ListDistributionsByRealtimeLogConfig2020_05_31Request& WithRealtimeLogConfigArn(const char* value) { SetRealtimeLogConfigArn(value); return *this;}

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
