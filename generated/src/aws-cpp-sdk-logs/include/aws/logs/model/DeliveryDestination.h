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
   * Logs, Amazon S3, Firehose, and X-Ray are supported as delivery destinations.</p>
   * <p>To configure logs delivery between a supported Amazon Web Services service
   * and a destination, you must do the following:</p> <ul> <li> <p>Create a delivery
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
    AWS_CLOUDWATCHLOGS_API DeliveryDestination() = default;
    AWS_CLOUDWATCHLOGS_API DeliveryDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DeliveryDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this delivery destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeliveryDestination& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery
     * destination.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeliveryDestination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this delivery destination is CloudWatch Logs, Amazon S3,
     * Firehose, or X-Ray.</p>
     */
    inline DeliveryDestinationType GetDeliveryDestinationType() const { return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline DeliveryDestination& WithDeliveryDestinationType(DeliveryDestinationType value) { SetDeliveryDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the logs that are sent to this delivery destination. </p>
     */
    inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline DeliveryDestination& WithOutputFormat(OutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the ARN of the Amazon Web Services resource that
     * will receive the logs.</p>
     */
    inline const DeliveryDestinationConfiguration& GetDeliveryDestinationConfiguration() const { return m_deliveryDestinationConfiguration; }
    inline bool DeliveryDestinationConfigurationHasBeenSet() const { return m_deliveryDestinationConfigurationHasBeenSet; }
    template<typename DeliveryDestinationConfigurationT = DeliveryDestinationConfiguration>
    void SetDeliveryDestinationConfiguration(DeliveryDestinationConfigurationT&& value) { m_deliveryDestinationConfigurationHasBeenSet = true; m_deliveryDestinationConfiguration = std::forward<DeliveryDestinationConfigurationT>(value); }
    template<typename DeliveryDestinationConfigurationT = DeliveryDestinationConfiguration>
    DeliveryDestination& WithDeliveryDestinationConfiguration(DeliveryDestinationConfigurationT&& value) { SetDeliveryDestinationConfiguration(std::forward<DeliveryDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that have been assigned to this delivery destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DeliveryDestination& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DeliveryDestination& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType{DeliveryDestinationType::NOT_SET};
    bool m_deliveryDestinationTypeHasBeenSet = false;

    OutputFormat m_outputFormat{OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    DeliveryDestinationConfiguration m_deliveryDestinationConfiguration;
    bool m_deliveryDestinationConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
