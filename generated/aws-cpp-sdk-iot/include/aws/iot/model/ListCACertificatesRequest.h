﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>Input for the ListCACertificates operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificatesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ListCACertificatesRequest : public IoTRequest
  {
  public:
    ListCACertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCACertificates"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The result page size.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The result page size.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The result page size.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The result page size.</p>
     */
    inline ListCACertificatesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListCACertificatesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListCACertificatesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListCACertificatesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Determines the order of the results.</p>
     */
    inline bool GetAscendingOrder() const{ return m_ascendingOrder; }

    /**
     * <p>Determines the order of the results.</p>
     */
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }

    /**
     * <p>Determines the order of the results.</p>
     */
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }

    /**
     * <p>Determines the order of the results.</p>
     */
    inline ListCACertificatesRequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}

  private:

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_ascendingOrder;
    bool m_ascendingOrderHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
