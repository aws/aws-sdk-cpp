/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms-voice/model/EventDestinationDefinition.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * UpdateConfigurationSetEventDestinationRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/UpdateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API UpdateConfigurationSetEventDestinationRequest : public PinpointSMSVoiceRequest
  {
  public:
    UpdateConfigurationSetEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationSetEventDestination"; }

    Aws::String SerializePayload() const override;


    /**
     * ConfigurationSetName
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * ConfigurationSetName
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * ConfigurationSetName
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * ConfigurationSetName
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * ConfigurationSetName
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * ConfigurationSetName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * ConfigurationSetName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * ConfigurationSetName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    
    inline const EventDestinationDefinition& GetEventDestination() const{ return m_eventDestination; }

    
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }

    
    inline void SetEventDestination(const EventDestinationDefinition& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = value; }

    
    inline void SetEventDestination(EventDestinationDefinition&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::move(value); }

    
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestination(const EventDestinationDefinition& value) { SetEventDestination(value); return *this;}

    
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestinationDefinition&& value) { SetEventDestination(std::move(value)); return *this;}


    /**
     * EventDestinationName
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }

    /**
     * EventDestinationName
     */
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }

    /**
     * EventDestinationName
     */
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }

    /**
     * EventDestinationName
     */
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }

    /**
     * EventDestinationName
     */
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }

    /**
     * EventDestinationName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}

    /**
     * EventDestinationName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}

    /**
     * EventDestinationName
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    EventDestinationDefinition m_eventDestination;
    bool m_eventDestinationHasBeenSet;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
