/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingRequest : public ElasticsearchServiceRequest
  {
  public:
    PurchaseReservedElasticsearchInstanceOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedElasticsearchInstanceOffering"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reserved Elasticsearch instance offering to purchase.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}


    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of Elasticsearch instances to reserve.</p>
     */
    inline PurchaseReservedElasticsearchInstanceOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
