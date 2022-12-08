/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/PricingPlan.h>
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
    AWS_IOTTWINMAKER_API GetPricingPlanResult();
    AWS_IOTTWINMAKER_API GetPricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline const PricingPlan& GetCurrentPricingPlan() const{ return m_currentPricingPlan; }

    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline void SetCurrentPricingPlan(const PricingPlan& value) { m_currentPricingPlan = value; }

    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline void SetCurrentPricingPlan(PricingPlan&& value) { m_currentPricingPlan = std::move(value); }

    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline GetPricingPlanResult& WithCurrentPricingPlan(const PricingPlan& value) { SetCurrentPricingPlan(value); return *this;}

    /**
     * <p>The chosen pricing plan for the current billing cycle.</p>
     */
    inline GetPricingPlanResult& WithCurrentPricingPlan(PricingPlan&& value) { SetCurrentPricingPlan(std::move(value)); return *this;}


    /**
     * <p>The pending pricing plan.</p>
     */
    inline const PricingPlan& GetPendingPricingPlan() const{ return m_pendingPricingPlan; }

    /**
     * <p>The pending pricing plan.</p>
     */
    inline void SetPendingPricingPlan(const PricingPlan& value) { m_pendingPricingPlan = value; }

    /**
     * <p>The pending pricing plan.</p>
     */
    inline void SetPendingPricingPlan(PricingPlan&& value) { m_pendingPricingPlan = std::move(value); }

    /**
     * <p>The pending pricing plan.</p>
     */
    inline GetPricingPlanResult& WithPendingPricingPlan(const PricingPlan& value) { SetPendingPricingPlan(value); return *this;}

    /**
     * <p>The pending pricing plan.</p>
     */
    inline GetPricingPlanResult& WithPendingPricingPlan(PricingPlan&& value) { SetPendingPricingPlan(std::move(value)); return *this;}

  private:

    PricingPlan m_currentPricingPlan;

    PricingPlan m_pendingPricingPlan;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
