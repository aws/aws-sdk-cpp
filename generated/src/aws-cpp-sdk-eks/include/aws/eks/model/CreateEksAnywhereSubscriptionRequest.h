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
    AWS_EKS_API CreateEksAnywhereSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEksAnywhereSubscription"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name for your subscription. It must be unique in your Amazon Web
     * Services account in the Amazon Web Services Region you're creating the
     * subscription in. The name can contain only alphanumeric characters
     * (case-sensitive), hyphens, and underscores. It must start with an alphabetic
     * character and can't be longer than 100 characters.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline const EksAnywhereSubscriptionTerm& GetTerm() const{ return m_term; }

    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }

    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline void SetTerm(const EksAnywhereSubscriptionTerm& value) { m_termHasBeenSet = true; m_term = value; }

    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline void SetTerm(EksAnywhereSubscriptionTerm&& value) { m_termHasBeenSet = true; m_term = std::move(value); }

    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithTerm(const EksAnywhereSubscriptionTerm& value) { SetTerm(value); return *this;}

    /**
     * <p>An object representing the term duration and term unit type of your
     * subscription. This determines the term length of your subscription. Valid values
     * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
     * or 36 month subscription. This value cannot be changed after creating the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithTerm(EksAnywhereSubscriptionTerm&& value) { SetTerm(std::move(value)); return *this;}


    /**
     * <p>The number of licenses to purchase with the subscription. Valid values are
     * between 1 and 100. This value can't be changed after creating the
     * subscription.</p>
     */
    inline int GetLicenseQuantity() const{ return m_licenseQuantity; }

    /**
     * <p>The number of licenses to purchase with the subscription. Valid values are
     * between 1 and 100. This value can't be changed after creating the
     * subscription.</p>
     */
    inline bool LicenseQuantityHasBeenSet() const { return m_licenseQuantityHasBeenSet; }

    /**
     * <p>The number of licenses to purchase with the subscription. Valid values are
     * between 1 and 100. This value can't be changed after creating the
     * subscription.</p>
     */
    inline void SetLicenseQuantity(int value) { m_licenseQuantityHasBeenSet = true; m_licenseQuantity = value; }

    /**
     * <p>The number of licenses to purchase with the subscription. Valid values are
     * between 1 and 100. This value can't be changed after creating the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithLicenseQuantity(int value) { SetLicenseQuantity(value); return *this;}


    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline const EksAnywhereSubscriptionLicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline void SetLicenseType(const EksAnywhereSubscriptionLicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline void SetLicenseType(EksAnywhereSubscriptionLicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithLicenseType(const EksAnywhereSubscriptionLicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type for all licenses in the subscription. Valid value is
     * CLUSTER. With the CLUSTER license type, each license covers support for a single
     * EKS Anywhere cluster.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithLicenseType(EksAnywhereSubscriptionLicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>A boolean indicating whether the subscription auto renews at the end of the
     * term.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>A boolean indicating whether the subscription auto renews at the end of the
     * term.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>A boolean indicating whether the subscription auto renews at the end of the
     * term.</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>A boolean indicating whether the subscription auto renews at the end of the
     * term.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata for a subscription to assist with categorization and
     * organization. Each tag consists of a key and an optional value. Subscription
     * tags don't propagate to any other resources associated with the
     * subscription.</p>
     */
    inline CreateEksAnywhereSubscriptionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EksAnywhereSubscriptionTerm m_term;
    bool m_termHasBeenSet = false;

    int m_licenseQuantity;
    bool m_licenseQuantityHasBeenSet = false;

    EksAnywhereSubscriptionLicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    bool m_autoRenew;
    bool m_autoRenewHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
