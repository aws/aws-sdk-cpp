/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemVersionListElement.h>
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
  class ListCustomLineItemVersionsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult() = default;
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>CustomLineItemVersionListElements</code> that are
     * received.</p>
     */
    inline const Aws::Vector<CustomLineItemVersionListElement>& GetCustomLineItemVersions() const { return m_customLineItemVersions; }
    template<typename CustomLineItemVersionsT = Aws::Vector<CustomLineItemVersionListElement>>
    void SetCustomLineItemVersions(CustomLineItemVersionsT&& value) { m_customLineItemVersionsHasBeenSet = true; m_customLineItemVersions = std::forward<CustomLineItemVersionsT>(value); }
    template<typename CustomLineItemVersionsT = Aws::Vector<CustomLineItemVersionListElement>>
    ListCustomLineItemVersionsResult& WithCustomLineItemVersions(CustomLineItemVersionsT&& value) { SetCustomLineItemVersions(std::forward<CustomLineItemVersionsT>(value)); return *this;}
    template<typename CustomLineItemVersionsT = CustomLineItemVersionListElement>
    ListCustomLineItemVersionsResult& AddCustomLineItemVersions(CustomLineItemVersionsT&& value) { m_customLineItemVersionsHasBeenSet = true; m_customLineItemVersions.emplace_back(std::forward<CustomLineItemVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomLineItemVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomLineItemVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomLineItemVersionListElement> m_customLineItemVersions;
    bool m_customLineItemVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
