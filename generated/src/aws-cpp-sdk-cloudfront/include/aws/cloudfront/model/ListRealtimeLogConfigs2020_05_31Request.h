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
   */
  class ListRealtimeLogConfigs2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRealtimeLogConfigs"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of real-time log configurations that you want in the
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }
    inline ListRealtimeLogConfigs2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListRealtimeLogConfigs2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListRealtimeLogConfigs2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of real-time log configurations. The response includes real-time log
     * configurations in the list that occur after the marker. To get the next page of
     * the list, set this field's value to the value of <code>NextMarker</code> from
     * the current page's response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListRealtimeLogConfigs2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListRealtimeLogConfigs2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListRealtimeLogConfigs2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
