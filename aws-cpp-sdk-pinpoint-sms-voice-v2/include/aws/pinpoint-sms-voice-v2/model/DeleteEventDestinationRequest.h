/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DeleteEventDestinationRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEventDestination"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline DeleteEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline DeleteEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set or the configuration set's Amazon Resource
     * Name (ARN) to remove the event destination from. The ConfigurateSetName and
     * ConfigurationSetArn can be found using the <a>DescribeConfigurationSets</a>
     * action.</p>
     */
    inline DeleteEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline DeleteEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline DeleteEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline DeleteEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
