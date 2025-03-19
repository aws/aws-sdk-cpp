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
    AWS_AMPLIFYBACKEND_API Settings() = default;
    AWS_AMPLIFYBACKEND_API Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported MFA types.</p>
     */
    inline const Aws::Vector<MfaTypesElement>& GetMfaTypes() const { return m_mfaTypes; }
    inline bool MfaTypesHasBeenSet() const { return m_mfaTypesHasBeenSet; }
    template<typename MfaTypesT = Aws::Vector<MfaTypesElement>>
    void SetMfaTypes(MfaTypesT&& value) { m_mfaTypesHasBeenSet = true; m_mfaTypes = std::forward<MfaTypesT>(value); }
    template<typename MfaTypesT = Aws::Vector<MfaTypesElement>>
    Settings& WithMfaTypes(MfaTypesT&& value) { SetMfaTypes(std::forward<MfaTypesT>(value)); return *this;}
    inline Settings& AddMfaTypes(MfaTypesElement value) { m_mfaTypesHasBeenSet = true; m_mfaTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body of the SMS message.</p>
     */
    inline const Aws::String& GetSmsMessage() const { return m_smsMessage; }
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }
    template<typename SmsMessageT = Aws::String>
    void SetSmsMessage(SmsMessageT&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::forward<SmsMessageT>(value); }
    template<typename SmsMessageT = Aws::String>
    Settings& WithSmsMessage(SmsMessageT&& value) { SetSmsMessage(std::forward<SmsMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MfaTypesElement> m_mfaTypes;
    bool m_mfaTypesHasBeenSet = false;

    Aws::String m_smsMessage;
    bool m_smsMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
