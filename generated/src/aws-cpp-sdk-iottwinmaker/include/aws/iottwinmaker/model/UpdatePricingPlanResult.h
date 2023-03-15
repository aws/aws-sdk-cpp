﻿/**
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
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult();
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API UpdatePricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Update the current pricing plan.</p>
     */
    inline const PricingPlan& GetCurrentPricingPlan() const{ return m_currentPricingPlan; }

    /**
     * <p>Update the current pricing plan.</p>
     */
    inline void SetCurrentPricingPlan(const PricingPlan& value) { m_currentPricingPlan = value; }

    /**
     * <p>Update the current pricing plan.</p>
     */
    inline void SetCurrentPricingPlan(PricingPlan&& value) { m_currentPricingPlan = std::move(value); }

    /**
     * <p>Update the current pricing plan.</p>
     */
    inline UpdatePricingPlanResult& WithCurrentPricingPlan(const PricingPlan& value) { SetCurrentPricingPlan(value); return *this;}

    /**
     * <p>Update the current pricing plan.</p>
     */
    inline UpdatePricingPlanResult& WithCurrentPricingPlan(PricingPlan&& value) { SetCurrentPricingPlan(std::move(value)); return *this;}


    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline const PricingPlan& GetPendingPricingPlan() const{ return m_pendingPricingPlan; }

    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline void SetPendingPricingPlan(const PricingPlan& value) { m_pendingPricingPlan = value; }

    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline void SetPendingPricingPlan(PricingPlan&& value) { m_pendingPricingPlan = std::move(value); }

    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline UpdatePricingPlanResult& WithPendingPricingPlan(const PricingPlan& value) { SetPendingPricingPlan(value); return *this;}

    /**
     * <p>Update the pending pricing plan.</p>
     */
    inline UpdatePricingPlanResult& WithPendingPricingPlan(PricingPlan&& value) { SetPendingPricingPlan(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePricingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePricingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePricingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PricingPlan m_currentPricingPlan;

    PricingPlan m_pendingPricingPlan;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
