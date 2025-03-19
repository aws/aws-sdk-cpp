/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListCustomLineItemChargeDetails.h>
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
  class UpdateCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult() = default;
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateCustomLineItemResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
    template<typename BillingGroupArnT = Aws::String>
    void SetBillingGroupArn(BillingGroupArnT&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::forward<BillingGroupArnT>(value); }
    template<typename BillingGroupArnT = Aws::String>
    UpdateCustomLineItemResult& WithBillingGroupArn(BillingGroupArnT&& value) { SetBillingGroupArn(std::forward<BillingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCustomLineItemResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCustomLineItemResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const { return m_chargeDetails; }
    template<typename ChargeDetailsT = ListCustomLineItemChargeDetails>
    void SetChargeDetails(ChargeDetailsT&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::forward<ChargeDetailsT>(value); }
    template<typename ChargeDetailsT = ListCustomLineItemChargeDetails>
    UpdateCustomLineItemResult& WithChargeDetails(ChargeDetailsT&& value) { SetChargeDetails(std::forward<ChargeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the custom line item was modified. </p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline UpdateCustomLineItemResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of resources that are associated to the custom line item. </p>
     */
    inline long long GetAssociationSize() const { return m_associationSize; }
    inline void SetAssociationSize(long long value) { m_associationSizeHasBeenSet = true; m_associationSize = value; }
    inline UpdateCustomLineItemResult& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCustomLineItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ListCustomLineItemChargeDetails m_chargeDetails;
    bool m_chargeDetailsHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    long long m_associationSize{0};
    bool m_associationSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
