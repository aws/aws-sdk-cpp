﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillScenarioSummary.h>
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
  class ListBillScenariosResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillScenariosResult() = default;
    AWS_BCMPRICINGCALCULATOR_API ListBillScenariosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API ListBillScenariosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of bill scenarios for the account. </p>
     */
    inline const Aws::Vector<BillScenarioSummary>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<BillScenarioSummary>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<BillScenarioSummary>>
    ListBillScenariosResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = BillScenarioSummary>
    ListBillScenariosResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results, if any. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillScenariosResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBillScenariosResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BillScenarioSummary> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
