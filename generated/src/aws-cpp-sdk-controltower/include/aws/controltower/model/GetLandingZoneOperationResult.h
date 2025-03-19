/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/LandingZoneOperationDetail.h>
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
namespace ControlTower
{
namespace Model
{
  class GetLandingZoneOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult() = default;
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline const LandingZoneOperationDetail& GetOperationDetails() const { return m_operationDetails; }
    template<typename OperationDetailsT = LandingZoneOperationDetail>
    void SetOperationDetails(OperationDetailsT&& value) { m_operationDetailsHasBeenSet = true; m_operationDetails = std::forward<OperationDetailsT>(value); }
    template<typename OperationDetailsT = LandingZoneOperationDetail>
    GetLandingZoneOperationResult& WithOperationDetails(OperationDetailsT&& value) { SetOperationDetails(std::forward<OperationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLandingZoneOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LandingZoneOperationDetail m_operationDetails;
    bool m_operationDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
