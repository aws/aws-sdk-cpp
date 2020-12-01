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
  class AWS_AMPLIFYBACKEND_API EmailSettings
  {
  public:
    EmailSettings();
    EmailSettings(Aws::Utils::Json::JsonView jsonValue);
    EmailSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the email.</p>
     */
    inline const Aws::String& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * <p>The body of the email.</p>
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * <p>The body of the email.</p>
     */
    inline void SetEmailMessage(const Aws::String& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * <p>The body of the email.</p>
     */
    inline void SetEmailMessage(Aws::String&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * <p>The body of the email.</p>
     */
    inline void SetEmailMessage(const char* value) { m_emailMessageHasBeenSet = true; m_emailMessage.assign(value); }

    /**
     * <p>The body of the email.</p>
     */
    inline EmailSettings& WithEmailMessage(const Aws::String& value) { SetEmailMessage(value); return *this;}

    /**
     * <p>The body of the email.</p>
     */
    inline EmailSettings& WithEmailMessage(Aws::String&& value) { SetEmailMessage(std::move(value)); return *this;}

    /**
     * <p>The body of the email.</p>
     */
    inline EmailSettings& WithEmailMessage(const char* value) { SetEmailMessage(value); return *this;}


    /**
     * <p>The subject of the email.</p>
     */
    inline const Aws::String& GetEmailSubject() const{ return m_emailSubject; }

    /**
     * <p>The subject of the email.</p>
     */
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetEmailSubject(const Aws::String& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = value; }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetEmailSubject(Aws::String&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::move(value); }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetEmailSubject(const char* value) { m_emailSubjectHasBeenSet = true; m_emailSubject.assign(value); }

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailSettings& WithEmailSubject(const Aws::String& value) { SetEmailSubject(value); return *this;}

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailSettings& WithEmailSubject(Aws::String&& value) { SetEmailSubject(std::move(value)); return *this;}

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailSettings& WithEmailSubject(const char* value) { SetEmailSubject(value); return *this;}

  private:

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet;

    Aws::String m_emailSubject;
    bool m_emailSubjectHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
