/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ComputationPreference.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <aws/billingconductor/model/ListBillingGroupAccountGrouping.h>
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
   * <p>A representation of a billing group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupListElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement() = default;
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BillingGroupListElement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) that can be used to uniquely identify the
     * billing group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BillingGroupListElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the billing group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BillingGroupListElement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that serves as the main account in a billing group.</p>
     */
    inline const Aws::String& GetPrimaryAccountId() const { return m_primaryAccountId; }
    inline bool PrimaryAccountIdHasBeenSet() const { return m_primaryAccountIdHasBeenSet; }
    template<typename PrimaryAccountIdT = Aws::String>
    void SetPrimaryAccountId(PrimaryAccountIdT&& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = std::forward<PrimaryAccountIdT>(value); }
    template<typename PrimaryAccountIdT = Aws::String>
    BillingGroupListElement& WithPrimaryAccountId(PrimaryAccountIdT&& value) { SetPrimaryAccountId(std::forward<PrimaryAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ComputationPreference& GetComputationPreference() const { return m_computationPreference; }
    inline bool ComputationPreferenceHasBeenSet() const { return m_computationPreferenceHasBeenSet; }
    template<typename ComputationPreferenceT = ComputationPreference>
    void SetComputationPreference(ComputationPreferenceT&& value) { m_computationPreferenceHasBeenSet = true; m_computationPreference = std::forward<ComputationPreferenceT>(value); }
    template<typename ComputationPreferenceT = ComputationPreference>
    BillingGroupListElement& WithComputationPreference(ComputationPreferenceT&& value) { SetComputationPreference(std::forward<ComputationPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts in the particular billing group.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline BillingGroupListElement& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the billing group was created.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline BillingGroupListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time when the billing group was modified.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline BillingGroupListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing group status. Only one of the valid values can be used.</p>
     */
    inline BillingGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BillingGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BillingGroupListElement& WithStatus(BillingGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the billing group is in its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    BillingGroupListElement& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the billing group has automatic account association
     * (<code>AutoAssociate</code>) enabled.</p>
     */
    inline const ListBillingGroupAccountGrouping& GetAccountGrouping() const { return m_accountGrouping; }
    inline bool AccountGroupingHasBeenSet() const { return m_accountGroupingHasBeenSet; }
    template<typename AccountGroupingT = ListBillingGroupAccountGrouping>
    void SetAccountGrouping(AccountGroupingT&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::forward<AccountGroupingT>(value); }
    template<typename AccountGroupingT = ListBillingGroupAccountGrouping>
    BillingGroupListElement& WithAccountGrouping(AccountGroupingT&& value) { SetAccountGrouping(std::forward<AccountGroupingT>(value)); return *this;}
    ///@}
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

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    BillingGroupStatus m_status{BillingGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ListBillingGroupAccountGrouping m_accountGrouping;
    bool m_accountGroupingHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
