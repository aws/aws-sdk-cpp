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
  class AWS_SES_API GetIdentityMailFromDomainAttributesResult
  {
  public:
    GetIdentityMailFromDomainAttributesResult();
    GetIdentityMailFromDomainAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetIdentityMailFromDomainAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline const Aws::Map<Aws::String, IdentityMailFromDomainAttributes>& GetMailFromDomainAttributes() const{ return m_mailFromDomainAttributes; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline void SetMailFromDomainAttributes(const Aws::Map<Aws::String, IdentityMailFromDomainAttributes>& value) { m_mailFromDomainAttributes = value; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline void SetMailFromDomainAttributes(Aws::Map<Aws::String, IdentityMailFromDomainAttributes>&& value) { m_mailFromDomainAttributes = std::move(value); }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& WithMailFromDomainAttributes(const Aws::Map<Aws::String, IdentityMailFromDomainAttributes>& value) { SetMailFromDomainAttributes(value); return *this;}

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& WithMailFromDomainAttributes(Aws::Map<Aws::String, IdentityMailFromDomainAttributes>&& value) { SetMailFromDomainAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(const Aws::String& key, const IdentityMailFromDomainAttributes& value) { m_mailFromDomainAttributes.emplace(key, value); return *this; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(Aws::String&& key, const IdentityMailFromDomainAttributes& value) { m_mailFromDomainAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(const Aws::String& key, IdentityMailFromDomainAttributes&& value) { m_mailFromDomainAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(Aws::String&& key, IdentityMailFromDomainAttributes&& value) { m_mailFromDomainAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(const char* key, IdentityMailFromDomainAttributes&& value) { m_mailFromDomainAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of identities to custom MAIL FROM attributes.</p>
     */
    inline GetIdentityMailFromDomainAttributesResult& AddMailFromDomainAttributes(const char* key, const IdentityMailFromDomainAttributes& value) { m_mailFromDomainAttributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIdentityMailFromDomainAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIdentityMailFromDomainAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, IdentityMailFromDomainAttributes> m_mailFromDomainAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
