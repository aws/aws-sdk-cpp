/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResponseElement.h>
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
  class ListResourcesAssociatedToCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult() = default;
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The custom line item ARN for which the resource associations are listed.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListResourcesAssociatedToCustomLineItemResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of
     * <code>ListResourcesAssociatedToCustomLineItemResponseElement</code> for each
     * resource association retrieved. </p>
     */
    inline const Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>& GetAssociatedResources() const { return m_associatedResources; }
    template<typename AssociatedResourcesT = Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>>
    void SetAssociatedResources(AssociatedResourcesT&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = std::forward<AssociatedResourcesT>(value); }
    template<typename AssociatedResourcesT = Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>>
    ListResourcesAssociatedToCustomLineItemResult& WithAssociatedResources(AssociatedResourcesT&& value) { SetAssociatedResources(std::forward<AssociatedResourcesT>(value)); return *this;}
    template<typename AssociatedResourcesT = ListResourcesAssociatedToCustomLineItemResponseElement>
    ListResourcesAssociatedToCustomLineItemResult& AddAssociatedResources(AssociatedResourcesT&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.emplace_back(std::forward<AssociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token to be used in subsequent requests to retrieve
     * additional results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcesAssociatedToCustomLineItemResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcesAssociatedToCustomLineItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement> m_associatedResources;
    bool m_associatedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
