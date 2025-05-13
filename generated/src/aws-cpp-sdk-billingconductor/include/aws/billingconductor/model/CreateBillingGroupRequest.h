/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/AccountGrouping.h>
#include <aws/billingconductor/model/ComputationPreference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class CreateBillingGroupRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API CreateBillingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillingGroup"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

    AWS_BILLINGCONDUCTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateBillingGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBillingGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated billing family. </p>
     */
    inline const AccountGrouping& GetAccountGrouping() const { return m_accountGrouping; }
    inline bool AccountGroupingHasBeenSet() const { return m_accountGroupingHasBeenSet; }
    template<typename AccountGroupingT = AccountGrouping>
    void SetAccountGrouping(AccountGroupingT&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::forward<AccountGroupingT>(value); }
    template<typename AccountGroupingT = AccountGrouping>
    CreateBillingGroupRequest& WithAccountGrouping(AccountGroupingT&& value) { SetAccountGrouping(std::forward<AccountGroupingT>(value)); return *this;}
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
    CreateBillingGroupRequest& WithComputationPreference(ComputationPreferenceT&& value) { SetComputationPreference(std::forward<ComputationPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const { return m_primaryAccountId; }
    inline bool PrimaryAccountIdHasBeenSet() const { return m_primaryAccountIdHasBeenSet; }
    template<typename PrimaryAccountIdT = Aws::String>
    void SetPrimaryAccountId(PrimaryAccountIdT&& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = std::forward<PrimaryAccountIdT>(value); }
    template<typename PrimaryAccountIdT = Aws::String>
    CreateBillingGroupRequest& WithPrimaryAccountId(PrimaryAccountIdT&& value) { SetPrimaryAccountId(std::forward<PrimaryAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBillingGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBillingGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateBillingGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountGrouping m_accountGrouping;
    bool m_accountGroupingHasBeenSet = false;

    ComputationPreference m_computationPreference;
    bool m_computationPreferenceHasBeenSet = false;

    Aws::String m_primaryAccountId;
    bool m_primaryAccountIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
