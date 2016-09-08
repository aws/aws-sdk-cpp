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
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>The input for the SetSMSAttributes action.</p>
   */
  class AWS_SNS_API SetSMSAttributesRequest : public SNSRequest
  {
  public:
    SetSMSAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The default settings for sending SMS messages from your account. You can set
     * values for the following attribute names:</p> <p> <code>MonthlySpendLimit</code>
     * – The maximum amount in USD that you are willing to spend each month to send SMS
     * messages. When Amazon SNS determines that sending an SMS message would incur a
     * cost that exceeds this limit, it stops sending SMS messages within minutes.</p>
     * <important> <p>Amazon SNS stops sending SMS messages within minutes of the limit
     * being crossed. During that interval, if you continue to send SMS messages, you
     * will incur costs that exceed your limit.</p> </important> <p>By default, the
     * spend limit is set to the maximum allowed by Amazon SNS. If you want to exceed
     * the maximum, contact <a href="https://aws.amazon.com/premiumsupport/">AWS
     * Support</a> or your AWS sales representative for a service limit increase.</p>
     * <p> <code>DeliveryStatusIAMRole</code> – The ARN of the IAM role that allows
     * Amazon SNS to write logs about SMS deliveries in CloudWatch Logs. For each SMS
     * message that you send, Amazon SNS writes a log that includes the message price,
     * the success or failure status, the reason for failure (if the message failed),
     * the message dwell time, and other information.</p> <p>
     * <code>DeliveryStatusSuccessSamplingRate</code> – The percentage of successful
     * SMS deliveries for which Amazon SNS will write logs in CloudWatch Logs. The
     * value can be an integer from 0 - 100. For example, to write logs only for failed
     * deliveries, set this value to <code>0</code>. To write logs for 10% of your
     * successful deliveries, set it to <code>10</code>.</p> <p>
     * <code>DefaultSenderID</code> – A string, such as your business brand, that is
     * displayed as the sender on the receiving device. Support for sender IDs varies
     * by country. The sender ID can be 1 - 11 alphanumeric characters, and it must
     * contain at least one letter.</p> <p> <code>DefaultSMSType</code> – The type of
     * SMS message that you will send by default. You can assign the following
     * values:</p> <ul> <li> <p> <code>Promotional</code> – (Default) Noncritical
     * messages, such as marketing messages. Amazon SNS optimizes the message delivery
     * to incur the lowest cost.</p> </li> <li> <p> <code>Transactional</code> –
     * Critical messages that support customer transactions, such as one-time passcodes
     * for multi-factor authentication. Amazon SNS optimizes the message delivery to
     * achieve the highest reliability.</p> </li> </ul> <p>
     * <code>UsageReportS3Bucket</code> – The name of the Amazon S3 bucket to receive
     * daily SMS usage reports from Amazon SNS. Each day, Amazon SNS will deliver a
     * usage report as a CSV file to the bucket. The report includes the following
     * information for each SMS message that was successfully delivered by your
     * account:</p> <ul> <li> <p>Time that the message was published (in UTC)</p> </li>
     * <li> <p>Message ID</p> </li> <li> <p>Destination phone number</p> </li> <li>
     * <p>Message type</p> </li> <li> <p>Delivery status</p> </li> <li> <p>Message
     * price (in USD)</p> </li> <li> <p>Part number (a message is split into multiple
     * parts if it is too long for a single message)</p> </li> <li> <p>Total number of
     * parts</p> </li> </ul> <p>To receive the report, the bucket must have a policy
     * that allows the Amazon SNS service principle to perform the
     * <code>s3:PutObject</code> and <code>s3:GetBucketLocation</code> actions.</p>
     * <p>For an example bucket policy and usage report, see <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/sms_stats.html">Monitoring SMS
     * Activity</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     */
    inline SetSMSAttributesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
