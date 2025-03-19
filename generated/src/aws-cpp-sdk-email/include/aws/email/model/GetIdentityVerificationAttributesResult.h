/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/IdentityVerificationAttributes.h>
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
   * <p>The Amazon SES verification status of a list of identities. For domain
   * identities, this response also contains the verification token.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetIdentityVerificationAttributesResult
  {
  public:
    AWS_SES_API GetIdentityVerificationAttributesResult() = default;
    AWS_SES_API GetIdentityVerificationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityVerificationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline const Aws::Map<Aws::String, IdentityVerificationAttributes>& GetVerificationAttributes() const { return m_verificationAttributes; }
    template<typename VerificationAttributesT = Aws::Map<Aws::String, IdentityVerificationAttributes>>
    void SetVerificationAttributes(VerificationAttributesT&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::forward<VerificationAttributesT>(value); }
    template<typename VerificationAttributesT = Aws::Map<Aws::String, IdentityVerificationAttributes>>
    GetIdentityVerificationAttributesResult& WithVerificationAttributes(VerificationAttributesT&& value) { SetVerificationAttributes(std::forward<VerificationAttributesT>(value)); return *this;}
    template<typename VerificationAttributesKeyT = Aws::String, typename VerificationAttributesValueT = IdentityVerificationAttributes>
    GetIdentityVerificationAttributesResult& AddVerificationAttributes(VerificationAttributesKeyT&& key, VerificationAttributesValueT&& value) {
      m_verificationAttributesHasBeenSet = true; m_verificationAttributes.emplace(std::forward<VerificationAttributesKeyT>(key), std::forward<VerificationAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIdentityVerificationAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, IdentityVerificationAttributes> m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
