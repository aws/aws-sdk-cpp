/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * specific AWS account using bring your own IP addresses (BYOIP). For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#prepare-for-byoip">Prepare
   * to Bring Your Address Range to Your AWS Account</a> in the <i>Amazon Elastic
   * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CidrAuthorizationContext">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CidrAuthorizationContext
  {
  public:
    CidrAuthorizationContext();
    CidrAuthorizationContext(const Aws::Utils::Xml::XmlNode& xmlNode);
    CidrAuthorizationContext& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline CidrAuthorizationContext& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline CidrAuthorizationContext& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
