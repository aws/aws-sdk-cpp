/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/EksAnywhereSubscriptionTerm.h>
#include <aws/eks/model/EksAnywhereSubscriptionLicenseType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class CreateEksAnywhereSubscriptionRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateEksAnywhereSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEksAnywhereSubscription"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEksAnywhereSubscriptionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline const EksAnywhereSubscriptionTerm& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = EksAnywhereSubscriptionTerm>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = EksAnywhereSubscriptionTerm>
    CreateEksAnywhereSubscriptionRequest& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of licenses to purchase with the subscription. Valid values are
     * between 1 and 100. This value can't be changed after creating the
     * subscription.</p>
     */
    inline int GetLicenseQuantity() const { return m_licenseQuantity; }
    inline bool LicenseQuantityHasBeenSet() const { return m_licenseQuantityHasBeenSet; }
    inline void SetLicenseQuantity(int value) { m_licenseQuantityHasBeenSet = true; m_licenseQuantity = value; }
    inline CreateEksAnywhereSubscriptionRequest& WithLicenseQuantity(int value) { SetLicenseQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline EksAnywhereSubscriptionLicenseType GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(EksAnywhereSubscriptionLicenseType value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline CreateEksAnywhereSubscriptionRequest& WithLicenseType(EksAnywhereSubscriptionLicenseType value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean indicating whether the subscription auto renews at the end of the
     * term.</p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline CreateEksAnywhereSubscriptionRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateEksAnywhereSubscriptionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEksAnywhereSubscriptionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEksAnywhereSubscriptionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EksAnywhereSubscriptionTerm m_term;
    bool m_termHasBeenSet = false;

    int m_licenseQuantity{0};
    bool m_licenseQuantityHasBeenSet = false;

    EksAnywhereSubscriptionLicenseType m_licenseType{EksAnywhereSubscriptionLicenseType::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    bool m_autoRenew{false};
    bool m_autoRenewHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
