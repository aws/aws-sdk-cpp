/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/MfaTypesElement.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The settings of your MFA configuration for the backend of your Amplify
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/Settings">AWS
   * API Reference</a></p>
   */
  class Settings
  {
  public:
    AWS_AMPLIFYBACKEND_API Settings();
    AWS_AMPLIFYBACKEND_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The supported MFA types.</p>
     */
    inline const Aws::Vector<MfaTypesElement>& GetMfaTypes() const{ return m_mfaTypes; }

    /**
     * <p>The supported MFA types.</p>
     */
    inline bool MfaTypesHasBeenSet() const { return m_mfaTypesHasBeenSet; }

    /**
     * <p>The supported MFA types.</p>
     */
    inline void SetMfaTypes(const Aws::Vector<MfaTypesElement>& value) { m_mfaTypesHasBeenSet = true; m_mfaTypes = value; }

    /**
     * <p>The supported MFA types.</p>
     */
    inline void SetMfaTypes(Aws::Vector<MfaTypesElement>&& value) { m_mfaTypesHasBeenSet = true; m_mfaTypes = std::move(value); }

    /**
     * <p>The supported MFA types.</p>
     */
    inline Settings& WithMfaTypes(const Aws::Vector<MfaTypesElement>& value) { SetMfaTypes(value); return *this;}

    /**
     * <p>The supported MFA types.</p>
     */
    inline Settings& WithMfaTypes(Aws::Vector<MfaTypesElement>&& value) { SetMfaTypes(std::move(value)); return *this;}

    /**
     * <p>The supported MFA types.</p>
     */
    inline Settings& AddMfaTypes(const MfaTypesElement& value) { m_mfaTypesHasBeenSet = true; m_mfaTypes.push_back(value); return *this; }

    /**
     * <p>The supported MFA types.</p>
     */
    inline Settings& AddMfaTypes(MfaTypesElement&& value) { m_mfaTypesHasBeenSet = true; m_mfaTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The body of the SMS message.</p>
     */
    inline const Aws::String& GetSmsMessage() const{ return m_smsMessage; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetSmsMessage(const Aws::String& value) { m_smsMessageHasBeenSet = true; m_smsMessage = value; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetSmsMessage(Aws::String&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::move(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetSmsMessage(const char* value) { m_smsMessageHasBeenSet = true; m_smsMessage.assign(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline Settings& WithSmsMessage(const Aws::String& value) { SetSmsMessage(value); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline Settings& WithSmsMessage(Aws::String&& value) { SetSmsMessage(std::move(value)); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline Settings& WithSmsMessage(const char* value) { SetSmsMessage(value); return *this;}

  private:

    Aws::Vector<MfaTypesElement> m_mfaTypes;
    bool m_mfaTypesHasBeenSet = false;

    Aws::String m_smsMessage;
    bool m_smsMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
