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
    AWS_CONNECT_API ListPhoneNumbersSummary();
    AWS_CONNECT_API ListPhoneNumbersSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ListPhoneNumbersSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }
    inline bool PhoneNumberArnHasBeenSet() const { return m_phoneNumberArnHasBeenSet; }
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = value; }
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = std::move(value); }
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn.assign(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline const PhoneNumberCountryCode& GetPhoneNumberCountryCode() const{ return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = std::move(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { SetPhoneNumberCountryCode(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { SetPhoneNumberCountryCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone number inbound traffic is routed through.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline ListPhoneNumbersSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline ListPhoneNumbersSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance that phone numbers are claimed
     * to. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ListPhoneNumbersSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ListPhoneNumbersSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberDescription() const{ return m_phoneNumberDescription; }
    inline bool PhoneNumberDescriptionHasBeenSet() const { return m_phoneNumberDescriptionHasBeenSet; }
    inline void SetPhoneNumberDescription(const Aws::String& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = value; }
    inline void SetPhoneNumberDescription(Aws::String&& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = std::move(value); }
    inline void SetPhoneNumberDescription(const char* value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription.assign(value); }
    inline ListPhoneNumbersSummary& WithPhoneNumberDescription(const Aws::String& value) { SetPhoneNumberDescription(value); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberDescription(Aws::String&& value) { SetPhoneNumberDescription(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithPhoneNumberDescription(const char* value) { SetPhoneNumberDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The claimed phone number ARN that was previously imported from the external
     * service, such as Amazon Web Services End User Messaging. If it is from Amazon
     * Web Services End User Messaging, it looks like the ARN of the phone number that
     * was imported from Amazon Web Services End User Messaging.</p>
     */
    inline const Aws::String& GetSourcePhoneNumberArn() const{ return m_sourcePhoneNumberArn; }
    inline bool SourcePhoneNumberArnHasBeenSet() const { return m_sourcePhoneNumberArnHasBeenSet; }
    inline void SetSourcePhoneNumberArn(const Aws::String& value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn = value; }
    inline void SetSourcePhoneNumberArn(Aws::String&& value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn = std::move(value); }
    inline void SetSourcePhoneNumberArn(const char* value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn.assign(value); }
    inline ListPhoneNumbersSummary& WithSourcePhoneNumberArn(const Aws::String& value) { SetSourcePhoneNumberArn(value); return *this;}
    inline ListPhoneNumbersSummary& WithSourcePhoneNumberArn(Aws::String&& value) { SetSourcePhoneNumberArn(std::move(value)); return *this;}
    inline ListPhoneNumbersSummary& WithSourcePhoneNumberArn(const char* value) { SetSourcePhoneNumberArn(value); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_phoneNumberArn;
    bool m_phoneNumberArnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode;
    bool m_phoneNumberCountryCodeHasBeenSet = false;

    PhoneNumberType m_phoneNumberType;
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
