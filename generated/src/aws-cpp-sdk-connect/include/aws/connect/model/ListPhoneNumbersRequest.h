/**
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
  class ListPhoneNumbersRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbers"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListPhoneNumbersRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>  <p>We recommend using <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
     * to return phone number types. While ListPhoneNumbers returns number types
     * <code>UIFN</code>, <code>SHARED</code>, <code>THIRD_PARTY_TF</code>, and
     * <code>THIRD_PARTY_DID</code>, it incorrectly lists them as
     * <code>TOLL_FREE</code> or <code>DID</code>. </p> 
     */
    inline const Aws::Vector<PhoneNumberType>& GetPhoneNumberTypes() const { return m_phoneNumberTypes; }
    inline bool PhoneNumberTypesHasBeenSet() const { return m_phoneNumberTypesHasBeenSet; }
    template<typename PhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    void SetPhoneNumberTypes(PhoneNumberTypesT&& value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes = std::forward<PhoneNumberTypesT>(value); }
    template<typename PhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    ListPhoneNumbersRequest& WithPhoneNumberTypes(PhoneNumberTypesT&& value) { SetPhoneNumberTypes(std::forward<PhoneNumberTypesT>(value)); return *this;}
    inline ListPhoneNumbersRequest& AddPhoneNumberTypes(PhoneNumberType value) { m_phoneNumberTypesHasBeenSet = true; m_phoneNumberTypes.push_back(value); return *this; }
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
    ListPhoneNumbersRequest& WithPhoneNumberCountryCodes(PhoneNumberCountryCodesT&& value) { SetPhoneNumberCountryCodes(std::forward<PhoneNumberCountryCodesT>(value)); return *this;}
    inline ListPhoneNumbersRequest& AddPhoneNumberCountryCodes(PhoneNumberCountryCode value) { m_phoneNumberCountryCodesHasBeenSet = true; m_phoneNumberCountryCodes.push_back(value); return *this; }
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
    ListPhoneNumbersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page. The default MaxResult size
     * is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<PhoneNumberType> m_phoneNumberTypes;
    bool m_phoneNumberTypesHasBeenSet = false;

    Aws::Vector<PhoneNumberCountryCode> m_phoneNumberCountryCodes;
    bool m_phoneNumberCountryCodesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
