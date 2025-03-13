/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemListElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListCustomLineItemsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult() = default;
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>FreeFormLineItemListElements</code> received. </p>
     */
    inline const Aws::Vector<CustomLineItemListElement>& GetCustomLineItems() const { return m_customLineItems; }
    template<typename CustomLineItemsT = Aws::Vector<CustomLineItemListElement>>
    void SetCustomLineItems(CustomLineItemsT&& value) { m_customLineItemsHasBeenSet = true; m_customLineItems = std::forward<CustomLineItemsT>(value); }
    template<typename CustomLineItemsT = Aws::Vector<CustomLineItemListElement>>
    ListCustomLineItemsResult& WithCustomLineItems(CustomLineItemsT&& value) { SetCustomLineItems(std::forward<CustomLineItemsT>(value)); return *this;}
    template<typename CustomLineItemsT = CustomLineItemListElement>
    ListCustomLineItemsResult& AddCustomLineItems(CustomLineItemsT&& value) { m_customLineItemsHasBeenSet = true; m_customLineItems.emplace_back(std::forward<CustomLineItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used on subsequent calls to get custom line
     * items (FFLIs). </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomLineItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomLineItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomLineItemListElement> m_customLineItems;
    bool m_customLineItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
