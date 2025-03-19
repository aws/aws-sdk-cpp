/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /**
   * <p>Returns CNAME records that you must publish to the DNS server of your domain
   * to set up Easy DKIM with Amazon SES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkimResponse">AWS
   * API Reference</a></p>
   */
  class VerifyDomainDkimResult
  {
  public:
    AWS_SES_API VerifyDomainDkimResult() = default;
    AWS_SES_API VerifyDomainDkimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API VerifyDomainDkimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDkimTokens() const { return m_dkimTokens; }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    void SetDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens = std::forward<DkimTokensT>(value); }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    VerifyDomainDkimResult& WithDkimTokens(DkimTokensT&& value) { SetDkimTokens(std::forward<DkimTokensT>(value)); return *this;}
    template<typename DkimTokensT = Aws::String>
    VerifyDomainDkimResult& AddDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.emplace_back(std::forward<DkimTokensT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    VerifyDomainDkimResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dkimTokens;
    bool m_dkimTokensHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
