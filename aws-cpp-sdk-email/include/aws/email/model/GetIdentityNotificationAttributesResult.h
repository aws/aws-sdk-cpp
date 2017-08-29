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
#include <aws/email/model/IdentityNotificationAttributes.h>
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
   * <p>Represents the notification attributes for a list of
   * identities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API GetIdentityNotificationAttributesResult
  {
  public:
    GetIdentityNotificationAttributesResult();
    GetIdentityNotificationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetIdentityNotificationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline const Aws::Map<Aws::String, IdentityNotificationAttributes>& GetNotificationAttributes() const{ return m_notificationAttributes; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline void SetNotificationAttributes(const Aws::Map<Aws::String, IdentityNotificationAttributes>& value) { m_notificationAttributes = value; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline void SetNotificationAttributes(Aws::Map<Aws::String, IdentityNotificationAttributes>&& value) { m_notificationAttributes = std::move(value); }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& WithNotificationAttributes(const Aws::Map<Aws::String, IdentityNotificationAttributes>& value) { SetNotificationAttributes(value); return *this;}

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& WithNotificationAttributes(Aws::Map<Aws::String, IdentityNotificationAttributes>&& value) { SetNotificationAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(const Aws::String& key, const IdentityNotificationAttributes& value) { m_notificationAttributes.emplace(key, value); return *this; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(Aws::String&& key, const IdentityNotificationAttributes& value) { m_notificationAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(const Aws::String& key, IdentityNotificationAttributes&& value) { m_notificationAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(Aws::String&& key, IdentityNotificationAttributes&& value) { m_notificationAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(const char* key, IdentityNotificationAttributes&& value) { m_notificationAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline GetIdentityNotificationAttributesResult& AddNotificationAttributes(const char* key, const IdentityNotificationAttributes& value) { m_notificationAttributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIdentityNotificationAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIdentityNotificationAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, IdentityNotificationAttributes> m_notificationAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
