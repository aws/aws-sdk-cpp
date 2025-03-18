/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/AssociateResourceResponseElement.h>
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
  class BatchAssociateResourcesToCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult() = default;
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline const Aws::Vector<AssociateResourceResponseElement>& GetSuccessfullyAssociatedResources() const { return m_successfullyAssociatedResources; }
    template<typename SuccessfullyAssociatedResourcesT = Aws::Vector<AssociateResourceResponseElement>>
    void SetSuccessfullyAssociatedResources(SuccessfullyAssociatedResourcesT&& value) { m_successfullyAssociatedResourcesHasBeenSet = true; m_successfullyAssociatedResources = std::forward<SuccessfullyAssociatedResourcesT>(value); }
    template<typename SuccessfullyAssociatedResourcesT = Aws::Vector<AssociateResourceResponseElement>>
    BatchAssociateResourcesToCustomLineItemResult& WithSuccessfullyAssociatedResources(SuccessfullyAssociatedResourcesT&& value) { SetSuccessfullyAssociatedResources(std::forward<SuccessfullyAssociatedResourcesT>(value)); return *this;}
    template<typename SuccessfullyAssociatedResourcesT = AssociateResourceResponseElement>
    BatchAssociateResourcesToCustomLineItemResult& AddSuccessfullyAssociatedResources(SuccessfullyAssociatedResourcesT&& value) { m_successfullyAssociatedResourcesHasBeenSet = true; m_successfullyAssociatedResources.emplace_back(std::forward<SuccessfullyAssociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline const Aws::Vector<AssociateResourceResponseElement>& GetFailedAssociatedResources() const { return m_failedAssociatedResources; }
    template<typename FailedAssociatedResourcesT = Aws::Vector<AssociateResourceResponseElement>>
    void SetFailedAssociatedResources(FailedAssociatedResourcesT&& value) { m_failedAssociatedResourcesHasBeenSet = true; m_failedAssociatedResources = std::forward<FailedAssociatedResourcesT>(value); }
    template<typename FailedAssociatedResourcesT = Aws::Vector<AssociateResourceResponseElement>>
    BatchAssociateResourcesToCustomLineItemResult& WithFailedAssociatedResources(FailedAssociatedResourcesT&& value) { SetFailedAssociatedResources(std::forward<FailedAssociatedResourcesT>(value)); return *this;}
    template<typename FailedAssociatedResourcesT = AssociateResourceResponseElement>
    BatchAssociateResourcesToCustomLineItemResult& AddFailedAssociatedResources(FailedAssociatedResourcesT&& value) { m_failedAssociatedResourcesHasBeenSet = true; m_failedAssociatedResources.emplace_back(std::forward<FailedAssociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateResourcesToCustomLineItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociateResourceResponseElement> m_successfullyAssociatedResources;
    bool m_successfullyAssociatedResourcesHasBeenSet = false;

    Aws::Vector<AssociateResourceResponseElement> m_failedAssociatedResources;
    bool m_failedAssociatedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
