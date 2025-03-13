/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/EventDestination.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create a configuration set event destination. A
   * configuration set event destination, which can be either Amazon CloudWatch or
   * Amazon Kinesis Firehose, describes an Amazon Web Services service in which
   * Amazon SES publishes the email sending events associated with a configuration
   * set. For information about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetEventDestinationRequest : public SESRequest
  {
  public:
    AWS_SES_API CreateConfigurationSetEventDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSetEventDestination"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the Amazon Web Services service that email sending
     * event where information is published.</p>
     */
    inline const EventDestination& GetEventDestination() const { return m_eventDestination; }
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }
    template<typename EventDestinationT = EventDestination>
    void SetEventDestination(EventDestinationT&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::forward<EventDestinationT>(value); }
    template<typename EventDestinationT = EventDestination>
    CreateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestinationT&& value) { SetEventDestination(std::forward<EventDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    EventDestination m_eventDestination;
    bool m_eventDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
