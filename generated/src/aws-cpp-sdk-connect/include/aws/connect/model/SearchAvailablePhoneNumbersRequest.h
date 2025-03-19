/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SearchAvailablePhoneNumbersRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchAvailablePhoneNumbersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAvailablePhoneNumbers"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone number inbound traffic is routed through. You
     * must enter <code>InstanceId</code> or <code>TargetArn</code>. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance that phone numbers are claimed
     * to. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance. You must
     * enter <code>InstanceId</code> or <code>TargetArn</code>. </p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SearchAvailablePhoneNumbersRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline PhoneNumberCountryCode GetPhoneNumberCountryCode() const { return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberCountryCode(PhoneNumberCountryCode value) { SetPhoneNumberCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(PhoneNumberType value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType value) { SetPhoneNumberType(value); return *this;}
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
    SearchAvailablePhoneNumbersRequest& WithPhoneNumberPrefix(PhoneNumberPrefixT&& value) { SetPhoneNumberPrefix(std::forward<PhoneNumberPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    SearchAvailablePhoneNumbersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode{PhoneNumberCountryCode::NOT_SET};
    bool m_phoneNumberCountryCodeHasBeenSet = false;

    PhoneNumberType m_phoneNumberType{PhoneNumberType::NOT_SET};
    bool m_phoneNumberTypeHasBeenSet = false;

    Aws::String m_phoneNumberPrefix;
    bool m_phoneNumberPrefixHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
