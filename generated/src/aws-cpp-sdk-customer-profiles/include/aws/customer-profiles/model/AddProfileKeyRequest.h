/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class AddProfileKeyRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API AddProfileKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddProfileKey"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline AddProfileKeyRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline AddProfileKeyRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline AddProfileKeyRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline AddProfileKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline AddProfileKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use include: _account, _profileId, _assetId, _caseId, _orderId, _fullName,
     * _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline AddProfileKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>A list of key values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of key values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of key values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of key values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of key values.</p>
     */
    inline AddProfileKeyRequest& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline AddProfileKeyRequest& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline AddProfileKeyRequest& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline AddProfileKeyRequest& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline AddProfileKeyRequest& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline AddProfileKeyRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline AddProfileKeyRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline AddProfileKeyRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
