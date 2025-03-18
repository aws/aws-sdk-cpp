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
    AWS_AMPLIFYBACKEND_API SmsSettings() = default;
    AWS_AMPLIFYBACKEND_API SmsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API SmsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the SMS message.</p>
     */
    inline const Aws::String& GetSmsMessage() const { return m_smsMessage; }
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }
    template<typename SmsMessageT = Aws::String>
    void SetSmsMessage(SmsMessageT&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::forward<SmsMessageT>(value); }
    template<typename SmsMessageT = Aws::String>
    SmsSettings& WithSmsMessage(SmsMessageT&& value) { SetSmsMessage(std::forward<SmsMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_smsMessage;
    bool m_smsMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
