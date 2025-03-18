/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/PricingPlan.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class UpdatePricingPlanResult
  {
  public:
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult() = default;
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Update the current pricing plan.</p>
     */
    inline const PricingPlan& GetCurrentPricingPlan() const { return m_currentPricingPlan; }
    template<typename CurrentPricingPlanT = PricingPlan>
    void SetCurrentPricingPlan(CurrentPricingPlanT&& value) { m_currentPricingPlanHasBeenSet = true; m_currentPricingPlan = std::forward<CurrentPricingPlanT>(value); }
    template<typename CurrentPricingPlanT = PricingPlan>
    UpdatePricingPlanResult& WithCurrentPricingPlan(CurrentPricingPlanT&& value) { SetCurrentPricingPlan(std::forward<CurrentPricingPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline const PricingPlan& GetPendingPricingPlan() const { return m_pendingPricingPlan; }
    template<typename PendingPricingPlanT = PricingPlan>
    void SetPendingPricingPlan(PendingPricingPlanT&& value) { m_pendingPricingPlanHasBeenSet = true; m_pendingPricingPlan = std::forward<PendingPricingPlanT>(value); }
    template<typename PendingPricingPlanT = PricingPlan>
    UpdatePricingPlanResult& WithPendingPricingPlan(PendingPricingPlanT&& value) { SetPendingPricingPlan(std::forward<PendingPricingPlanT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePricingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PricingPlan m_currentPricingPlan;
    bool m_currentPricingPlanHasBeenSet = false;

    PricingPlan m_pendingPricingPlan;
    bool m_pendingPricingPlanHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
