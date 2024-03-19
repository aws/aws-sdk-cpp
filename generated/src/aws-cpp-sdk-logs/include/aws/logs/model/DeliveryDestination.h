/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestinationType.h>
#include <aws/logs/model/OutputFormat.h>
#include <aws/logs/model/DeliveryDestinationConfiguration.h>
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
   * <p>This structure contains information about one <i>delivery destination</i> in
   * your account. A delivery destination is an Amazon Web Services resource that
   * represents an Amazon Web Services service that logs can be sent to. CloudWatch
   * Logs, Amazon S3, are supported as Firehose delivery destinations.</p> <p>To
   * configure logs delivery between a supported Amazon Web Services service and a
   * destination, you must do the following:</p> <ul> <li> <p>Create a delivery
   * source, which is a logical object that represents the resource that is actually
   * sending the logs. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliverySource.html">PutDeliverySource</a>.</p>
   * </li> <li> <p>Create a <i>delivery destination</i>, which is a logical object
   * that represents the actual delivery destination. </p> </li> <li> <p>If you are
   * delivering logs cross-account, you must use <a
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeliveryDestination">AWS
   * API Reference</a></p>
   */
  class DeliveryDestination
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeliveryDestination();
    AWS_CLOUDWATCHLOGS_API DeliveryDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DeliveryDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this delivery destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline DeliveryDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline DeliveryDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this delivery destination.</p>
     */
    inline DeliveryDestination& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline DeliveryDestination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline DeliveryDestination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline DeliveryDestination& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline const DeliveryDestinationType& GetDeliveryDestinationType() const{ return m_deliveryDestinationType; }

    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }

    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline void SetDeliveryDestinationType(const DeliveryDestinationType& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }

    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline void SetDeliveryDestinationType(DeliveryDestinationType&& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = std::move(value); }

    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline DeliveryDestination& WithDeliveryDestinationType(const DeliveryDestinationType& value) { SetDeliveryDestinationType(value); return *this;}

    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3, or
     * Firehose.</p>
     */
    inline DeliveryDestination& WithDeliveryDestinationType(DeliveryDestinationType&& value) { SetDeliveryDestinationType(std::move(value)); return *this;}


    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline DeliveryDestination& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline DeliveryDestination& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline const DeliveryDestinationConfiguration& GetDeliveryDestinationConfiguration() const{ return m_deliveryDestinationConfiguration; }

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline bool DeliveryDestinationConfigurationHasBeenSet() const { return m_deliveryDestinationConfigurationHasBeenSet; }

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline void SetDeliveryDestinationConfiguration(const DeliveryDestinationConfiguration& value) { m_deliveryDestinationConfigurationHasBeenSet = true; m_deliveryDestinationConfiguration = value; }

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline void SetDeliveryDestinationConfiguration(DeliveryDestinationConfiguration&& value) { m_deliveryDestinationConfigurationHasBeenSet = true; m_deliveryDestinationConfiguration = std::move(value); }

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline DeliveryDestination& WithDeliveryDestinationConfiguration(const DeliveryDestinationConfiguration& value) { SetDeliveryDestinationConfiguration(value); return *this;}

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline DeliveryDestination& WithDeliveryDestinationConfiguration(DeliveryDestinationConfiguration&& value) { SetDeliveryDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline DeliveryDestination& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType;
    bool m_deliveryDestinationTypeHasBeenSet = false;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    DeliveryDestinationConfiguration m_deliveryDestinationConfiguration;
    bool m_deliveryDestinationConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
