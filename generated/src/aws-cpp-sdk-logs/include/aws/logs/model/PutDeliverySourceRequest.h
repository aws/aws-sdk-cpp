/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutDeliverySourceRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliverySourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliverySource"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline PutDeliverySourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline PutDeliverySourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for this delivery source. This name must be unique for all delivery
     * sources in your account.</p>
     */
    inline PutDeliverySourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline PutDeliverySourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline PutDeliverySourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services resource that is generating and sending
     * logs. For example,
     * <code>arn:aws:workmail:us-east-1:123456789012:organization/m-1234EXAMPLEabcd1234abcd1234abcd1234</code>
     * </p>
     */
    inline PutDeliverySourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetLogType() const{ return m_logType; }

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline void SetLogType(const Aws::String& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline void SetLogType(Aws::String&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline void SetLogType(const char* value) { m_logTypeHasBeenSet = true; m_logType.assign(value); }

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline PutDeliverySourceRequest& WithLogType(const Aws::String& value) { SetLogType(value); return *this;}

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline PutDeliverySourceRequest& WithLogType(Aws::String&& value) { SetLogType(std::move(value)); return *this;}

    /**
     * <p>Defines the type of log that the source is sending.</p> <ul> <li> <p>For
     * Amazon CodeWhisperer, the valid value is <code>EVENT_LOGS</code>.</p> </li> <li>
     * <p>For IAM Identity Centerr, the valid value is <code>ERROR_LOGS</code>.</p>
     * </li> <li> <p>For Amazon WorkMail, the valid values are
     * <code>ACCESS_CONTROL_LOGS</code>, <code>AUTHENTICATION_LOGS</code>,
     * <code>WORKMAIL_AVAILABILITY_PROVIDER_LOGS</code>, and
     * <code>WORKMAIL_MAILBOX_ACCESS_LOGS</code>.</p> </li> </ul>
     */
    inline PutDeliverySourceRequest& WithLogType(const char* value) { SetLogType(value); return *this;}


    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliverySourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
