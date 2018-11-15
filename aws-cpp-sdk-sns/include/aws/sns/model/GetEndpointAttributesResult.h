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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>Response from GetEndpointAttributes of the EndpointArn.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API GetEndpointAttributesResult
  {
  public:
    GetEndpointAttributesResult();
    GetEndpointAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetEndpointAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline GetEndpointAttributesResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetEndpointAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetEndpointAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
