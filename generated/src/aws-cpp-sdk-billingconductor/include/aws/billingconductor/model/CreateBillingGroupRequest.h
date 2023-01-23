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
    AWS_BILLINGCONDUCTOR_API CreateBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillingGroup"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

    AWS_BILLINGCONDUCTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreateBillingGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreateBillingGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreateBillingGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline CreateBillingGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline CreateBillingGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The billing group name. The names must be unique. </p>
     */
    inline CreateBillingGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline const AccountGrouping& GetAccountGrouping() const{ return m_accountGrouping; }

    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline bool AccountGroupingHasBeenSet() const { return m_accountGroupingHasBeenSet; }

    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline void SetAccountGrouping(const AccountGrouping& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = value; }

    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline void SetAccountGrouping(AccountGrouping&& value) { m_accountGroupingHasBeenSet = true; m_accountGrouping = std::move(value); }

    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline CreateBillingGroupRequest& WithAccountGrouping(const AccountGrouping& value) { SetAccountGrouping(value); return *this;}

    /**
     * <p> The set of accounts that will be under the billing group. The set of
     * accounts resemble the linked accounts in a consolidated family. </p>
     */
    inline CreateBillingGroupRequest& WithAccountGrouping(AccountGrouping&& value) { SetAccountGrouping(std::move(value)); return *this;}


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
    inline CreateBillingGroupRequest& WithComputationPreference(const ComputationPreference& value) { SetComputationPreference(value); return *this;}

    /**
     * <p> The preferences and settings that will be used to compute the Amazon Web
     * Services charges for a billing group. </p>
     */
    inline CreateBillingGroupRequest& WithComputationPreference(ComputationPreference&& value) { SetComputationPreference(std::move(value)); return *this;}


    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const{ return m_primaryAccountId; }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline bool PrimaryAccountIdHasBeenSet() const { return m_primaryAccountIdHasBeenSet; }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const Aws::String& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = value; }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(Aws::String&& value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId = std::move(value); }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const char* value) { m_primaryAccountIdHasBeenSet = true; m_primaryAccountId.assign(value); }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline CreateBillingGroupRequest& WithPrimaryAccountId(const Aws::String& value) { SetPrimaryAccountId(value); return *this;}

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline CreateBillingGroupRequest& WithPrimaryAccountId(Aws::String&& value) { SetPrimaryAccountId(std::move(value)); return *this;}

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline CreateBillingGroupRequest& WithPrimaryAccountId(const char* value) { SetPrimaryAccountId(value); return *this;}


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
    inline CreateBillingGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the billing group. </p>
     */
    inline CreateBillingGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the billing group. </p>
     */
    inline CreateBillingGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a billing
     * group. This feature isn't available during the beta. </p>
     */
    inline CreateBillingGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
