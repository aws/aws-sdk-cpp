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
#include <aws/logs/model/DeliveryDestinationType.h>
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
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliveryDestination"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for this delivery destination. This name must be unique for all
     * delivery destinations in your account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutDeliveryDestinationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the logs that this delivery destination will receive.</p>
     */
    inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline PutDeliveryDestinationRequest& WithOutputFormat(OutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>  <p>
     * <code>deliveryDestinationConfiguration</code> is required for CloudWatch Logs,
     * Amazon S3, Firehose log delivery destinations and not required for X-Ray trace
     * delivery destinations. <code>deliveryDestinationType</code> is needed for X-Ray
     * trace delivery destinations but not required for other logs delivery
     * destinations.</p> 
     */
    inline const DeliveryDestinationConfiguration& GetDeliveryDestinationConfiguration() const { return m_deliveryDestinationConfiguration; }
    inline bool DeliveryDestinationConfigurationHasBeenSet() const { return m_deliveryDestinationConfigurationHasBeenSet; }
    template<typename DeliveryDestinationConfigurationT = DeliveryDestinationConfiguration>
    void SetDeliveryDestinationConfiguration(DeliveryDestinationConfigurationT&& value) { m_deliveryDestinationConfigurationHasBeenSet = true; m_deliveryDestinationConfiguration = std::forward<DeliveryDestinationConfigurationT>(value); }
    template<typename DeliveryDestinationConfigurationT = DeliveryDestinationConfiguration>
    PutDeliveryDestinationRequest& WithDeliveryDestinationConfiguration(DeliveryDestinationConfigurationT&& value) { SetDeliveryDestinationConfiguration(std::forward<DeliveryDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of delivery destination. This parameter specifies the target service
     * where log data will be delivered. Valid values include:</p> <ul> <li> <p>
     * <code>S3</code> - Amazon S3 for long-term storage and analytics</p> </li> <li>
     * <p> <code>CWL</code> - CloudWatch Logs for centralized log management</p> </li>
     * <li> <p> <code>FH</code> - Amazon Kinesis Data Firehose for real-time data
     * streaming</p> </li> <li> <p> <code>XRAY</code> - Amazon Web Services X-Ray for
     * distributed tracing and application monitoring</p> </li> </ul> <p>The delivery
     * destination type determines the format and configuration options available for
     * log delivery.</p>
     */
    inline DeliveryDestinationType GetDeliveryDestinationType() const { return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline PutDeliveryDestinationRequest& WithDeliveryDestinationType(DeliveryDestinationType value) { SetDeliveryDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PutDeliveryDestinationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PutDeliveryDestinationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutputFormat m_outputFormat{OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    DeliveryDestinationConfiguration m_deliveryDestinationConfiguration;
    bool m_deliveryDestinationConfigurationHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType{DeliveryDestinationType::NOT_SET};
    bool m_deliveryDestinationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
