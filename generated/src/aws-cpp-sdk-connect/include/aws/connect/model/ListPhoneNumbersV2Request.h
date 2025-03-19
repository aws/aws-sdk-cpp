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
    AWS_CONNECT_API ListPhoneNumbersV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbersV2"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone number inbound traffic is routed through. If both
     * <code>TargetArn</code> and <code>InstanceId</code> input are not provided, this
     * API lists numbers claimed to all the Amazon Connect instances belonging to your
     * account in the same Amazon Web Services Region as the request.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ListPhoneNumbersV2Request& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance that phone numbers are claimed
     * to. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance. If both
     * <code>TargetArn</code> and <code>InstanceId</code> are not provided, this API
     * lists numbers claimed to all the Amazon Connect instances belonging to your
     * account in the same AWS Region as the request.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListPhoneNumbersV2Request& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPhoneNumbersV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPhoneNumbersV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline const Aws::Vector<PhoneNumberCountryCode>& GetPhoneNumberCountryCodes() const { return m_phoneNumberCountryCodes; }
    inline bool PhoneNumberCountryCodesHasBeenSet() const { return m_phoneNumberCountryCodesHasBeenSet; }
    template<typename PhoneNumberCountryCodesT = Aws::Vector<PhoneNumberCountryCode>>
    void SetPhoneNumberCountryCodes(PhoneNumberCountryCodesT&& value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes = std::forward<PhoneNumberCountryCodesT>(value); }
    template<typename PhoneNumberCountryCodesT = Aws::Vector<PhoneNumberCountryCode>>
    ListPhoneNumbersV2Request& WithPhoneNumberCountryCodes(PhoneNumberCountryCodesT&& value) { SetPhoneNumberCountryCodes(std::forward<PhoneNumberCountryCodesT>(value)); return *this;}
    inline ListPhoneNumbersV2Request& AddPhoneNumberCountryCodes(PhoneNumberCountryCode value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline const Aws::Vector<PhoneNumberType>& GetPhoneNumberTypes() const { return m_phoneNumberTypes; }
    inline bool PhoneNumberTypesHasBeenSet() const { return m_phoneNumberTypesHasBeenSet; }
    template<typename PhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    void SetPhoneNumberTypes(PhoneNumberTypesT&& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes = std::forward<PhoneNumberTypesT>(value); }
    template<typename PhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    ListPhoneNumbersV2Request& WithPhoneNumberTypes(PhoneNumberTypesT&& value) { SetPhoneNumberTypes(std::forward<PhoneNumberTypesT>(value)); return *this;}
    inline ListPhoneNumbersV2Request& AddPhoneNumberTypes(PhoneNumberType value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline const Aws::String& GetPhoneNumberPrefix() const { return m_phoneNumberPrefix; }
    inline bool PhoneNumberPrefixHasBeenSet() const { return m_phoneNumberPrefixHasBeenSet; }
    template<typename PhoneNumberPrefixT = Aws::String>
    void SetPhoneNumberPrefix(PhoneNumberPrefixT&& value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix = std::forward<PhoneNumberPrefixT>(value); }
    template<typename PhoneNumberPrefixT = Aws::String>
    ListPhoneNumbersV2Request& WithPhoneNumberPrefix(PhoneNumberPrefixT&& value) { SetPhoneNumberPrefix(std::forward<PhoneNumberPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_maxResults{0};
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
