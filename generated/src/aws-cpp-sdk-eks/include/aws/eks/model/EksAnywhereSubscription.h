/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/EksAnywhereSubscriptionLicenseType.h>
#include <aws/eks/model/EksAnywhereSubscriptionTerm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/License.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An EKS Anywhere subscription authorizing the customer to support for licensed
   * clusters and access to EKS Anywhere Curated Packages.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/EksAnywhereSubscription">AWS
   * API Reference</a></p>
   */
  class EksAnywhereSubscription
  {
  public:
    AWS_EKS_API EksAnywhereSubscription() = default;
    AWS_EKS_API EksAnywhereSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API EksAnywhereSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UUID identifying a subscription.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EksAnywhereSubscription& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EksAnywhereSubscription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    EksAnywhereSubscription& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription is effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    EksAnywhereSubscription& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription will expire or auto
     * renew, depending on the auto renew configuration of the subscription object.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    EksAnywhereSubscription& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of licenses included in a subscription. Valid values are between 1
     * and 100.</p>
     */
    inline int GetLicenseQuantity() const { return m_licenseQuantity; }
    inline bool LicenseQuantityHasBeenSet() const { return m_licenseQuantityHasBeenSet; }
    inline void SetLicenseQuantity(int value) { m_licenseQuantityHasBeenSet = true; m_licenseQuantity = value; }
    inline EksAnywhereSubscription& WithLicenseQuantity(int value) { SetLicenseQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of licenses included in the subscription. Valid value is CLUSTER.
     * With the CLUSTER license type, each license covers support for a single EKS
     * Anywhere cluster.</p>
     */
    inline EksAnywhereSubscriptionLicenseType GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(EksAnywhereSubscriptionLicenseType value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline EksAnywhereSubscription& WithLicenseType(EksAnywhereSubscriptionLicenseType value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An EksAnywhereSubscriptionTerm object. </p>
     */
    inline const EksAnywhereSubscriptionTerm& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = EksAnywhereSubscriptionTerm>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = EksAnywhereSubscriptionTerm>
    EksAnywhereSubscription& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a subscription.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EksAnywhereSubscription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean indicating whether or not a subscription will auto renew when it
     * expires.</p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline EksAnywhereSubscription& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services License Manager ARN associated with the subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseArns() const { return m_licenseArns; }
    inline bool LicenseArnsHasBeenSet() const { return m_licenseArnsHasBeenSet; }
    template<typename LicenseArnsT = Aws::Vector<Aws::String>>
    void SetLicenseArns(LicenseArnsT&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = std::forward<LicenseArnsT>(value); }
    template<typename LicenseArnsT = Aws::Vector<Aws::String>>
    EksAnywhereSubscription& WithLicenseArns(LicenseArnsT&& value) { SetLicenseArns(std::forward<LicenseArnsT>(value)); return *this;}
    template<typename LicenseArnsT = Aws::String>
    EksAnywhereSubscription& AddLicenseArns(LicenseArnsT&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.emplace_back(std::forward<LicenseArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Includes all of the claims in the license token necessary to validate the
     * license for extended support.</p>
     */
    inline const Aws::Vector<License>& GetLicenses() const { return m_licenses; }
    inline bool LicensesHasBeenSet() const { return m_licensesHasBeenSet; }
    template<typename LicensesT = Aws::Vector<License>>
    void SetLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses = std::forward<LicensesT>(value); }
    template<typename LicensesT = Aws::Vector<License>>
    EksAnywhereSubscription& WithLicenses(LicensesT&& value) { SetLicenses(std::forward<LicensesT>(value)); return *this;}
    template<typename LicensesT = License>
    EksAnywhereSubscription& AddLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses.emplace_back(std::forward<LicensesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags do not propagate to any other resources associated with the
     * subscription.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EksAnywhereSubscription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EksAnywhereSubscription& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate{};
    bool m_effectiveDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    int m_licenseQuantity{0};
    bool m_licenseQuantityHasBeenSet = false;

    EksAnywhereSubscriptionLicenseType m_licenseType{EksAnywhereSubscriptionLicenseType::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    EksAnywhereSubscriptionTerm m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_autoRenew{false};
    bool m_autoRenewHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseArns;
    bool m_licenseArnsHasBeenSet = false;

    Aws::Vector<License> m_licenses;
    bool m_licensesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
