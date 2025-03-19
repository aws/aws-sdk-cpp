/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <aws/billingconductor/model/UpdateBillingGroupAccountGrouping.h>
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
  class UpdateBillingGroupResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult() = default;
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateBillingGroupResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateBillingGroupResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBillingGroupResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const { return m_primaryAccountId; }
    template<typename PrimaryAccountIdT = Aws::String>
    void SetPrimaryAccountId(PrimaryAccountIdT&& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = std::forward<PrimaryAccountIdT>(value); }
    template<typename PrimaryAccountIdT = Aws::String>
    UpdateBillingGroupResult& WithPrimaryAccountId(PrimaryAccountIdT&& value) { SetPrimaryAccountId(std::forward<PrimaryAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline const Aws::String& GetPricingPlanArn() const { return m_pricingPlanArn; }
    template<typename PricingPlanArnT = Aws::String>
    void SetPricingPlanArn(PricingPlanArnT&& value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn = std::forward<PricingPlanArnT>(value); }
    template<typename PricingPlanArnT = Aws::String>
    UpdateBillingGroupResult& WithPricingPlanArn(PricingPlanArnT&& value) { SetPricingPlanArn(std::forward<PricingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of accounts in the particular billing group. </p>
     */
    inline long long GetSize() const { return m_size; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline UpdateBillingGroupResult& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline UpdateBillingGroupResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline BillingGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(BillingGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateBillingGroupResult& WithStatus(BillingGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    UpdateBillingGroupResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the billing group has automatic account association
     * (<code>AutoAssociate</code>) enabled.</p>
     */
    inline const UpdateBillingGroupAccountGrouping& GetAccountGrouping() const { return m_accountGrouping; }
    template<typename AccountGroupingT = UpdateBillingGroupAccountGrouping>
    void SetAccountGrouping(AccountGroupingT&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::forward<AccountGroupingT>(value); }
    template<typename AccountGroupingT = UpdateBillingGroupAccountGrouping>
    UpdateBillingGroupResult& WithAccountGrouping(AccountGroupingT&& value) { SetAccountGrouping(std::forward<AccountGroupingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBillingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_primaryAccountId;
    bool m_primaryAccountIdHasBeenSet = false;

    Aws::String m_pricingPlanArn;
    bool m_pricingPlanArnHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    BillingGroupStatus m_status{BillingGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    UpdateBillingGroupAccountGrouping m_accountGrouping;
    bool m_accountGroupingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
