/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsSnsTopicSubscription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A wrapper type for the topic's Amazon Resource Name (ARN).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSnsTopicDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsSnsTopicDetails
  {
  public:
    AwsSnsTopicDetails();
    AwsSnsTopicDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsSnsTopicDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline AwsSnsTopicDetails& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline AwsSnsTopicDetails& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of an AWS managed customer master key (CMK) for Amazon SNS or a custom
     * CMK.</p>
     */
    inline AwsSnsTopicDetails& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}


    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline const Aws::Vector<AwsSnsTopicSubscription>& GetSubscription() const{ return m_subscription; }

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline bool SubscriptionHasBeenSet() const { return m_subscriptionHasBeenSet; }

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline void SetSubscription(const Aws::Vector<AwsSnsTopicSubscription>& value) { m_subscriptionHasBeenSet = true; m_subscription = value; }

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline void SetSubscription(Aws::Vector<AwsSnsTopicSubscription>&& value) { m_subscriptionHasBeenSet = true; m_subscription = std::move(value); }

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& WithSubscription(const Aws::Vector<AwsSnsTopicSubscription>& value) { SetSubscription(value); return *this;}

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& WithSubscription(Aws::Vector<AwsSnsTopicSubscription>&& value) { SetSubscription(std::move(value)); return *this;}

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& AddSubscription(const AwsSnsTopicSubscription& value) { m_subscriptionHasBeenSet = true; m_subscription.push_back(value); return *this; }

    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& AddSubscription(AwsSnsTopicSubscription&& value) { m_subscriptionHasBeenSet = true; m_subscription.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of the topic.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline AwsSnsTopicDetails& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline AwsSnsTopicDetails& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline AwsSnsTopicDetails& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>The subscription's owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The subscription's owner.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The subscription's owner.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The subscription's owner.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The subscription's owner.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The subscription's owner.</p>
     */
    inline AwsSnsTopicDetails& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The subscription's owner.</p>
     */
    inline AwsSnsTopicDetails& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The subscription's owner.</p>
     */
    inline AwsSnsTopicDetails& WithOwner(const char* value) { SetOwner(value); return *this;}

  private:

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet;

    Aws::Vector<AwsSnsTopicSubscription> m_subscription;
    bool m_subscriptionHasBeenSet;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
