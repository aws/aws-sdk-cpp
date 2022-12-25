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


    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline UpdateBillingGroupRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline UpdateBillingGroupRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group being updated. </p>
     */
    inline UpdateBillingGroupRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline const BillingGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline void SetStatus(const BillingGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline void SetStatus(BillingGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline UpdateBillingGroupRequest& WithStatus(const BillingGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline UpdateBillingGroupRequest& WithStatus(BillingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline const ComputationPreference& GetComputationPreference() const{ return m_computationPreference; }

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline bool ComputationPreferenceHasBeenSet() const { return m_computationPreferenceHasBeenSet; }

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline void SetComputationPreference(const ComputationPreference& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = value; }

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline void SetComputationPreference(ComputationPreference&& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = std::move(value); }

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline UpdateBillingGroupRequest& WithComputationPreference(const ComputationPreference& value) { SetComputationPreference(value); return *this;}

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline UpdateBillingGroupRequest& WithComputationPreference(ComputationPreference&& value) { SetComputationPreference(std::move(value)); return *this;}


    /**
     * <p>A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the billing group. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the billing group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the billing group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the billing group. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the billing group. </p>
     */
    inline UpdateBillingGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the billing group. </p>
     */
    inline UpdateBillingGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the billing group. </p>
     */
    inline UpdateBillingGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

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
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
