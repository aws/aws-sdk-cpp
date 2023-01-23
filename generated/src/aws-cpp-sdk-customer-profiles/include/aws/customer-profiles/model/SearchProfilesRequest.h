/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/LogicalOperator.h>
#include <aws/customer-profiles/model/AdditionalSearchKey.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class SearchProfilesRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API SearchProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProfiles"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects returned per page.</p> <p>The default is 20 if
     * this parameter is not included in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects returned per page.</p> <p>The default is 20 if
     * this parameter is not included in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects returned per page.</p> <p>The default is 20 if
     * this parameter is not included in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects returned per page.</p> <p>The default is 20 if
     * this parameter is not included in the request.</p>
     */
    inline SearchProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline SearchProfilesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline SearchProfilesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline SearchProfilesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline SearchProfilesRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline SearchProfilesRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline SearchProfilesRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


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
    inline SearchProfilesRequest& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline SearchProfilesRequest& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline SearchProfilesRequest& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline SearchProfilesRequest& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline SearchProfilesRequest& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline const Aws::Vector<AdditionalSearchKey>& GetAdditionalSearchKeys() const{ return m_additionalSearchKeys; }

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline bool AdditionalSearchKeysHasBeenSet() const { return m_additionalSearchKeysHasBeenSet; }

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline void SetAdditionalSearchKeys(const Aws::Vector<AdditionalSearchKey>& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys = value; }

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline void SetAdditionalSearchKeys(Aws::Vector<AdditionalSearchKey>&& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys = std::move(value); }

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline SearchProfilesRequest& WithAdditionalSearchKeys(const Aws::Vector<AdditionalSearchKey>& value) { SetAdditionalSearchKeys(value); return *this;}

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline SearchProfilesRequest& WithAdditionalSearchKeys(Aws::Vector<AdditionalSearchKey>&& value) { SetAdditionalSearchKeys(std::move(value)); return *this;}

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline SearchProfilesRequest& AddAdditionalSearchKeys(const AdditionalSearchKey& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline SearchProfilesRequest& AddAdditionalSearchKeys(AdditionalSearchKey&& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline const LogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }

    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }

    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline void SetLogicalOperator(const LogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }

    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline void SetLogicalOperator(LogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }

    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline SearchProfilesRequest& WithLogicalOperator(const LogicalOperator& value) { SetLogicalOperator(value); return *this;}

    /**
     * <p>Relationship between all specified search keys that will be used to search
     * for profiles. This includes the required <code>KeyName</code> and
     * <code>Values</code> parameters as well as any key-value(s) pairs specified in
     * the <code>AdditionalSearchKeys</code> list.</p> <p>This parameter influences
     * which profiles will be returned in the response in the following manner:</p>
     * <ul> <li> <p> <code>AND</code> - The response only includes profiles that match
     * all of the search keys.</p> </li> <li> <p> <code>OR</code> - The response
     * includes profiles that match at least one of the search keys.</p> </li> </ul>
     * <p>The <code>OR</code> relationship is the default behavior if this parameter is
     * not included in the request.</p>
     */
    inline SearchProfilesRequest& WithLogicalOperator(LogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<AdditionalSearchKey> m_additionalSearchKeys;
    bool m_additionalSearchKeysHasBeenSet = false;

    LogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
