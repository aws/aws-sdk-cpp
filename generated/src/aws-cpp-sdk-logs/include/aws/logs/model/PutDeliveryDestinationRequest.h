/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OutputFormat.h>
#include <aws/logs/model/DeliveryDestinationConfiguration.h>
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
  class PutDeliveryDestinationRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliveryDestination"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline PutDeliveryDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline PutDeliveryDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline PutDeliveryDestinationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline PutDeliveryDestinationRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline PutDeliveryDestinationRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


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
    inline PutDeliveryDestinationRequest& WithDeliveryDestinationConfiguration(const DeliveryDestinationConfiguration& value) { SetDeliveryDestinationConfiguration(value); return *this;}

    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline PutDeliveryDestinationRequest& WithDeliveryDestinationConfiguration(DeliveryDestinationConfiguration&& value) { SetDeliveryDestinationConfiguration(std::move(value)); return *this;}


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
    inline PutDeliveryDestinationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline PutDeliveryDestinationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
