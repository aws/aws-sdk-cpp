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
    AWS_EKS_API EksAnywhereSubscription();
    AWS_EKS_API EksAnywhereSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API EksAnywhereSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UUID identifying a subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EksAnywhereSubscription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EksAnywhereSubscription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EksAnywhereSubscription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the subscription.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EksAnywhereSubscription& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EksAnywhereSubscription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EksAnywhereSubscription& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EksAnywhereSubscription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EksAnywhereSubscription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription is effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const{ return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    inline void SetEffectiveDate(const Aws::Utils::DateTime& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }
    inline void SetEffectiveDate(Aws::Utils::DateTime&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }
    inline EksAnywhereSubscription& WithEffectiveDate(const Aws::Utils::DateTime& value) { SetEffectiveDate(value); return *this;}
    inline EksAnywhereSubscription& WithEffectiveDate(Aws::Utils::DateTime&& value) { SetEffectiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp in seconds for when the subscription will expire or auto
     * renew, depending on the auto renew configuration of the subscription object.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline EksAnywhereSubscription& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline EksAnywhereSubscription& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of licenses included in a subscription. Valid values are between 1
     * and 100.</p>
     */
    inline int GetLicenseQuantity() const{ return m_licenseQuantity; }
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
    inline const EksAnywhereSubscriptionLicenseType& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const EksAnywhereSubscriptionLicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(EksAnywhereSubscriptionLicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline EksAnywhereSubscription& WithLicenseType(const EksAnywhereSubscriptionLicenseType& value) { SetLicenseType(value); return *this;}
    inline EksAnywhereSubscription& WithLicenseType(EksAnywhereSubscriptionLicenseType&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An EksAnywhereSubscriptionTerm object. </p>
     */
    inline const EksAnywhereSubscriptionTerm& GetTerm() const{ return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(const EksAnywhereSubscriptionTerm& value) { m_termHasBeenSet = true; m_term = value; }
    inline void SetTerm(EksAnywhereSubscriptionTerm&& value) { m_termHasBeenSet = true; m_term = std::move(value); }
    inline EksAnywhereSubscription& WithTerm(const EksAnywhereSubscriptionTerm& value) { SetTerm(value); return *this;}
    inline EksAnywhereSubscription& WithTerm(EksAnywhereSubscriptionTerm&& value) { SetTerm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a subscription.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline EksAnywhereSubscription& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline EksAnywhereSubscription& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline EksAnywhereSubscription& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean indicating whether or not a subscription will auto renew when it
     * expires.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline EksAnywhereSubscription& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services License Manager ARN associated with the subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseArns() const{ return m_licenseArns; }
    inline bool LicenseArnsHasBeenSet() const { return m_licenseArnsHasBeenSet; }
    inline void SetLicenseArns(const Aws::Vector<Aws::String>& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = value; }
    inline void SetLicenseArns(Aws::Vector<Aws::String>&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns = std::move(value); }
    inline EksAnywhereSubscription& WithLicenseArns(const Aws::Vector<Aws::String>& value) { SetLicenseArns(value); return *this;}
    inline EksAnywhereSubscription& WithLicenseArns(Aws::Vector<Aws::String>&& value) { SetLicenseArns(std::move(value)); return *this;}
    inline EksAnywhereSubscription& AddLicenseArns(const Aws::String& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(value); return *this; }
    inline EksAnywhereSubscription& AddLicenseArns(Aws::String&& value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(std::move(value)); return *this; }
    inline EksAnywhereSubscription& AddLicenseArns(const char* value) { m_licenseArnsHasBeenSet = true; m_licenseArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags do not propagate to any other resources associated with the
     * subscription.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EksAnywhereSubscription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EksAnywhereSubscription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EksAnywhereSubscription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EksAnywhereSubscription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EksAnywhereSubscription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EksAnywhereSubscription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EksAnywhereSubscription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EksAnywhereSubscription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EksAnywhereSubscription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    int m_licenseQuantity;
    bool m_licenseQuantityHasBeenSet = false;

    EksAnywhereSubscriptionLicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    EksAnywhereSubscriptionTerm m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_autoRenew;
    bool m_autoRenewHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseArns;
    bool m_licenseArnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
