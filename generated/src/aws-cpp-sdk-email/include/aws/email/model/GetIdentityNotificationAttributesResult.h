/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetIdentityNotificationAttributesResult
  {
  public:
    AWS_SES_API GetIdentityNotificationAttributesResult() = default;
    AWS_SES_API GetIdentityNotificationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityNotificationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A map of Identity to IdentityNotificationAttributes.</p>
     */
    inline const Aws::Map<Aws::String, IdentityNotificationAttributes>& GetNotificationAttributes() const { return m_notificationAttributes; }
    template<typename NotificationAttributesT = Aws::Map<Aws::String, IdentityNotificationAttributes>>
    void SetNotificationAttributes(NotificationAttributesT&& value) { m_notificationAttributesHasBeenSet = true; m_notificationAttributes = std::forward<NotificationAttributesT>(value); }
    template<typename NotificationAttributesT = Aws::Map<Aws::String, IdentityNotificationAttributes>>
    GetIdentityNotificationAttributesResult& WithNotificationAttributes(NotificationAttributesT&& value) { SetNotificationAttributes(std::forward<NotificationAttributesT>(value)); return *this;}
    template<typename NotificationAttributesKeyT = Aws::String, typename NotificationAttributesValueT = IdentityNotificationAttributes>
    GetIdentityNotificationAttributesResult& AddNotificationAttributes(NotificationAttributesKeyT&& key, NotificationAttributesValueT&& value) {
      m_notificationAttributesHasBeenSet = true; m_notificationAttributes.emplace(std::forward<NotificationAttributesKeyT>(key), std::forward<NotificationAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIdentityNotificationAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, IdentityNotificationAttributes> m_notificationAttributes;
    bool m_notificationAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
