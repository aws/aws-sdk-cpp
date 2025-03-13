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
   * <p>The configuration for the email sent when an app user forgets their
   * password.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/EmailSettings">AWS
   * API Reference</a></p>
   */
  class EmailSettings
  {
  public:
    AWS_AMPLIFYBACKEND_API EmailSettings() = default;
    AWS_AMPLIFYBACKEND_API EmailSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API EmailSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the email message.</p>
     */
    inline const Aws::String& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = Aws::String>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = Aws::String>
    EmailSettings& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the subject line of the email message.</p>
     */
    inline const Aws::String& GetEmailSubject() const { return m_emailSubject; }
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }
    template<typename EmailSubjectT = Aws::String>
    void SetEmailSubject(EmailSubjectT&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::forward<EmailSubjectT>(value); }
    template<typename EmailSubjectT = Aws::String>
    EmailSettings& WithEmailSubject(EmailSubjectT&& value) { SetEmailSubject(std::forward<EmailSubjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Aws::String m_emailSubject;
    bool m_emailSubjectHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
