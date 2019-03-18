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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/VerificationStatus.h>
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
   * <p>Represents the verification attributes of a single identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/IdentityVerificationAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API IdentityVerificationAttributes
  {
  public:
    IdentityVerificationAttributes();
    IdentityVerificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    IdentityVerificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline const VerificationStatus& GetVerificationStatus() const{ return m_verificationStatus; }

    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }

    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline void SetVerificationStatus(const VerificationStatus& value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = value; }

    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline void SetVerificationStatus(VerificationStatus&& value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = std::move(value); }

    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline IdentityVerificationAttributes& WithVerificationStatus(const VerificationStatus& value) { SetVerificationStatus(value); return *this;}

    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline IdentityVerificationAttributes& WithVerificationStatus(VerificationStatus&& value) { SetVerificationStatus(std::move(value)); return *this;}


    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline const Aws::String& GetVerificationToken() const{ return m_verificationToken; }

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline bool VerificationTokenHasBeenSet() const { return m_verificationTokenHasBeenSet; }

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline void SetVerificationToken(const Aws::String& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = value; }

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline void SetVerificationToken(Aws::String&& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = std::move(value); }

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline void SetVerificationToken(const char* value) { m_verificationTokenHasBeenSet = true; m_verificationToken.assign(value); }

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline IdentityVerificationAttributes& WithVerificationToken(const Aws::String& value) { SetVerificationToken(value); return *this;}

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline IdentityVerificationAttributes& WithVerificationToken(Aws::String&& value) { SetVerificationToken(std::move(value)); return *this;}

    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline IdentityVerificationAttributes& WithVerificationToken(const char* value) { SetVerificationToken(value); return *this;}

  private:

    VerificationStatus m_verificationStatus;
    bool m_verificationStatusHasBeenSet;

    Aws::String m_verificationToken;
    bool m_verificationTokenHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
