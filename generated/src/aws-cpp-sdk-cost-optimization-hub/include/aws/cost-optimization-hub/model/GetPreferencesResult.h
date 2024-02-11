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
  class GetPreferencesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult();
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API GetPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline const MemberAccountDiscountVisibility& GetMemberAccountDiscountVisibility() const{ return m_memberAccountDiscountVisibility; }

    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { m_memberAccountDiscountVisibility = value; }

    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { m_memberAccountDiscountVisibility = std::move(value); }

    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline GetPreferencesResult& WithMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { SetMemberAccountDiscountVisibility(value); return *this;}

    /**
     * <p>Retrieves the status of the "member account discount visibility"
     * preference.</p>
     */
    inline GetPreferencesResult& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { SetMemberAccountDiscountVisibility(std::move(value)); return *this;}


    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline const SavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(const SavingsEstimationMode& value) { m_savingsEstimationMode = value; }

    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(SavingsEstimationMode&& value) { m_savingsEstimationMode = std::move(value); }

    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline GetPreferencesResult& WithSavingsEstimationMode(const SavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p>Retrieves the status of the "savings estimation mode" preference.</p>
     */
    inline GetPreferencesResult& WithSavingsEstimationMode(SavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility;

    SavingsEstimationMode m_savingsEstimationMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
