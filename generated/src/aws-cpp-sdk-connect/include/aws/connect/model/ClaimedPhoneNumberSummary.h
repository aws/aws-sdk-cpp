/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/PhoneNumberStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a phone number that has been claimed to your Amazon Connect
   * instance or traffic distribution group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ClaimedPhoneNumberSummary">AWS
   * API Reference</a></p>
   */
  class ClaimedPhoneNumberSummary
  {
  public:
    AWS_CONNECT_API ClaimedPhoneNumberSummary() = default;
    AWS_CONNECT_API ClaimedPhoneNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ClaimedPhoneNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    ClaimedPhoneNumberSummary& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const { return m_phoneNumberArn; }
    inline bool PhoneNumberArnHasBeenSet() const { return m_phoneNumberArnHasBeenSet; }
    template<typename PhoneNumberArnT = Aws::String>
    void SetPhoneNumberArn(PhoneNumberArnT&& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = std::forward<PhoneNumberArnT>(value); }
    template<typename PhoneNumberArnT = Aws::String>
    ClaimedPhoneNumberSummary& WithPhoneNumberArn(PhoneNumberArnT&& value) { SetPhoneNumberArn(std::forward<PhoneNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    ClaimedPhoneNumberSummary& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline PhoneNumberCountryCode GetPhoneNumberCountryCode() const { return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline ClaimedPhoneNumberSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode value) { SetPhoneNumberCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(PhoneNumberType value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline ClaimedPhoneNumberSummary& WithPhoneNumberType(PhoneNumberType value) { SetPhoneNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberDescription() const { return m_phoneNumberDescription; }
    inline bool PhoneNumberDescriptionHasBeenSet() const { return m_phoneNumberDescriptionHasBeenSet; }
    template<typename PhoneNumberDescriptionT = Aws::String>
    void SetPhoneNumberDescription(PhoneNumberDescriptionT&& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = std::forward<PhoneNumberDescriptionT>(value); }
    template<typename PhoneNumberDescriptionT = Aws::String>
    ClaimedPhoneNumberSummary& WithPhoneNumberDescription(PhoneNumberDescriptionT&& value) { SetPhoneNumberDescription(std::forward<PhoneNumberDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone number inbound traffic is routed through.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ClaimedPhoneNumberSummary& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance that phone numbers are claimed
     * to. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ClaimedPhoneNumberSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ClaimedPhoneNumberSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ClaimedPhoneNumberSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the phone number.</p> <ul> <li> <p> <code>CLAIMED</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
     * or <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
     * operation succeeded.</p> </li> <li> <p> <code>IN_PROGRESS</code> means a <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>,
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>,
     * or <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumberMetadata.html">UpdatePhoneNumberMetadata</a>
     * operation is still in progress and has not yet completed. You can call <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
     * at a later time to verify if the previous operation has completed.</p> </li>
     * <li> <p> <code>FAILED</code> indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
     * or <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
     * operation has failed. It will include a message indicating the failure reason. A
     * common reason for a failure may be that the <code>TargetArn</code> value you are
     * claiming or updating a phone number to has reached its limit of total claimed
     * numbers. If you received a <code>FAILED</code> status from a
     * <code>ClaimPhoneNumber</code> API call, you have one day to retry claiming the
     * phone number before the number is released back to the inventory for other
     * customers to claim.</p> </li> </ul>  <p>You will not be billed for the
     * phone number during the 1-day period if number claiming fails. </p> 
     */
    inline const PhoneNumberStatus& GetPhoneNumberStatus() const { return m_phoneNumberStatus; }
    inline bool PhoneNumberStatusHasBeenSet() const { return m_phoneNumberStatusHasBeenSet; }
    template<typename PhoneNumberStatusT = PhoneNumberStatus>
    void SetPhoneNumberStatus(PhoneNumberStatusT&& value) { m_phoneNumberStatusHasBeenSet = true; m_phoneNumberStatus = std::forward<PhoneNumberStatusT>(value); }
    template<typename PhoneNumberStatusT = PhoneNumberStatus>
    ClaimedPhoneNumberSummary& WithPhoneNumberStatus(PhoneNumberStatusT&& value) { SetPhoneNumberStatus(std::forward<PhoneNumberStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The claimed phone number ARN that was previously imported from the external
     * service, such as Amazon Web Services End User Messaging. If it is from Amazon
     * Web Services End User Messaging, it looks like the ARN of the phone number that
     * was imported from Amazon Web Services End User Messaging.</p>
     */
    inline const Aws::String& GetSourcePhoneNumberArn() const { return m_sourcePhoneNumberArn; }
    inline bool SourcePhoneNumberArnHasBeenSet() const { return m_sourcePhoneNumberArnHasBeenSet; }
    template<typename SourcePhoneNumberArnT = Aws::String>
    void SetSourcePhoneNumberArn(SourcePhoneNumberArnT&& value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn = std::forward<SourcePhoneNumberArnT>(value); }
    template<typename SourcePhoneNumberArnT = Aws::String>
    ClaimedPhoneNumberSummary& WithSourcePhoneNumberArn(SourcePhoneNumberArnT&& value) { SetSourcePhoneNumberArn(std::forward<SourcePhoneNumberArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_phoneNumberArn;
    bool m_phoneNumberArnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode{PhoneNumberCountryCode::NOT_SET};
    bool m_phoneNumberCountryCodeHasBeenSet = false;

    PhoneNumberType m_phoneNumberType{PhoneNumberType::NOT_SET};
    bool m_phoneNumberTypeHasBeenSet = false;

    Aws::String m_phoneNumberDescription;
    bool m_phoneNumberDescriptionHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PhoneNumberStatus m_phoneNumberStatus;
    bool m_phoneNumberStatusHasBeenSet = false;

    Aws::String m_sourcePhoneNumberArn;
    bool m_sourcePhoneNumberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
