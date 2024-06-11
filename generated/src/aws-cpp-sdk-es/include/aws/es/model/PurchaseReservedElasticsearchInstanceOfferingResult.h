﻿/**
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
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult();
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API PurchaseReservedElasticsearchInstanceOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the reserved Elasticsearch instance which was purchased.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const{ return m_reservedElasticsearchInstanceId; }
    inline void SetReservedElasticsearchInstanceId(const Aws::String& value) { m_reservedElasticsearchInstanceId = value; }
    inline void SetReservedElasticsearchInstanceId(Aws::String&& value) { m_reservedElasticsearchInstanceId = std::move(value); }
    inline void SetReservedElasticsearchInstanceId(const char* value) { m_reservedElasticsearchInstanceId.assign(value); }
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservedElasticsearchInstanceId(const Aws::String& value) { SetReservedElasticsearchInstanceId(value); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservedElasticsearchInstanceId(Aws::String&& value) { SetReservedElasticsearchInstanceId(std::move(value)); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservedElasticsearchInstanceId(const char* value) { SetReservedElasticsearchInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }
    inline void SetReservationName(const Aws::String& value) { m_reservationName = value; }
    inline void SetReservationName(Aws::String&& value) { m_reservationName = std::move(value); }
    inline void SetReservationName(const char* value) { m_reservationName.assign(value); }
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithReservationName(const char* value) { SetReservationName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PurchaseReservedElasticsearchInstanceOfferingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceId;

    Aws::String m_reservationName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
