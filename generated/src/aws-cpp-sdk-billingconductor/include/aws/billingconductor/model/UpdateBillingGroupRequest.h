﻿/**
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
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupRequest();

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
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateBillingGroupRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateBillingGroupRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateBillingGroupRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateBillingGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateBillingGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateBillingGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline const BillingGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BillingGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BillingGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateBillingGroupRequest& WithStatus(const BillingGroupStatus& value) { SetStatus(value); return *this;}
    inline UpdateBillingGroupRequest& WithStatus(BillingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline const ComputationPreference& GetComputationPreference() const{ return m_computationPreference; }
    inline bool ComputationPreferenceHasBeenSet() const { return m_computationPreferenceHasBeenSet; }
    inline void SetComputationPreference(const ComputationPreference& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = value; }
    inline void SetComputationPreference(ComputationPreference&& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = std::move(value); }
    inline UpdateBillingGroupRequest& WithComputationPreference(const ComputationPreference& value) { SetComputationPreference(value); return *this;}
    inline UpdateBillingGroupRequest& WithComputationPreference(ComputationPreference&& value) { SetComputationPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateBillingGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBillingGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBillingGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the billing group has automatic account association
     * (<code>AutoAssociate</code>) enabled.</p>
     */
    inline const UpdateBillingGroupAccountGrouping& GetAccountGrouping() const{ return m_accountGrouping; }
    inline bool AccountGroupingHasBeenSet() const { return m_accountGroupingHasBeenSet; }
    inline void SetAccountGrouping(const UpdateBillingGroupAccountGrouping& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = value; }
    inline void SetAccountGrouping(UpdateBillingGroupAccountGrouping&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::move(value); }
    inline UpdateBillingGroupRequest& WithAccountGrouping(const UpdateBillingGroupAccountGrouping& value) { SetAccountGrouping(value); return *this;}
    inline UpdateBillingGroupRequest& WithAccountGrouping(UpdateBillingGroupAccountGrouping&& value) { SetAccountGrouping(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BillingGroupStatus m_status;
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
