/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/DisassociateResourceResponseElement.h>
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
  class BatchDisassociateResourcesFromCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult() = default;
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline const Aws::Vector<DisassociateResourceResponseElement>& GetSuccessfullyDisassociatedResources() const { return m_successfullyDisassociatedResources; }
    template<typename SuccessfullyDisassociatedResourcesT = Aws::Vector<DisassociateResourceResponseElement>>
    void SetSuccessfullyDisassociatedResources(SuccessfullyDisassociatedResourcesT&& value) { m_successfullyDisassociatedResourcesHasBeenSet = true; m_successfullyDisassociatedResources = std::forward<SuccessfullyDisassociatedResourcesT>(value); }
    template<typename SuccessfullyDisassociatedResourcesT = Aws::Vector<DisassociateResourceResponseElement>>
    BatchDisassociateResourcesFromCustomLineItemResult& WithSuccessfullyDisassociatedResources(SuccessfullyDisassociatedResourcesT&& value) { SetSuccessfullyDisassociatedResources(std::forward<SuccessfullyDisassociatedResourcesT>(value)); return *this;}
    template<typename SuccessfullyDisassociatedResourcesT = DisassociateResourceResponseElement>
    BatchDisassociateResourcesFromCustomLineItemResult& AddSuccessfullyDisassociatedResources(SuccessfullyDisassociatedResourcesT&& value) { m_successfullyDisassociatedResourcesHasBeenSet = true; m_successfullyDisassociatedResources.emplace_back(std::forward<SuccessfullyDisassociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline const Aws::Vector<DisassociateResourceResponseElement>& GetFailedDisassociatedResources() const { return m_failedDisassociatedResources; }
    template<typename FailedDisassociatedResourcesT = Aws::Vector<DisassociateResourceResponseElement>>
    void SetFailedDisassociatedResources(FailedDisassociatedResourcesT&& value) { m_failedDisassociatedResourcesHasBeenSet = true; m_failedDisassociatedResources = std::forward<FailedDisassociatedResourcesT>(value); }
    template<typename FailedDisassociatedResourcesT = Aws::Vector<DisassociateResourceResponseElement>>
    BatchDisassociateResourcesFromCustomLineItemResult& WithFailedDisassociatedResources(FailedDisassociatedResourcesT&& value) { SetFailedDisassociatedResources(std::forward<FailedDisassociatedResourcesT>(value)); return *this;}
    template<typename FailedDisassociatedResourcesT = DisassociateResourceResponseElement>
    BatchDisassociateResourcesFromCustomLineItemResult& AddFailedDisassociatedResources(FailedDisassociatedResourcesT&& value) { m_failedDisassociatedResourcesHasBeenSet = true; m_failedDisassociatedResources.emplace_back(std::forward<FailedDisassociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDisassociateResourcesFromCustomLineItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DisassociateResourceResponseElement> m_successfullyDisassociatedResources;
    bool m_successfullyDisassociatedResourcesHasBeenSet = false;

    Aws::Vector<DisassociateResourceResponseElement> m_failedDisassociatedResources;
    bool m_failedDisassociatedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
