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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for CreateTopic action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopicInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API CreateTopicRequest : public SNSRequest
  {
  public:
    CreateTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopic"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline CreateTopicRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline CreateTopicRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline CreateTopicRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags to add to a new topic.</p>
     */
    inline CreateTopicRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
