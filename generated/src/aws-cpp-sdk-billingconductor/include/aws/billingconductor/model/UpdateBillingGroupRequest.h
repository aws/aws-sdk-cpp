/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <aws/billingconductor/model/ComputationPreference.h>
#include <aws/billingconductor/model/UpdateBillingGroupAccountGrouping.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class UpdateBillingGroupRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBillingGroup"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateBillingGroupRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateBillingGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline BillingGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BillingGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateBillingGroupRequest& WithStatus(BillingGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline const ComputationPreference& GetComputationPreference() const { return m_computationPreference; }
    inline bool ComputationPreferenceHasBeenSet() const { return m_computationPreferenceHasBeenSet; }
    template<typename ComputationPreferenceT = ComputationPreference>
    void SetComputationPreference(ComputationPreferenceT&& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = std::forward<ComputationPreferenceT>(value); }
    template<typename ComputationPreferenceT = ComputationPreference>
    UpdateBillingGroupRequest& WithComputationPreference(ComputationPreferenceT&& value) { SetComputationPreference(std::forward<ComputationPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBillingGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the billing group has automatic account association
     * (<code>AutoAssociate</code>) enabled.</p>
     */
    inline const UpdateBillingGroupAccountGrouping& GetAccountGrouping() const { return m_accountGrouping; }
    inline bool AccountGroupingHasBeenSet() const { return m_accountGroupingHasBeenSet; }
    template<typename AccountGroupingT = UpdateBillingGroupAccountGrouping>
    void SetAccountGrouping(AccountGroupingT&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::forward<AccountGroupingT>(value); }
    template<typename AccountGroupingT = UpdateBillingGroupAccountGrouping>
    UpdateBillingGroupRequest& WithAccountGrouping(AccountGroupingT&& value) { SetAccountGrouping(std::forward<AccountGroupingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BillingGroupStatus m_status{BillingGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ComputationPreference m_computationPreference;
    bool m_computationPreferenceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    UpdateBillingGroupAccountGrouping m_accountGrouping;
    bool m_accountGroupingHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
