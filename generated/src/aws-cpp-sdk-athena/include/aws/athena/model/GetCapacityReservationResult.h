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
    AWS_ATHENA_API GetCapacityReservationResult() = default;
    AWS_ATHENA_API GetCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested capacity reservation structure.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const { return m_capacityReservation; }
    template<typename CapacityReservationT = CapacityReservation>
    void SetCapacityReservation(CapacityReservationT&& value) { m_capacityReservationHasBeenSet = true; m_capacityReservation = std::forward<CapacityReservationT>(value); }
    template<typename CapacityReservationT = CapacityReservation>
    GetCapacityReservationResult& WithCapacityReservation(CapacityReservationT&& value) { SetCapacityReservation(std::forward<CapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCapacityReservationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CapacityReservation m_capacityReservation;
    bool m_capacityReservationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
