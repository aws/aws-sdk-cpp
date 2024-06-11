﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class IdentityVerificationAttributes
  {
  public:
    AWS_SES_API IdentityVerificationAttributes();
    AWS_SES_API IdentityVerificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API IdentityVerificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline const VerificationStatus& GetVerificationStatus() const{ return m_verificationStatus; }
    inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
    inline void SetVerificationStatus(const VerificationStatus& value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = value; }
    inline void SetVerificationStatus(VerificationStatus&& value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = std::move(value); }
    inline IdentityVerificationAttributes& WithVerificationStatus(const VerificationStatus& value) { SetVerificationStatus(value); return *this;}
    inline IdentityVerificationAttributes& WithVerificationStatus(VerificationStatus&& value) { SetVerificationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline const Aws::String& GetVerificationToken() const{ return m_verificationToken; }
    inline bool VerificationTokenHasBeenSet() const { return m_verificationTokenHasBeenSet; }
    inline void SetVerificationToken(const Aws::String& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = value; }
    inline void SetVerificationToken(Aws::String&& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = std::move(value); }
    inline void SetVerificationToken(const char* value) { m_verificationTokenHasBeenSet = true; m_verificationToken.assign(value); }
    inline IdentityVerificationAttributes& WithVerificationToken(const Aws::String& value) { SetVerificationToken(value); return *this;}
    inline IdentityVerificationAttributes& WithVerificationToken(Aws::String&& value) { SetVerificationToken(std::move(value)); return *this;}
    inline IdentityVerificationAttributes& WithVerificationToken(const char* value) { SetVerificationToken(value); return *this;}
    ///@}
  private:

    VerificationStatus m_verificationStatus;
    bool m_verificationStatusHasBeenSet = false;

    Aws::String m_verificationToken;
    bool m_verificationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
