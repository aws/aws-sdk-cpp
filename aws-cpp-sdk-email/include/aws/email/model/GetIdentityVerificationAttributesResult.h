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
    AWS_SES_API GetIdentityVerificationAttributesResult();
    AWS_SES_API GetIdentityVerificationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityVerificationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline const Aws::Map<Aws::String, IdentityVerificationAttributes>& GetVerificationAttributes() const{ return m_verificationAttributes; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline void SetVerificationAttributes(const Aws::Map<Aws::String, IdentityVerificationAttributes>& value) { m_verificationAttributes = value; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline void SetVerificationAttributes(Aws::Map<Aws::String, IdentityVerificationAttributes>&& value) { m_verificationAttributes = std::move(value); }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& WithVerificationAttributes(const Aws::Map<Aws::String, IdentityVerificationAttributes>& value) { SetVerificationAttributes(value); return *this;}

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& WithVerificationAttributes(Aws::Map<Aws::String, IdentityVerificationAttributes>&& value) { SetVerificationAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(const Aws::String& key, const IdentityVerificationAttributes& value) { m_verificationAttributes.emplace(key, value); return *this; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(Aws::String&& key, const IdentityVerificationAttributes& value) { m_verificationAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(const Aws::String& key, IdentityVerificationAttributes&& value) { m_verificationAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(Aws::String&& key, IdentityVerificationAttributes&& value) { m_verificationAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(const char* key, IdentityVerificationAttributes&& value) { m_verificationAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of Identities to IdentityVerificationAttributes objects.</p>
     */
    inline GetIdentityVerificationAttributesResult& AddVerificationAttributes(const char* key, const IdentityVerificationAttributes& value) { m_verificationAttributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIdentityVerificationAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIdentityVerificationAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, IdentityVerificationAttributes> m_verificationAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
