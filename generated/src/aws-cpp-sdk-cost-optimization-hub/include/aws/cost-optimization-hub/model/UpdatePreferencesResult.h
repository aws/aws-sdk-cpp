/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
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
  class UpdatePreferencesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult();
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline const MemberAccountDiscountVisibility& GetMemberAccountDiscountVisibility() const{ return m_memberAccountDiscountVisibility; }

    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { m_memberAccountDiscountVisibility = value; }

    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { m_memberAccountDiscountVisibility = std::move(value); }

    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline UpdatePreferencesResult& WithMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { SetMemberAccountDiscountVisibility(value); return *this;}

    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline UpdatePreferencesResult& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { SetMemberAccountDiscountVisibility(std::move(value)); return *this;}


    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline const SavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(const SavingsEstimationMode& value) { m_savingsEstimationMode = value; }

    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(SavingsEstimationMode&& value) { m_savingsEstimationMode = std::move(value); }

    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline UpdatePreferencesResult& WithSavingsEstimationMode(const SavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline UpdatePreferencesResult& WithSavingsEstimationMode(SavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility;

    SavingsEstimationMode m_savingsEstimationMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
