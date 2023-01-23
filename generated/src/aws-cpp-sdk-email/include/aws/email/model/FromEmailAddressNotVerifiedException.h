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
   * <p>Indicates that the sender address specified for a custom verification email
   * is not verified, and is therefore not eligible to send the custom verification
   * email. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/FromEmailAddressNotVerifiedException">AWS
   * API Reference</a></p>
   */
  class FromEmailAddressNotVerifiedException
  {
  public:
    AWS_SES_API FromEmailAddressNotVerifiedException();
    AWS_SES_API FromEmailAddressNotVerifiedException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API FromEmailAddressNotVerifiedException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline FromEmailAddressNotVerifiedException& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline FromEmailAddressNotVerifiedException& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>Indicates that the from email address associated with the custom verification
     * email template is not verified.</p>
     */
    inline FromEmailAddressNotVerifiedException& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}

  private:

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
