/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Additional X-headers to include in the Delivery Status Notification (DSN)
   * when an email that Amazon SES receives on your behalf bounces.</p> <p>For
   * information about receiving email through Amazon SES, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ExtensionField">AWS
   * API Reference</a></p>
   */
  class ExtensionField
  {
  public:
    AWS_SES_API ExtensionField();
    AWS_SES_API ExtensionField(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ExtensionField& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline ExtensionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline ExtensionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline ExtensionField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline ExtensionField& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline ExtensionField& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the header to add. Must be less than 2048 characters, and must
     * not contain newline characters ("\r" or "\n").</p>
     */
    inline ExtensionField& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
