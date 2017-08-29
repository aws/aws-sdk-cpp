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
  class AWS_SES_API GetIdentityDkimAttributesResult
  {
  public:
    GetIdentityDkimAttributesResult();
    GetIdentityDkimAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetIdentityDkimAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline const Aws::Map<Aws::String, IdentityDkimAttributes>& GetDkimAttributes() const{ return m_dkimAttributes; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline void SetDkimAttributes(const Aws::Map<Aws::String, IdentityDkimAttributes>& value) { m_dkimAttributes = value; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline void SetDkimAttributes(Aws::Map<Aws::String, IdentityDkimAttributes>&& value) { m_dkimAttributes = std::move(value); }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& WithDkimAttributes(const Aws::Map<Aws::String, IdentityDkimAttributes>& value) { SetDkimAttributes(value); return *this;}

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& WithDkimAttributes(Aws::Map<Aws::String, IdentityDkimAttributes>&& value) { SetDkimAttributes(std::move(value)); return *this;}

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const Aws::String& key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(key, value); return *this; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(Aws::String&& key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const Aws::String& key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(Aws::String&& key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const char* key, IdentityDkimAttributes&& value) { m_dkimAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The DKIM attributes for an email address or a domain.</p>
     */
    inline GetIdentityDkimAttributesResult& AddDkimAttributes(const char* key, const IdentityDkimAttributes& value) { m_dkimAttributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIdentityDkimAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIdentityDkimAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, IdentityDkimAttributes> m_dkimAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
