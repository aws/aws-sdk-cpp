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
    AWS_SES_API IdentityVerificationAttributes() = default;
    AWS_SES_API IdentityVerificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API IdentityVerificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The verification status of the identity: "Pending", "Success", "Failed", or
     * "TemporaryFailure".</p>
     */
    inline VerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
    inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
    inline void SetVerificationStatus(VerificationStatus value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = value; }
    inline IdentityVerificationAttributes& WithVerificationStatus(VerificationStatus value) { SetVerificationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification token for a domain identity. Null for email address
     * identities.</p>
     */
    inline const Aws::String& GetVerificationToken() const { return m_verificationToken; }
    inline bool VerificationTokenHasBeenSet() const { return m_verificationTokenHasBeenSet; }
    template<typename VerificationTokenT = Aws::String>
    void SetVerificationToken(VerificationTokenT&& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = std::forward<VerificationTokenT>(value); }
    template<typename VerificationTokenT = Aws::String>
    IdentityVerificationAttributes& WithVerificationToken(VerificationTokenT&& value) { SetVerificationToken(std::forward<VerificationTokenT>(value)); return *this;}
    ///@}
  private:

    VerificationStatus m_verificationStatus{VerificationStatus::NOT_SET};
    bool m_verificationStatusHasBeenSet = false;

    Aws::String m_verificationToken;
    bool m_verificationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
