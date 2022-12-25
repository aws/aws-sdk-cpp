/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/LanguageCodeString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class CreateSMSSandboxPhoneNumberRequest : public SNSRequest
  {
  public:
    AWS_SNS_API CreateSMSSandboxPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSMSSandboxPhoneNumber"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline CreateSMSSandboxPhoneNumberRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline CreateSMSSandboxPhoneNumberRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The destination phone number to verify. On verification, Amazon SNS adds this
     * phone number to the list of verified phone numbers that you can send SMS
     * messages to.</p>
     */
    inline CreateSMSSandboxPhoneNumberRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline const LanguageCodeString& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline void SetLanguageCode(const LanguageCodeString& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline void SetLanguageCode(LanguageCodeString&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline CreateSMSSandboxPhoneNumberRequest& WithLanguageCode(const LanguageCodeString& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language to use for sending the OTP. The default value is
     * <code>en-US</code>.</p>
     */
    inline CreateSMSSandboxPhoneNumberRequest& WithLanguageCode(LanguageCodeString&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    LanguageCodeString m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
