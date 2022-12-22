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
   * <p>Provides information about an Amazon SNS topic to which notifications can be
   * published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSnsTopicDetails">AWS
   * API Reference</a></p>
   */
  class AwsSnsTopicDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSnsTopicDetails();
    AWS_SECURITYHUB_API AwsSnsTopicDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSnsTopicDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline AwsSnsTopicDetails& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline AwsSnsTopicDetails& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
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
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline AwsSnsTopicDetails& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon SNS topic.</p>
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


    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline const Aws::String& GetSqsSuccessFeedbackRoleArn() const{ return m_sqsSuccessFeedbackRoleArn; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline bool SqsSuccessFeedbackRoleArnHasBeenSet() const { return m_sqsSuccessFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsSuccessFeedbackRoleArn(const Aws::String& value) { m_sqsSuccessFeedbackRoleArnHasBeenSet = true; m_sqsSuccessFeedbackRoleArn = value; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsSuccessFeedbackRoleArn(Aws::String&& value) { m_sqsSuccessFeedbackRoleArnHasBeenSet = true; m_sqsSuccessFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsSuccessFeedbackRoleArn(const char* value) { m_sqsSuccessFeedbackRoleArnHasBeenSet = true; m_sqsSuccessFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsSuccessFeedbackRoleArn(const Aws::String& value) { SetSqsSuccessFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsSuccessFeedbackRoleArn(Aws::String&& value) { SetSqsSuccessFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsSuccessFeedbackRoleArn(const char* value) { SetSqsSuccessFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline const Aws::String& GetSqsFailureFeedbackRoleArn() const{ return m_sqsFailureFeedbackRoleArn; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline bool SqsFailureFeedbackRoleArnHasBeenSet() const { return m_sqsFailureFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsFailureFeedbackRoleArn(const Aws::String& value) { m_sqsFailureFeedbackRoleArnHasBeenSet = true; m_sqsFailureFeedbackRoleArn = value; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsFailureFeedbackRoleArn(Aws::String&& value) { m_sqsFailureFeedbackRoleArnHasBeenSet = true; m_sqsFailureFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline void SetSqsFailureFeedbackRoleArn(const char* value) { m_sqsFailureFeedbackRoleArnHasBeenSet = true; m_sqsFailureFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsFailureFeedbackRoleArn(const Aws::String& value) { SetSqsFailureFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsFailureFeedbackRoleArn(Aws::String&& value) { SetSqsFailureFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithSqsFailureFeedbackRoleArn(const char* value) { SetSqsFailureFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline const Aws::String& GetApplicationSuccessFeedbackRoleArn() const{ return m_applicationSuccessFeedbackRoleArn; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline bool ApplicationSuccessFeedbackRoleArnHasBeenSet() const { return m_applicationSuccessFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline void SetApplicationSuccessFeedbackRoleArn(const Aws::String& value) { m_applicationSuccessFeedbackRoleArnHasBeenSet = true; m_applicationSuccessFeedbackRoleArn = value; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline void SetApplicationSuccessFeedbackRoleArn(Aws::String&& value) { m_applicationSuccessFeedbackRoleArnHasBeenSet = true; m_applicationSuccessFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline void SetApplicationSuccessFeedbackRoleArn(const char* value) { m_applicationSuccessFeedbackRoleArnHasBeenSet = true; m_applicationSuccessFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithApplicationSuccessFeedbackRoleArn(const Aws::String& value) { SetApplicationSuccessFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithApplicationSuccessFeedbackRoleArn(Aws::String&& value) { SetApplicationSuccessFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithApplicationSuccessFeedbackRoleArn(const char* value) { SetApplicationSuccessFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline const Aws::String& GetFirehoseSuccessFeedbackRoleArn() const{ return m_firehoseSuccessFeedbackRoleArn; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline bool FirehoseSuccessFeedbackRoleArnHasBeenSet() const { return m_firehoseSuccessFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseSuccessFeedbackRoleArn(const Aws::String& value) { m_firehoseSuccessFeedbackRoleArnHasBeenSet = true; m_firehoseSuccessFeedbackRoleArn = value; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseSuccessFeedbackRoleArn(Aws::String&& value) { m_firehoseSuccessFeedbackRoleArnHasBeenSet = true; m_firehoseSuccessFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseSuccessFeedbackRoleArn(const char* value) { m_firehoseSuccessFeedbackRoleArnHasBeenSet = true; m_firehoseSuccessFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseSuccessFeedbackRoleArn(const Aws::String& value) { SetFirehoseSuccessFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseSuccessFeedbackRoleArn(Aws::String&& value) { SetFirehoseSuccessFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseSuccessFeedbackRoleArn(const char* value) { SetFirehoseSuccessFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline const Aws::String& GetFirehoseFailureFeedbackRoleArn() const{ return m_firehoseFailureFeedbackRoleArn; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline bool FirehoseFailureFeedbackRoleArnHasBeenSet() const { return m_firehoseFailureFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseFailureFeedbackRoleArn(const Aws::String& value) { m_firehoseFailureFeedbackRoleArnHasBeenSet = true; m_firehoseFailureFeedbackRoleArn = value; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseFailureFeedbackRoleArn(Aws::String&& value) { m_firehoseFailureFeedbackRoleArnHasBeenSet = true; m_firehoseFailureFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline void SetFirehoseFailureFeedbackRoleArn(const char* value) { m_firehoseFailureFeedbackRoleArnHasBeenSet = true; m_firehoseFailureFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseFailureFeedbackRoleArn(const Aws::String& value) { SetFirehoseFailureFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseFailureFeedbackRoleArn(Aws::String&& value) { SetFirehoseFailureFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithFirehoseFailureFeedbackRoleArn(const char* value) { SetFirehoseFailureFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline const Aws::String& GetHttpSuccessFeedbackRoleArn() const{ return m_httpSuccessFeedbackRoleArn; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline bool HttpSuccessFeedbackRoleArnHasBeenSet() const { return m_httpSuccessFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpSuccessFeedbackRoleArn(const Aws::String& value) { m_httpSuccessFeedbackRoleArnHasBeenSet = true; m_httpSuccessFeedbackRoleArn = value; }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpSuccessFeedbackRoleArn(Aws::String&& value) { m_httpSuccessFeedbackRoleArnHasBeenSet = true; m_httpSuccessFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpSuccessFeedbackRoleArn(const char* value) { m_httpSuccessFeedbackRoleArnHasBeenSet = true; m_httpSuccessFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpSuccessFeedbackRoleArn(const Aws::String& value) { SetHttpSuccessFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpSuccessFeedbackRoleArn(Aws::String&& value) { SetHttpSuccessFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpSuccessFeedbackRoleArn(const char* value) { SetHttpSuccessFeedbackRoleArn(value); return *this;}


    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline const Aws::String& GetHttpFailureFeedbackRoleArn() const{ return m_httpFailureFeedbackRoleArn; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline bool HttpFailureFeedbackRoleArnHasBeenSet() const { return m_httpFailureFeedbackRoleArnHasBeenSet; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpFailureFeedbackRoleArn(const Aws::String& value) { m_httpFailureFeedbackRoleArnHasBeenSet = true; m_httpFailureFeedbackRoleArn = value; }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpFailureFeedbackRoleArn(Aws::String&& value) { m_httpFailureFeedbackRoleArnHasBeenSet = true; m_httpFailureFeedbackRoleArn = std::move(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline void SetHttpFailureFeedbackRoleArn(const char* value) { m_httpFailureFeedbackRoleArnHasBeenSet = true; m_httpFailureFeedbackRoleArn.assign(value); }

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpFailureFeedbackRoleArn(const Aws::String& value) { SetHttpFailureFeedbackRoleArn(value); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpFailureFeedbackRoleArn(Aws::String&& value) { SetHttpFailureFeedbackRoleArn(std::move(value)); return *this;}

    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline AwsSnsTopicDetails& WithHttpFailureFeedbackRoleArn(const char* value) { SetHttpFailureFeedbackRoleArn(value); return *this;}

  private:

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;

    Aws::Vector<AwsSnsTopicSubscription> m_subscription;
    bool m_subscriptionHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_sqsSuccessFeedbackRoleArn;
    bool m_sqsSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_sqsFailureFeedbackRoleArn;
    bool m_sqsFailureFeedbackRoleArnHasBeenSet = false;

    Aws::String m_applicationSuccessFeedbackRoleArn;
    bool m_applicationSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_firehoseSuccessFeedbackRoleArn;
    bool m_firehoseSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_firehoseFailureFeedbackRoleArn;
    bool m_firehoseFailureFeedbackRoleArnHasBeenSet = false;

    Aws::String m_httpSuccessFeedbackRoleArn;
    bool m_httpSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_httpFailureFeedbackRoleArn;
    bool m_httpFailureFeedbackRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
