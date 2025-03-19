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
    AWS_CUSTOMERPROFILES_API SearchProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProfiles"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects returned per page.</p> <p>The default is 20 if
     * this parameter is not included in the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    SearchProfilesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A searchable identifier of a customer profile. The predefined keys you can
     * use to search include: _account, _profileId, _assetId, _caseId, _orderId,
     * _fullName, _phone, _email, _ctrContactId, _marketoLeadId, _salesforceAccountId,
     * _salesforceContactId, _salesforceAssetId, _zendeskUserId, _zendeskExternalId,
     * _zendeskTicketId, _serviceNowSystemId, _serviceNowIncidentId, _segmentUserId,
     * _shopifyCustomerId, _shopifyOrderId.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    SearchProfilesRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SearchProfilesRequest& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SearchProfilesRequest& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>AdditionalSearchKey</code> objects that are each searchable
     * identifiers of a profile. Each <code>AdditionalSearchKey</code> object contains
     * a <code>KeyName</code> and a list of <code>Values</code> associated with that
     * specific key (i.e., a key-value(s) pair). These additional search keys will be
     * used in conjunction with the <code>LogicalOperator</code> and the required
     * <code>KeyName</code> and <code>Values</code> parameters to search for profiles
     * that satisfy the search criteria. </p>
     */
    inline const Aws::Vector<AdditionalSearchKey>& GetAdditionalSearchKeys() const { return m_additionalSearchKeys; }
    inline bool AdditionalSearchKeysHasBeenSet() const { return m_additionalSearchKeysHasBeenSet; }
    template<typename AdditionalSearchKeysT = Aws::Vector<AdditionalSearchKey>>
    void SetAdditionalSearchKeys(AdditionalSearchKeysT&& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys = std::forward<AdditionalSearchKeysT>(value); }
    template<typename AdditionalSearchKeysT = Aws::Vector<AdditionalSearchKey>>
    SearchProfilesRequest& WithAdditionalSearchKeys(AdditionalSearchKeysT&& value) { SetAdditionalSearchKeys(std::forward<AdditionalSearchKeysT>(value)); return *this;}
    template<typename AdditionalSearchKeysT = AdditionalSearchKey>
    SearchProfilesRequest& AddAdditionalSearchKeys(AdditionalSearchKeysT&& value) { m_additionalSearchKeysHasBeenSet = true; m_additionalSearchKeys.emplace_back(std::forward<AdditionalSearchKeysT>(value)); return *this; }
    ///@}

    ///@{
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
    inline LogicalOperator GetLogicalOperator() const { return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(LogicalOperator value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline SearchProfilesRequest& WithLogicalOperator(LogicalOperator value) { SetLogicalOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<AdditionalSearchKey> m_additionalSearchKeys;
    bool m_additionalSearchKeysHasBeenSet = false;

    LogicalOperator m_logicalOperator{LogicalOperator::NOT_SET};
    bool m_logicalOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
