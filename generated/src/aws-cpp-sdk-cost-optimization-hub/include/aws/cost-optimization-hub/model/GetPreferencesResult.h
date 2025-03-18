﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
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
namespace CostOptimizationHub
{
namespace Model
{
  class GetPreferencesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult() = default;
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline SavingsEstimationMode GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
    inline void SetSavingsEstimationMode(SavingsEstimationMode value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }
    inline GetPreferencesResult& WithSavingsEstimationMode(SavingsEstimationMode value) { SetSavingsEstimationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline MemberAccountDiscountVisibility GetMemberAccountDiscountVisibility() const { return m_memberAccountDiscountVisibility; }
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { m_memberAccountDiscountVisibilityHasBeenSet = true; m_memberAccountDiscountVisibility = value; }
    inline GetPreferencesResult& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { SetMemberAccountDiscountVisibility(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SavingsEstimationMode m_savingsEstimationMode{SavingsEstimationMode::NOT_SET};
    bool m_savingsEstimationModeHasBeenSet = false;

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility{MemberAccountDiscountVisibility::NOT_SET};
    bool m_memberAccountDiscountVisibilityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
