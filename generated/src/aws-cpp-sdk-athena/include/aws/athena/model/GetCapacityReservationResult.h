/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CapacityReservation.h>
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
namespace Athena
{
namespace Model
{
  class GetCapacityReservationResult
  {
  public:
    AWS_ATHENA_API GetCapacityReservationResult();
    AWS_ATHENA_API GetCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const{ return m_capacityReservation; }

    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline void SetCapacityReservation(const CapacityReservation& value) { m_capacityReservation = value; }

    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline void SetCapacityReservation(CapacityReservation&& value) { m_capacityReservation = std::move(value); }

    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline GetCapacityReservationResult& WithCapacityReservation(const CapacityReservation& value) { SetCapacityReservation(value); return *this;}

    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline GetCapacityReservationResult& WithCapacityReservation(CapacityReservation&& value) { SetCapacityReservation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCapacityReservationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCapacityReservationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCapacityReservationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CapacityReservation m_capacityReservation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
