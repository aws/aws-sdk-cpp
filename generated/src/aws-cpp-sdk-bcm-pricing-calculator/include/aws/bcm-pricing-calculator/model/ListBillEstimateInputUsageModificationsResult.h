/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateInputUsageModificationSummary.h>
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
  class ListBillEstimateInputUsageModificationsResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputUsageModificationsResult();
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputUsageModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimateInputUsageModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of input usage modifications associated with the bill estimate.
     * </p>
     */
    inline const Aws::Vector<BillEstimateInputUsageModificationSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BillEstimateInputUsageModificationSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BillEstimateInputUsageModificationSummary>&& value) { m_items = std::move(value); }
    inline ListBillEstimateInputUsageModificationsResult& WithItems(const Aws::Vector<BillEstimateInputUsageModificationSummary>& value) { SetItems(value); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& WithItems(Aws::Vector<BillEstimateInputUsageModificationSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& AddItems(const BillEstimateInputUsageModificationSummary& value) { m_items.push_back(value); return *this; }
    inline ListBillEstimateInputUsageModificationsResult& AddItems(BillEstimateInputUsageModificationSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results, if any. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBillEstimateInputUsageModificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBillEstimateInputUsageModificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBillEstimateInputUsageModificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillEstimateInputUsageModificationSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
