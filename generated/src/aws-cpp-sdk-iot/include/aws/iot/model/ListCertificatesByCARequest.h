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
   * <p>The input to the ListCertificatesByCA operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCARequest">AWS
   * API Reference</a></p>
   */
  class ListCertificatesByCARequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListCertificatesByCARequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificatesByCA"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the CA certificate. This operation will list all registered device
     * certificate that were signed by this CA certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const { return m_caCertificateId; }
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }
    template<typename CaCertificateIdT = Aws::String>
    void SetCaCertificateId(CaCertificateIdT&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::forward<CaCertificateIdT>(value); }
    template<typename CaCertificateIdT = Aws::String>
    ListCertificatesByCARequest& WithCaCertificateId(CaCertificateIdT&& value) { SetCaCertificateId(std::forward<CaCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result page size.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListCertificatesByCARequest& WithPageSize(int value) { SetPageSize(value); return *this;}
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
    ListCertificatesByCARequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the order for results. If True, the results are returned in
     * ascending order, based on the creation date.</p>
     */
    inline bool GetAscendingOrder() const { return m_ascendingOrder; }
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }
    inline ListCertificatesByCARequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_ascendingOrder{false};
    bool m_ascendingOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
