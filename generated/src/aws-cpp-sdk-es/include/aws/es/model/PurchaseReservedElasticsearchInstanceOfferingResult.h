/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Represents the output of a
   * <code>PurchaseReservedElasticsearchInstanceOffering</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOfferingResponse">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedElasticsearchInstanceOfferingResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult() = default;
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the reserved Elasticsearch instance which was purchased.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const { return m_reservedElasticsearchInstanceId; }
    template<typename ReservedElasticsearchInstanceIdT = Aws::String>
    void SetReservedElasticsearchInstanceId(ReservedElasticsearchInstanceIdT&& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = std::forward<ReservedElasticsearchInstanceIdT>(value); }
    template<typename ReservedElasticsearchInstanceIdT = Aws::String>
    PurchaseReservedElasticsearchInstanceOfferingResult& WithReservedElasticsearchInstanceId(ReservedElasticsearchInstanceIdT&& value) { SetReservedElasticsearchInstanceId(std::forward<ReservedElasticsearchInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    PurchaseReservedElasticsearchInstanceOfferingResult& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PurchaseReservedElasticsearchInstanceOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceId;
    bool m_reservedElasticsearchInstanceIdHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
