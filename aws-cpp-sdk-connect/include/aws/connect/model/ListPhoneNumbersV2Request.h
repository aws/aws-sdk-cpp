/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class ListPhoneNumbersV2Request : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbersV2"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline ListPhoneNumbersV2Request& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline ListPhoneNumbersV2Request& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to. If <code>TargetArn</code>
     * input is not provided, this API lists numbers claimed to all the Amazon Connect
     * instances belonging to your account in the same Amazon Web Services Region as
     * the request.</p>
     */
    inline ListPhoneNumbersV2Request& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


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
    inline ListPhoneNumbersV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListPhoneNumbersV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListPhoneNumbersV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListPhoneNumbersV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListPhoneNumbersV2Request& WithPhoneNumberCountryCodes(const Aws::Vector<PhoneNumberCountryCode>& value) { SetPhoneNumberCountryCodes(value); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersV2Request& WithPhoneNumberCountryCodes(Aws::Vector<PhoneNumberCountryCode>&& value) { SetPhoneNumberCountryCodes(std::move(value)); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersV2Request& AddPhoneNumberCountryCodes(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(value); return *this; }

    /**
     * <p>The ISO country code.</p>
     */
    inline ListPhoneNumbersV2Request& AddPhoneNumberCountryCodes(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(std::move(value)); return *this; }


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
    inline ListPhoneNumbersV2Request& WithPhoneNumberTypes(const Aws::Vector<PhoneNumberType>& value) { SetPhoneNumberTypes(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersV2Request& WithPhoneNumberTypes(Aws::Vector<PhoneNumberType>&& value) { SetPhoneNumberTypes(std::move(value)); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersV2Request& AddPhoneNumberTypes(const PhoneNumberType& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(value); return *this; }

    /**
     * <p>The type of phone number.</p>
     */
    inline ListPhoneNumbersV2Request& AddPhoneNumberTypes(PhoneNumberType&& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline const Aws::String& GetPhoneNumberPrefix() const{ return m_phoneNumberPrefix; }

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline bool PhoneNumberPrefixHasBeenSet() const { return m_phoneNumberPrefixHasBeenSet; }

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline void SetPhoneNumberPrefix(const Aws::String& value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix = value; }

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline void SetPhoneNumberPrefix(Aws::String&& value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix = std::move(value); }

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline void SetPhoneNumberPrefix(const char* value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix.assign(value); }

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline ListPhoneNumbersV2Request& WithPhoneNumberPrefix(const Aws::String& value) { SetPhoneNumberPrefix(value); return *this;}

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline ListPhoneNumbersV2Request& WithPhoneNumberPrefix(Aws::String&& value) { SetPhoneNumberPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline ListPhoneNumbersV2Request& WithPhoneNumberPrefix(const char* value) { SetPhoneNumberPrefix(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PhoneNumberCountryCode> m_phoneNumberCountryCodes;
    bool m_phoneNumberCountryCodesHasBeenSet = false;

    Aws::Vector<PhoneNumberType> m_phoneNumberTypes;
    bool m_phoneNumberTypesHasBeenSet = false;

    Aws::String m_phoneNumberPrefix;
    bool m_phoneNumberPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
