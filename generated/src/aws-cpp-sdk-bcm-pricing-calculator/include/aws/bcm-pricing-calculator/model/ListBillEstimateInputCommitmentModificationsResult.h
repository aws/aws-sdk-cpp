/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateInputCommitmentModificationSummary.h>
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
namespace BCMPricingCalculator
{
namespace Model
{
  class ListBillEstimateInputCommitmentModificationsResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputCommitmentModificationsResult();
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputCommitmentModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputCommitmentModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of input commitment modifications associated with the bill
     * estimate. </p>
     */
    inline const Aws::Vector<BillEstimateInputCommitmentModificationSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BillEstimateInputCommitmentModificationSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BillEstimateInputCommitmentModificationSummary>&& value) { m_items = std::move(value); }
    inline ListBillEstimateInputCommitmentModificationsResult& WithItems(const Aws::Vector<BillEstimateInputCommitmentModificationSummary>& value) { SetItems(value); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& WithItems(Aws::Vector<BillEstimateInputCommitmentModificationSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& AddItems(const BillEstimateInputCommitmentModificationSummary& value) { m_items.push_back(value); return *this; }
    inline ListBillEstimateInputCommitmentModificationsResult& AddItems(BillEstimateInputCommitmentModificationSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results, if any. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBillEstimateInputCommitmentModificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBillEstimateInputCommitmentModificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBillEstimateInputCommitmentModificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillEstimateInputCommitmentModificationSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
