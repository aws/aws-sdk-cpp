﻿/**
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
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingRequest();

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
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(const char* value) { SetReservationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
