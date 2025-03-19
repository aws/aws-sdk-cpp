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
  class GetPricingPlanResult
  {
  public:
    AWS_IOTTWINMAKER_API GetPricingPlanResult() = default;
    AWS_IOTTWINMAKER_API GetPricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline const PricingPlan& GetCurrentPricingPlan() const { return m_currentPricingPlan; }
    template<typename CurrentPricingPlanT = PricingPlan>
    void SetCurrentPricingPlan(CurrentPricingPlanT&& value) { m_currentPricingPlanHasBeenSet = true; m_currentPricingPlan = std::forward<CurrentPricingPlanT>(value); }
    template<typename CurrentPricingPlanT = PricingPlan>
    GetPricingPlanResult& WithCurrentPricingPlan(CurrentPricingPlanT&& value) { SetCurrentPricingPlan(std::forward<CurrentPricingPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending pricing plan.</p>
     */
    inline const PricingPlan& GetPendingPricingPlan() const { return m_pendingPricingPlan; }
    template<typename PendingPricingPlanT = PricingPlan>
    void SetPendingPricingPlan(PendingPricingPlanT&& value) { m_pendingPricingPlanHasBeenSet = true; m_pendingPricingPlan = std::forward<PendingPricingPlanT>(value); }
    template<typename PendingPricingPlanT = PricingPlan>
    GetPricingPlanResult& WithPendingPricingPlan(PendingPricingPlanT&& value) { SetPendingPricingPlan(std::forward<PendingPricingPlanT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPricingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
