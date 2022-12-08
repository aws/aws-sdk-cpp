/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for a phone number in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PhoneNumberInformation">AWS
   * API Reference</a></p>
   */
  class PhoneNumberInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberInformation();
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline bool PhoneNumberArnHasBeenSet() const { return m_phoneNumberArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}


    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The current status of the phone number.</p>
     */
    inline const NumberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the phone number.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the phone number.</p>
     */
    inline void SetStatus(const NumberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the phone number.</p>
     */
    inline void SetStatus(NumberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the phone number.</p>
     */
    inline PhoneNumberInformation& WithStatus(const NumberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the phone number.</p>
     */
    inline PhoneNumberInformation& WithStatus(NumberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline PhoneNumberInformation& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline PhoneNumberInformation& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline PhoneNumberInformation& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline PhoneNumberInformation& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline PhoneNumberInformation& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = value; }

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::move(value); }

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline PhoneNumberInformation& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline PhoneNumberInformation& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline PhoneNumberInformation& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }

    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline PhoneNumberInformation& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of phone number.</p>
     */
    inline const NumberType& GetNumberType() const{ return m_numberType; }

    /**
     * <p>The type of phone number.</p>
     */
    inline bool NumberTypeHasBeenSet() const { return m_numberTypeHasBeenSet; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetNumberType(const NumberType& value) { m_numberTypeHasBeenSet = true; m_numberType = value; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetNumberType(NumberType&& value) { m_numberTypeHasBeenSet = true; m_numberType = std::move(value); }

    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberInformation& WithNumberType(const NumberType& value) { SetNumberType(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberInformation& WithNumberType(NumberType&& value) { SetNumberType(std::move(value)); return *this;}


    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline bool MonthlyLeasingPriceHasBeenSet() const { return m_monthlyLeasingPriceHasBeenSet; }

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = value; }

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::move(value); }

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice.assign(value); }

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline PhoneNumberInformation& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline PhoneNumberInformation& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}

    /**
     * <p>The price, in US dollars, to lease the phone number.</p>
     */
    inline PhoneNumberInformation& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}


    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients using the TwoWayChannelArn.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients using the TwoWayChannelArn.</p>
     */
    inline bool TwoWayEnabledHasBeenSet() const { return m_twoWayEnabledHasBeenSet; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients using the TwoWayChannelArn.</p>
     */
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabledHasBeenSet = true; m_twoWayEnabled = value; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients using the TwoWayChannelArn.</p>
     */
    inline PhoneNumberInformation& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline bool TwoWayChannelArnHasBeenSet() const { return m_twoWayChannelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline PhoneNumberInformation& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline PhoneNumberInformation& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline PhoneNumberInformation& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}


    /**
     * <p>When set to false an end recipient sends a message that begins with HELP or
     * STOP to one of your dedicated numbers, Amazon Pinpoint automatically replies
     * with a customizable message and adds the end recipient to the OptOutList. When
     * set to true you're responsible for responding to HELP and STOP requests. You're
     * also responsible for tracking and honoring opt-out request. For more information
     * see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-managing.html#settings-account-sms-self-managed-opt-out">Self-managed
     * opt-outs</a> </p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }

    /**
     * <p>When set to false an end recipient sends a message that begins with HELP or
     * STOP to one of your dedicated numbers, Amazon Pinpoint automatically replies
     * with a customizable message and adds the end recipient to the OptOutList. When
     * set to true you're responsible for responding to HELP and STOP requests. You're
     * also responsible for tracking and honoring opt-out request. For more information
     * see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-managing.html#settings-account-sms-self-managed-opt-out">Self-managed
     * opt-outs</a> </p>
     */
    inline bool SelfManagedOptOutsEnabledHasBeenSet() const { return m_selfManagedOptOutsEnabledHasBeenSet; }

    /**
     * <p>When set to false an end recipient sends a message that begins with HELP or
     * STOP to one of your dedicated numbers, Amazon Pinpoint automatically replies
     * with a customizable message and adds the end recipient to the OptOutList. When
     * set to true you're responsible for responding to HELP and STOP requests. You're
     * also responsible for tracking and honoring opt-out request. For more information
     * see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-managing.html#settings-account-sms-self-managed-opt-out">Self-managed
     * opt-outs</a> </p>
     */
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabledHasBeenSet = true; m_selfManagedOptOutsEnabled = value; }

    /**
     * <p>When set to false an end recipient sends a message that begins with HELP or
     * STOP to one of your dedicated numbers, Amazon Pinpoint automatically replies
     * with a customizable message and adds the end recipient to the OptOutList. When
     * set to true you're responsible for responding to HELP and STOP requests. You're
     * also responsible for tracking and honoring opt-out request. For more information
     * see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-managing.html#settings-account-sms-self-managed-opt-out">Self-managed
     * opt-outs</a> </p>
     */
    inline PhoneNumberInformation& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}


    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The name of the OptOutList associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>When set to true the phone number can't be deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }

    /**
     * <p>When set to true the phone number can't be deleted.</p>
     */
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }

    /**
     * <p>When set to true the phone number can't be deleted.</p>
     */
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }

    /**
     * <p>When set to true the phone number can't be deleted.</p>
     */
    inline PhoneNumberInformation& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}


    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the pool associated with the phone number.</p>
     */
    inline PhoneNumberInformation& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline PhoneNumberInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline PhoneNumberInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumberArn;
    bool m_phoneNumberArnHasBeenSet = false;

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    NumberStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;

    NumberType m_numberType;
    bool m_numberTypeHasBeenSet = false;

    Aws::String m_monthlyLeasingPrice;
    bool m_monthlyLeasingPriceHasBeenSet = false;

    bool m_twoWayEnabled;
    bool m_twoWayEnabledHasBeenSet = false;

    Aws::String m_twoWayChannelArn;
    bool m_twoWayChannelArnHasBeenSet = false;

    bool m_selfManagedOptOutsEnabled;
    bool m_selfManagedOptOutsEnabledHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
