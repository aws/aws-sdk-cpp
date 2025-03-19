/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for parameters to
   * <code>PurchaseReservedElasticsearchInstanceOffering</code></p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedElasticsearchInstanceOfferingRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedElasticsearchInstanceOffering"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const { return m_reservedElasticsearchInstanceOfferingId; }
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    void SetReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::forward<ReservedElasticsearchInstanceOfferingIdT>(value); }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { SetReservedElasticsearchInstanceOfferingId(std::forward<ReservedElasticsearchInstanceOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
