/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/IdentityDkimAttributes.h>
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
   * <p>Represents the status of Amazon SES Easy DKIM signing for an identity. For
   * domain identities, this response also contains the DKIM tokens that are required
   * for Easy DKIM signing, and whether Amazon SES successfully verified that these
   * tokens were published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetIdentityDkimAttributesResult
  {
  public:
    AWS_SES_API GetIdentityDkimAttributesResult() = default;
    AWS_SES_API GetIdentityDkimAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityDkimAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline const Aws::Map<Aws::String, IdentityDkimAttributes>& GetDkimAttributes() const { return m_dkimAttributes; }
    template<typename DkimAttributesT = Aws::Map<Aws::String, IdentityDkimAttributes>>
    void SetDkimAttributes(DkimAttributesT&& value) { m_dkimAttributesHasBeenSet = true; m_dkimAttributes = std::forward<DkimAttributesT>(value); }
    template<typename DkimAttributesT = Aws::Map<Aws::String, IdentityDkimAttributes>>
    GetIdentityDkimAttributesResult& WithDkimAttributes(DkimAttributesT&& value) { SetDkimAttributes(std::forward<DkimAttributesT>(value)); return *this;}
    template<typename DkimAttributesKeyT = Aws::String, typename DkimAttributesValueT = IdentityDkimAttributes>
    GetIdentityDkimAttributesResult& AddDkimAttributes(DkimAttributesKeyT&& key, DkimAttributesValueT&& value) {
      m_dkimAttributesHasBeenSet = true; m_dkimAttributes.emplace(std::forward<DkimAttributesKeyT>(key), std::forward<DkimAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIdentityDkimAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, IdentityDkimAttributes> m_dkimAttributes;
    bool m_dkimAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
