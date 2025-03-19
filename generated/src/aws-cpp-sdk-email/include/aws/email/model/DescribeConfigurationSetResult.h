/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ConfigurationSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/TrackingOptions.h>
#include <aws/email/model/DeliveryOptions.h>
#include <aws/email/model/ReputationOptions.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/EventDestination.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /**
   * <p>Represents the details of a configuration set. Configuration sets enable you
   * to publish email sending events. For information about using configuration sets,
   * see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationSetResult
  {
  public:
    AWS_SES_API DescribeConfigurationSetResult() = default;
    AWS_SES_API DescribeConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API DescribeConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline const ConfigurationSet& GetConfigurationSet() const { return m_configurationSet; }
    template<typename ConfigurationSetT = ConfigurationSet>
    void SetConfigurationSet(ConfigurationSetT&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::forward<ConfigurationSetT>(value); }
    template<typename ConfigurationSetT = ConfigurationSet>
    DescribeConfigurationSetResult& WithConfigurationSet(ConfigurationSetT&& value) { SetConfigurationSet(std::forward<ConfigurationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    DescribeConfigurationSetResult& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = EventDestination>
    DescribeConfigurationSetResult& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the custom open and click tracking domain associated with the
     * configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const { return m_trackingOptions; }
    template<typename TrackingOptionsT = TrackingOptions>
    void SetTrackingOptions(TrackingOptionsT&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::forward<TrackingOptionsT>(value); }
    template<typename TrackingOptionsT = TrackingOptions>
    DescribeConfigurationSetResult& WithTrackingOptions(TrackingOptionsT&& value) { SetTrackingOptions(std::forward<TrackingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeliveryOptions& GetDeliveryOptions() const { return m_deliveryOptions; }
    template<typename DeliveryOptionsT = DeliveryOptions>
    void SetDeliveryOptions(DeliveryOptionsT&& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = std::forward<DeliveryOptionsT>(value); }
    template<typename DeliveryOptionsT = DeliveryOptions>
    DescribeConfigurationSetResult& WithDeliveryOptions(DeliveryOptionsT&& value) { SetDeliveryOptions(std::forward<DeliveryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the reputation settings for the configuration set.
     * </p>
     */
    inline const ReputationOptions& GetReputationOptions() const { return m_reputationOptions; }
    template<typename ReputationOptionsT = ReputationOptions>
    void SetReputationOptions(ReputationOptionsT&& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = std::forward<ReputationOptionsT>(value); }
    template<typename ReputationOptionsT = ReputationOptions>
    DescribeConfigurationSetResult& WithReputationOptions(ReputationOptionsT&& value) { SetReputationOptions(std::forward<ReputationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeConfigurationSetResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ConfigurationSet m_configurationSet;
    bool m_configurationSetHasBeenSet = false;

    Aws::Vector<EventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    TrackingOptions m_trackingOptions;
    bool m_trackingOptionsHasBeenSet = false;

    DeliveryOptions m_deliveryOptions;
    bool m_deliveryOptionsHasBeenSet = false;

    ReputationOptions m_reputationOptions;
    bool m_reputationOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
