/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <aws/connect/model/PhoneNumberType.h>
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
   * <p>Information about phone numbers that have been claimed to your Amazon Connect
   * instance or traffic distribution group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbersSummary">AWS
   * API Reference</a></p>
   */
  class ListPhoneNumbersSummary
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersSummary() = default;
    AWS_CONNECT_API ListPhoneNumbersSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ListPhoneNumbersSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ListPhoneNumbersSummary& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
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
    ListPhoneNumbersSummary& WithPhoneNumberArn(PhoneNumberArnT&& value) { SetPhoneNumberArn(std::forward<PhoneNumberArnT>(value)); return *this;}
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
    ListPhoneNumbersSummary& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline PhoneNumberCountryCode GetPhoneNumberCountryCode() const { return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline ListPhoneNumbersSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode value) { SetPhoneNumberCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(PhoneNumberType value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline ListPhoneNumbersSummary& WithPhoneNumberType(PhoneNumberType value) { SetPhoneNumberType(value); return *this;}
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
    ListPhoneNumbersSummary& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
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
    ListPhoneNumbersSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    ListPhoneNumbersSummary& WithPhoneNumberDescription(PhoneNumberDescriptionT&& value) { SetPhoneNumberDescription(std::forward<PhoneNumberDescriptionT>(value)); return *this;}
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
    ListPhoneNumbersSummary& WithSourcePhoneNumberArn(SourcePhoneNumberArnT&& value) { SetSourcePhoneNumberArn(std::forward<SourcePhoneNumberArnT>(value)); return *this;}
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

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_phoneNumberDescription;
    bool m_phoneNumberDescriptionHasBeenSet = false;

    Aws::String m_sourcePhoneNumberArn;
    bool m_sourcePhoneNumberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
