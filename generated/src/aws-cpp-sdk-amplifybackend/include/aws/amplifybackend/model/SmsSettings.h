/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>SMS settings for authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/SmsSettings">AWS
   * API Reference</a></p>
   */
  class SmsSettings
  {
  public:
    AWS_AMPLIFYBACKEND_API SmsSettings();
    AWS_AMPLIFYBACKEND_API SmsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API SmsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the SMS message.</p>
     */
    inline const Aws::String& GetSmsMessage() const{ return m_smsMessage; }
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }
    inline void SetSmsMessage(const Aws::String& value) { m_smsMessageHasBeenSet = true; m_smsMessage = value; }
    inline void SetSmsMessage(Aws::String&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::move(value); }
    inline void SetSmsMessage(const char* value) { m_smsMessageHasBeenSet = true; m_smsMessage.assign(value); }
    inline SmsSettings& WithSmsMessage(const Aws::String& value) { SetSmsMessage(value); return *this;}
    inline SmsSettings& WithSmsMessage(Aws::String&& value) { SetSmsMessage(std::move(value)); return *this;}
    inline SmsSettings& WithSmsMessage(const char* value) { SetSmsMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_smsMessage;
    bool m_smsMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
