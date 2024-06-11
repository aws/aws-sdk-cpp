﻿/**
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
    AWS_CONNECT_API SearchAvailablePhoneNumbersRequest();

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
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline SearchAvailablePhoneNumbersRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance that phone numbers are claimed
     * to. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance. You must
     * enter <code>InstanceId</code> or <code>TargetArn</code>. </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SearchAvailablePhoneNumbersRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline const PhoneNumberCountryCode& GetPhoneNumberCountryCode() const{ return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = std::move(value); }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { SetPhoneNumberCountryCode(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { SetPhoneNumberCountryCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the phone number. If provided, it must contain <code>+</code>
     * as part of the country code.</p>
     */
    inline const Aws::String& GetPhoneNumberPrefix() const{ return m_phoneNumberPrefix; }
    inline bool PhoneNumberPrefixHasBeenSet() const { return m_phoneNumberPrefixHasBeenSet; }
    inline void SetPhoneNumberPrefix(const Aws::String& value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix = value; }
    inline void SetPhoneNumberPrefix(Aws::String&& value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix = std::move(value); }
    inline void SetPhoneNumberPrefix(const char* value) { m_phoneNumberPrefixHasBeenSet = true; m_phoneNumberPrefix.assign(value); }
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberPrefix(const Aws::String& value) { SetPhoneNumberPrefix(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberPrefix(Aws::String&& value) { SetPhoneNumberPrefix(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithPhoneNumberPrefix(const char* value) { SetPhoneNumberPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchAvailablePhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode;
    bool m_phoneNumberCountryCodeHasBeenSet = false;

    PhoneNumberType m_phoneNumberType;
    bool m_phoneNumberTypeHasBeenSet = false;

    Aws::String m_phoneNumberPrefix;
    bool m_phoneNumberPrefixHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
