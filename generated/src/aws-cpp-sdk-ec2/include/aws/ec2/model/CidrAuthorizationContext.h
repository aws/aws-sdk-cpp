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
   * <p>Provides authorization for Amazon to bring a specific IP address range to a
   * specific Amazon Web Services account using bring your own IP addresses (BYOIP).
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#prepare-for-byoip">Configuring
   * your BYOIP address range</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CidrAuthorizationContext">AWS
   * API Reference</a></p>
   */
  class CidrAuthorizationContext
  {
  public:
    AWS_EC2_API CidrAuthorizationContext() = default;
    AWS_EC2_API CidrAuthorizationContext(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CidrAuthorizationContext& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CidrAuthorizationContext& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    CidrAuthorizationContext& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
