/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>A signed document that proves that you are authorized to bring the specified
   * IP address range to Amazon using BYOIP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamCidrAuthorizationContext">AWS
   * API Reference</a></p>
   */
  class IpamCidrAuthorizationContext
  {
  public:
    AWS_EC2_API IpamCidrAuthorizationContext();
    AWS_EC2_API IpamCidrAuthorizationContext(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamCidrAuthorizationContext& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline IpamCidrAuthorizationContext& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
