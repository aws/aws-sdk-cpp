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
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for SetEndpointAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API SetEndpointAttributesRequest : public SNSRequest
  {
  public:
    SetEndpointAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetEndpointAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline SetEndpointAttributesRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline SetEndpointAttributesRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>EndpointArn used for SetEndpointAttributes action.</p>
     */
    inline SetEndpointAttributesRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline SetEndpointAttributesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
