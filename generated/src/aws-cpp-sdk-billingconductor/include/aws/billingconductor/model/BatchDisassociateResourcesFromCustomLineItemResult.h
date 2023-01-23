/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult();
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API BatchDisassociateResourcesFromCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline const Aws::Vector<DisassociateResourceResponseElement>& GetSuccessfullyDisassociatedResources() const{ return m_successfullyDisassociatedResources; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline void SetSuccessfullyDisassociatedResources(const Aws::Vector<DisassociateResourceResponseElement>& value) { m_successfullyDisassociatedResources = value; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline void SetSuccessfullyDisassociatedResources(Aws::Vector<DisassociateResourceResponseElement>&& value) { m_successfullyDisassociatedResources = std::move(value); }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& WithSuccessfullyDisassociatedResources(const Aws::Vector<DisassociateResourceResponseElement>& value) { SetSuccessfullyDisassociatedResources(value); return *this;}

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& WithSuccessfullyDisassociatedResources(Aws::Vector<DisassociateResourceResponseElement>&& value) { SetSuccessfullyDisassociatedResources(std::move(value)); return *this;}

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& AddSuccessfullyDisassociatedResources(const DisassociateResourceResponseElement& value) { m_successfullyDisassociatedResources.push_back(value); return *this; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that's been disassociated from a percentage custom line item successfully. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& AddSuccessfullyDisassociatedResources(DisassociateResourceResponseElement&& value) { m_successfullyDisassociatedResources.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline const Aws::Vector<DisassociateResourceResponseElement>& GetFailedDisassociatedResources() const{ return m_failedDisassociatedResources; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline void SetFailedDisassociatedResources(const Aws::Vector<DisassociateResourceResponseElement>& value) { m_failedDisassociatedResources = value; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline void SetFailedDisassociatedResources(Aws::Vector<DisassociateResourceResponseElement>&& value) { m_failedDisassociatedResources = std::move(value); }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& WithFailedDisassociatedResources(const Aws::Vector<DisassociateResourceResponseElement>& value) { SetFailedDisassociatedResources(value); return *this;}

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& WithFailedDisassociatedResources(Aws::Vector<DisassociateResourceResponseElement>&& value) { SetFailedDisassociatedResources(std::move(value)); return *this;}

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& AddFailedDisassociatedResources(const DisassociateResourceResponseElement& value) { m_failedDisassociatedResources.push_back(value); return *this; }

    /**
     * <p> A list of <code>DisassociateResourceResponseElement</code> for each resource
     * that failed disassociation from a percentage custom line item. </p>
     */
    inline BatchDisassociateResourcesFromCustomLineItemResult& AddFailedDisassociatedResources(DisassociateResourceResponseElement&& value) { m_failedDisassociatedResources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DisassociateResourceResponseElement> m_successfullyDisassociatedResources;

    Aws::Vector<DisassociateResourceResponseElement> m_failedDisassociatedResources;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
