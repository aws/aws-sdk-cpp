/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ComputationPreference.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A representation of a billing group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupListElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement();
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the billing group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the billing group. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the billing group. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the billing group. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the billing group. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the billing group. </p>
     */
    inline BillingGroupListElement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the billing group. </p>
     */
    inline BillingGroupListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group. </p>
     */
    inline BillingGroupListElement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline BillingGroupListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline BillingGroupListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group. </p>
     */
    inline BillingGroupListElement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the billing group. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the billing group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the billing group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the billing group. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the billing group. </p>
     */
    inline BillingGroupListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the billing group. </p>
     */
    inline BillingGroupListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the billing group. </p>
     */
    inline BillingGroupListElement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const{ return m_primaryAccountId; }

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline bool PrimaryAccountIdHasBeenSet() const { return m_primaryAccountIdHasBeenSet; }

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const Aws::String& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = value; }

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(Aws::String&& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = std::move(value); }

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const char* value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId.assign(value); }

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline BillingGroupListElement& WithPrimaryAccountId(const Aws::String& value) { SetPrimaryAccountId(value); return *this;}

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline BillingGroupListElement& WithPrimaryAccountId(Aws::String&& value) { SetPrimaryAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that serves as the main account in a billing group. </p>
     */
    inline BillingGroupListElement& WithPrimaryAccountId(const char* value) { SetPrimaryAccountId(value); return *this;}


    
    inline const ComputationPreference& GetComputationPreference() const{ return m_computationPreference; }

    
    inline bool ComputationPreferenceHasBeenSet() const { return m_computationPreferenceHasBeenSet; }

    
    inline void SetComputationPreference(const ComputationPreference& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = value; }

    
    inline void SetComputationPreference(ComputationPreference&& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = std::move(value); }

    
    inline BillingGroupListElement& WithComputationPreference(const ComputationPreference& value) { SetComputationPreference(value); return *this;}

    
    inline BillingGroupListElement& WithComputationPreference(ComputationPreference&& value) { SetComputationPreference(std::move(value)); return *this;}


    /**
     * <p>The number of accounts in the particular billing group. </p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The number of accounts in the particular billing group. </p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The number of accounts in the particular billing group. </p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The number of accounts in the particular billing group. </p>
     */
    inline BillingGroupListElement& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p> The time when the billing group was created. </p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time when the billing group was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The time when the billing group was created. </p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The time when the billing group was created. </p>
     */
    inline BillingGroupListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline BillingGroupListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline const BillingGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline void SetStatus(const BillingGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline void SetStatus(BillingGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline BillingGroupListElement& WithStatus(const BillingGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The billing group status. Only one of the valid values can be used. </p>
     */
    inline BillingGroupListElement& WithStatus(BillingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline BillingGroupListElement& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline BillingGroupListElement& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the billing group is in its current status. </p>
     */
    inline BillingGroupListElement& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_primaryAccountId;
    bool m_primaryAccountIdHasBeenSet = false;

    ComputationPreference m_computationPreference;
    bool m_computationPreferenceHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    BillingGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
