/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Response for GetSubscriptionAttributes action.</p>
   */
  class AWS_SNS_API GetSubscriptionAttributesResult
  {
  public:
    GetSubscriptionAttributesResult();
    GetSubscriptionAttributesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetSubscriptionAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = value; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>SubscriptionArn</code> -- the subscription's
     * ARN</p> </li> <li> <p> <code>TopicArn</code> -- the topic ARN that the
     * subscription is associated with</p> </li> <li> <p> <code>Owner</code> -- the AWS
     * account ID of the subscription's owner</p> </li> <li> <p>
     * <code>ConfirmationWasAuthenticated</code> -- true if the subscription
     * confirmation request was authenticated</p> </li> <li> <p>
     * <code>DeliveryPolicy</code> -- the JSON serialization of the subscription's
     * delivery policy</p> </li> <li> <p> <code>EffectiveDeliveryPolicy</code> -- the
     * JSON serialization of the effective delivery policy that takes into account the
     * topic delivery policy and account system defaults</p> </li> </ul>
     */
    inline GetSubscriptionAttributesResult& AddAttributes(const char* key, const char* value) { m_attributes[key] = value; return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetSubscriptionAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSubscriptionAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Map<Aws::String, Aws::String> m_attributes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws