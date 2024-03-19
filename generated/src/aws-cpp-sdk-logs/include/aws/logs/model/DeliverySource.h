/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about one <i>delivery source</i> in your
   * account. A delivery source is an Amazon Web Services resource that sends logs to
   * an Amazon Web Services destination. The destination can be CloudWatch Logs,
   * Amazon S3, or Firehose.</p> <p>Only some Amazon Web Services services support
   * being configured as a delivery source. These services are listed as <b>Supported
   * [V2 Permissions]</b> in the table at <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AWS-logs-and-resource-policy.html">Enabling
   * logging from Amazon Web Services services.</a> </p> <p>To configure logs
   * delivery between a supported Amazon Web Services service and a destination, you
   * must do the following:</p> <ul> <li> <p>Create a delivery source, which is a
   * logical object that represents the resource that is actually sending the logs.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliverySource.html">PutDeliverySource</a>.</p>
   * </li> <li> <p>Create a <i>delivery destination</i>, which is a logical object
   * that represents the actual delivery destination. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliveryDestination.html">PutDeliveryDestination</a>.</p>
   * </li> <li> <p>If you are delivering logs cross-account, you must use <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliveryDestinationPolicy.html">PutDeliveryDestinationPolicy</a>
   * in the destination account to assign an IAM policy to the destination. This
   * policy allows delivery to that destination. </p> </li> <li> <p>Create a
   * <i>delivery</i> by pairing exactly one delivery source and one delivery
   * destination. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>.</p>
   * </li> </ul> <p>You can configure a single delivery source to send logs to
   * multiple destinations by creating multiple deliveries. You can also create
   * multiple deliveries to configure multiple delivery sources to send logs to the
   * same delivery destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeliverySource">AWS
   * API Reference</a></p>
   */
  class DeliverySource
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeliverySource();
    AWS_CLOUDWATCHLOGS_API DeliverySource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DeliverySource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline DeliverySource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline DeliverySource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the delivery source.</p>
     */
    inline DeliverySource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline DeliverySource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline DeliverySource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * source.</p>
     */
    inline DeliverySource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline DeliverySource& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline DeliverySource& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline DeliverySource& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline DeliverySource& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>This array contains the ARN of the Amazon Web Services resource that sends
     * logs and is represented by this delivery source. Currently, only one ARN can be
     * in the array.</p>
     */
    inline DeliverySource& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline DeliverySource& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline DeliverySource& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services service that is sending logs.</p>
     */
    inline DeliverySource& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline const Aws::String& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline void SetLogType(const Aws::String& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline void SetLogType(Aws::String&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline void SetLogType(const char* value) { m_logTypeHasBeenSet = true; m_logType.assign(value); }

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline DeliverySource& WithLogType(const Aws::String& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline DeliverySource& WithLogType(Aws::String&& value) { SetLogType(std::move(value)); return *this;}

    /**
     * <p>The type of log that the source is sending. For valid values for this
     * parameter, see the documentation for the source service.</p>
     */
    inline DeliverySource& WithLogType(const char* value) { SetLogType(value); return *this;}


    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery source.</p>
     */
    inline DeliverySource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
