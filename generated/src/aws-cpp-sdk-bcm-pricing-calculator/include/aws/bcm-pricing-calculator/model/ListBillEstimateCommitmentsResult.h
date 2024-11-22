/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateCommitmentSummary.h>
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
  class ListBillEstimateCommitmentsResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateCommitmentsResult();
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateCommitmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateCommitmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of commitments associated with the bill estimate. </p>
     */
    inline const Aws::Vector<BillEstimateCommitmentSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BillEstimateCommitmentSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BillEstimateCommitmentSummary>&& value) { m_items = std::move(value); }
    inline ListBillEstimateCommitmentsResult& WithItems(const Aws::Vector<BillEstimateCommitmentSummary>& value) { SetItems(value); return *this;}
    inline ListBillEstimateCommitmentsResult& WithItems(Aws::Vector<BillEstimateCommitmentSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListBillEstimateCommitmentsResult& AddItems(const BillEstimateCommitmentSummary& value) { m_items.push_back(value); return *this; }
    inline ListBillEstimateCommitmentsResult& AddItems(BillEstimateCommitmentSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results, if any. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBillEstimateCommitmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillEstimateCommitmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillEstimateCommitmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBillEstimateCommitmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBillEstimateCommitmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBillEstimateCommitmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillEstimateCommitmentSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
