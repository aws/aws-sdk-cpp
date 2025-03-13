/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/IdentityMailFromDomainAttributes.h>
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
   * <p>Represents the custom MAIL FROM attributes for a list of
   * identities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetIdentityMailFromDomainAttributesResult
  {
  public:
    AWS_SES_API GetIdentityMailFromDomainAttributesResult() = default;
    AWS_SES_API GetIdentityMailFromDomainAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityMailFromDomainAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline const Aws::Map<Aws::String, IdentityMailFromDomainAttributes>& GetMailFromDomainAttributes() const { return m_mailFromDomainAttributes; }
    template<typename MailFromDomainAttributesT = Aws::Map<Aws::String, IdentityMailFromDomainAttributes>>
    void SetMailFromDomainAttributes(MailFromDomainAttributesT&& value) { m_mailFromDomainAttributesHasBeenSet = true; m_mailFromDomainAttributes = std::forward<MailFromDomainAttributesT>(value); }
    template<typename MailFromDomainAttributesT = Aws::Map<Aws::String, IdentityMailFromDomainAttributes>>
    GetIdentityMailFromDomainAttributesResult& WithMailFromDomainAttributes(MailFromDomainAttributesT&& value) { SetMailFromDomainAttributes(std::forward<MailFromDomainAttributesT>(value)); return *this;}
    template<typename MailFromDomainAttributesKeyT = Aws::String, typename MailFromDomainAttributesValueT = IdentityMailFromDomainAttributes>
    GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(MailFromDomainAttributesKeyT&& key, MailFromDomainAttributesValueT&& value) {
      m_mailFromDomainAttributesHasBeenSet = true; m_mailFromDomainAttributes.emplace(std::forward<MailFromDomainAttributesKeyT>(key), std::forward<MailFromDomainAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIdentityMailFromDomainAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, IdentityMailFromDomainAttributes> m_mailFromDomainAttributes;
    bool m_mailFromDomainAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
