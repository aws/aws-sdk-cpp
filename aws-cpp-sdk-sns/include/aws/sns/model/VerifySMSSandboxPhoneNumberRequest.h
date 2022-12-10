/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class VerifySMSSandboxPhoneNumberRequest : public SNSRequest
  {
  public:
    AWS_SNS_API VerifySMSSandboxPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifySMSSandboxPhoneNumber"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The destination phone number to verify.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline const Aws::String& GetOneTimePassword() const{ return m_oneTimePassword; }

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline bool OneTimePasswordHasBeenSet() const { return m_oneTimePasswordHasBeenSet; }

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline void SetOneTimePassword(const Aws::String& value) { m_oneTimePasswordHasBeenSet = true; m_oneTimePassword = value; }

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline void SetOneTimePassword(Aws::String&& value) { m_oneTimePasswordHasBeenSet = true; m_oneTimePassword = std::move(value); }

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline void SetOneTimePassword(const char* value) { m_oneTimePasswordHasBeenSet = true; m_oneTimePassword.assign(value); }

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithOneTimePassword(const Aws::String& value) { SetOneTimePassword(value); return *this;}

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithOneTimePassword(Aws::String&& value) { SetOneTimePassword(std::move(value)); return *this;}

    /**
     * <p>The OTP sent to the destination number from the
     * <code>CreateSMSSandBoxPhoneNumber</code> call.</p>
     */
    inline VerifySMSSandboxPhoneNumberRequest& WithOneTimePassword(const char* value) { SetOneTimePassword(value); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_oneTimePassword;
    bool m_oneTimePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
