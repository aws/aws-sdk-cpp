﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API ListPhoneNumbersRequest : public ConnectRequest
  {
  public:
    ListPhoneNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline ListPhoneNumbersRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline ListPhoneNumbersRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline ListPhoneNumbersRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The type of phone number.</p>
     */
    inline const Aws::Vector<PhoneNumberType>& GetPhoneNumberTypes() const{ return m_phoneNumberTypes; }

    /**
     * <p>The type of phone number.</p>
     */
    inline bool PhoneNumberTypesHasBeenSet() const { return m_phoneNumberTypesHasBeenSet; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberTypes(const Aws::Vector<PhoneNumberType>& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes = value; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberTypes(Aws::Vector<PhoneNumberType>&& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes = std::move(value); }

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersRequest& WithPhoneNumberTypes(const Aws::Vector<PhoneNumberType>& value) { SetPhoneNumberTypes(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersRequest& WithPhoneNumberTypes(Aws::Vector<PhoneNumberType>&& value) { SetPhoneNumberTypes(std::move(value)); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersRequest& AddPhoneNumberTypes(const PhoneNumberType& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(value); return *this; }

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersRequest& AddPhoneNumberTypes(PhoneNumberType&& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The ISO country code.</p>
     */
    inline const Aws::Vector<PhoneNumberCountryCode>& GetPhoneNumberCountryCodes() const{ return m_phoneNumberCountryCodes; }

    /**
     * <p>The ISO country code.</p>
     */
    inline bool PhoneNumberCountryCodesHasBeenSet() const { return m_phoneNumberCountryCodesHasBeenSet; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCodes(const Aws::Vector<PhoneNumberCountryCode>& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes = value; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCodes(Aws::Vector<PhoneNumberCountryCode>&& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes = std::move(value); }

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersRequest& WithPhoneNumberCountryCodes(const Aws::Vector<PhoneNumberCountryCode>& value) { SetPhoneNumberCountryCodes(value); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersRequest& WithPhoneNumberCountryCodes(Aws::Vector<PhoneNumberCountryCode>&& value) { SetPhoneNumberCountryCodes(std::move(value)); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersRequest& AddPhoneNumberCountryCodes(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(value); return *this; }

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersRequest& AddPhoneNumberCountryCodes(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListPhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Vector<PhoneNumberType> m_phoneNumberTypes;
    bool m_phoneNumberTypesHasBeenSet;

    Aws::Vector<PhoneNumberCountryCode> m_phoneNumberCountryCodes;
    bool m_phoneNumberCountryCodesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
