/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult();
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline const Aws::Vector<AssociateResourceResponseElement>& GetSuccessfullyAssociatedResources() const{ return m_successfullyAssociatedResources; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline void SetSuccessfullyAssociatedResources(const Aws::Vector<AssociateResourceResponseElement>& value) { m_successfullyAssociatedResources = value; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline void SetSuccessfullyAssociatedResources(Aws::Vector<AssociateResourceResponseElement>&& value) { m_successfullyAssociatedResources = std::move(value); }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& WithSuccessfullyAssociatedResources(const Aws::Vector<AssociateResourceResponseElement>& value) { SetSuccessfullyAssociatedResources(value); return *this;}

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& WithSuccessfullyAssociatedResources(Aws::Vector<AssociateResourceResponseElement>&& value) { SetSuccessfullyAssociatedResources(std::move(value)); return *this;}

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& AddSuccessfullyAssociatedResources(const AssociateResourceResponseElement& value) { m_successfullyAssociatedResources.push_back(value); return *this; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that's been associated to a percentage custom line item successfully. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& AddSuccessfullyAssociatedResources(AssociateResourceResponseElement&& value) { m_successfullyAssociatedResources.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline const Aws::Vector<AssociateResourceResponseElement>& GetFailedAssociatedResources() const{ return m_failedAssociatedResources; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline void SetFailedAssociatedResources(const Aws::Vector<AssociateResourceResponseElement>& value) { m_failedAssociatedResources = value; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline void SetFailedAssociatedResources(Aws::Vector<AssociateResourceResponseElement>&& value) { m_failedAssociatedResources = std::move(value); }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& WithFailedAssociatedResources(const Aws::Vector<AssociateResourceResponseElement>& value) { SetFailedAssociatedResources(value); return *this;}

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& WithFailedAssociatedResources(Aws::Vector<AssociateResourceResponseElement>&& value) { SetFailedAssociatedResources(std::move(value)); return *this;}

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& AddFailedAssociatedResources(const AssociateResourceResponseElement& value) { m_failedAssociatedResources.push_back(value); return *this; }

    /**
     * <p> A list of <code>AssociateResourceResponseElement</code> for each resource
     * that failed association to a percentage custom line item. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemResult& AddFailedAssociatedResources(AssociateResourceResponseElement&& value) { m_failedAssociatedResources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AssociateResourceResponseElement> m_successfullyAssociatedResources;

    Aws::Vector<AssociateResourceResponseElement> m_failedAssociatedResources;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
