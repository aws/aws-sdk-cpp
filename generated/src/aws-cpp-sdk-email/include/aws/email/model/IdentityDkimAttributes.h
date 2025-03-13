/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/VerificationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the DKIM attributes of a verified email address or a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/IdentityDkimAttributes">AWS
   * API Reference</a></p>
   */
  class IdentityDkimAttributes
  {
  public:
    AWS_SES_API IdentityDkimAttributes() = default;
    AWS_SES_API IdentityDkimAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API IdentityDkimAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Is true if DKIM signing is enabled for email sent from the identity. It's
     * false otherwise. The default value is true.</p>
     */
    inline bool GetDkimEnabled() const { return m_dkimEnabled; }
    inline bool DkimEnabledHasBeenSet() const { return m_dkimEnabledHasBeenSet; }
    inline void SetDkimEnabled(bool value) { m_dkimEnabledHasBeenSet = true; m_dkimEnabled = value; }
    inline IdentityDkimAttributes& WithDkimEnabled(bool value) { SetDkimEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline VerificationStatus GetDkimVerificationStatus() const { return m_dkimVerificationStatus; }
    inline bool DkimVerificationStatusHasBeenSet() const { return m_dkimVerificationStatusHasBeenSet; }
    inline void SetDkimVerificationStatus(VerificationStatus value) { m_dkimVerificationStatusHasBeenSet = true; m_dkimVerificationStatus = value; }
    inline IdentityDkimAttributes& WithDkimVerificationStatus(VerificationStatus value) { SetDkimVerificationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you need to create DNS CNAME records that point to DKIM public keys that
     * are hosted by Amazon SES. Amazon Web Services eventually detects that you've
     * updated your DNS records. This detection process might take up to 72 hours.
     * After successful detection, Amazon SES is able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDkimTokens() const { return m_dkimTokens; }
    inline bool DkimTokensHasBeenSet() const { return m_dkimTokensHasBeenSet; }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    void SetDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens = std::forward<DkimTokensT>(value); }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    IdentityDkimAttributes& WithDkimTokens(DkimTokensT&& value) { SetDkimTokens(std::forward<DkimTokensT>(value)); return *this;}
    template<typename DkimTokensT = Aws::String>
    IdentityDkimAttributes& AddDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.emplace_back(std::forward<DkimTokensT>(value)); return *this; }
    ///@}
  private:

    bool m_dkimEnabled{false};
    bool m_dkimEnabledHasBeenSet = false;

    VerificationStatus m_dkimVerificationStatus{VerificationStatus::NOT_SET};
    bool m_dkimVerificationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_dkimTokens;
    bool m_dkimTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
